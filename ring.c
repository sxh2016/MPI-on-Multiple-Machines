#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int atoi(const char *str);

int main(int argc, char** argv) {
    const char* token = argv[1];
    int count = atoi(token);
    int count1 = count;
    MPI_Init(NULL, NULL);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);
    
    // the number that will be passed between processes
    int number = 1;
    
    // start time and end time
    double starttime;
    double endtime;
    
    // round number
    int round = 1;
    
    while(count > 0){
        if(world_rank == 0){
            // mark the start time at the begin of the process
            if(number == 1){
                starttime =  MPI_Wtime();
            }
            
            printf("Hello rank %d,the number here is %d. This is the first processin in round %d!\n",world_rank,number,round);
            
            if(number %10 == 0){
                printf("number here is multiple of 10\n");
            }
            
            // send number to the next process
            MPI_Send(&number,1,MPI_INT,1,0,MPI_COMM_WORLD);
            
            
            // receive number from the last process
            MPI_Recv(&number,1,MPI_INT,world_size - 1,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
            
            // increase the round number by 1
            round++;
            
            // increase the number by 1
            number += 1;
            
            // check if it is the end of the program, mark the elapsed time
            if(number == count1*world_size + 1){
                endtime =  MPI_Wtime();
                printf("time cost is : %lf.\n",endtime - starttime);
            }
        }
        else{
            // receive number from previous process
            MPI_Recv(&number,1,MPI_INT,world_rank - 1,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
            number += 1;
            
            printf("Hello rank %d,the number here is %d\n",world_rank,number);
            if(number %10 == 0){
                printf("number here is multiple of 10\n");
            }
            
            // send increased number to the next process
            MPI_Send(&number,1,MPI_INT,(world_rank + 1) % world_size,0,MPI_COMM_WORLD);
            
        }
        count--;
    }
    MPI_Finalize();
}