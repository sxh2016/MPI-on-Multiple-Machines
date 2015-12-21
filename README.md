# HW6 for Distributed Systems

## User guide 

**Compile**

```
mpicc ring.c -o ring
```

**Execute**

```
mpirun -n <number of processes you want to execute> ./ring <number of round you want to execute>
```

## Example of result

If we execute the code in the following command :

```
mpirun -n 10 ./ring 10
```

The result displayed on the console will be :

```
Hello rank 0,the number here is 1. This is the first processin in round 1!
Hello rank 1,the number here is 2
Hello rank 2,the number here is 3
Hello rank 3,the number here is 4
Hello rank 4,the number here is 5
Hello rank 5,the number here is 6
Hello rank 6,the number here is 7
Hello rank 7,the number here is 8
Hello rank 8,the number here is 9
Hello rank 9,the number here is 10
number here is multiple of 10
Hello rank 0,the number here is 11. This is the first processin in round 2!
Hello rank 1,the number here is 12
Hello rank 2,the number here is 13
Hello rank 3,the number here is 14
Hello rank 4,the number here is 15
Hello rank 5,the number here is 16
Hello rank 6,the number here is 17
Hello rank 7,the number here is 18
Hello rank 8,the number here is 19
Hello rank 9,the number here is 20
number here is multiple of 10
Hello rank 0,the number here is 21. This is the first processin in round 3!
Hello rank 1,the number here is 22
Hello rank 2,the number here is 23
Hello rank 3,the number here is 24
Hello rank 4,the number here is 25
Hello rank 5,the number here is 26
Hello rank 6,the number here is 27
Hello rank 7,the number here is 28
Hello rank 8,the number here is 29
Hello rank 9,the number here is 30
number here is multiple of 10
Hello rank 0,the number here is 31. This is the first processin in round 4!
Hello rank 1,the number here is 32
Hello rank 5,the number here is 36
Hello rank 2,the number here is 33
Hello rank 3,the number here is 34
Hello rank 4,the number here is 35
Hello rank 6,the number here is 37
Hello rank 7,the number here is 38
Hello rank 8,the number here is 39
Hello rank 9,the number here is 40
number here is multiple of 10
Hello rank 0,the number here is 41. This is the first processin in round 5!
Hello rank 1,the number here is 42
Hello rank 2,the number here is 43
Hello rank 3,the number here is 44
Hello rank 4,the number here is 45
Hello rank 5,the number here is 46
Hello rank 6,the number here is 47
Hello rank 7,the number here is 48
Hello rank 8,the number here is 49
Hello rank 0,the number here is 51. This is the first processin in round 6!
Hello rank 9,the number here is 50
number here is multiple of 10
Hello rank 1,the number here is 52
Hello rank 2,the number here is 53
Hello rank 3,the number here is 54
Hello rank 4,the number here is 55
Hello rank 5,the number here is 56
Hello rank 6,the number here is 57
Hello rank 7,the number here is 58
Hello rank 8,the number here is 59
Hello rank 9,the number here is 60
number here is multiple of 10
Hello rank 0,the number here is 61. This is the first processin in round 7!
Hello rank 1,the number here is 62
Hello rank 2,the number here is 63
Hello rank 3,the number here is 64
Hello rank 4,the number here is 65
Hello rank 5,the number here is 66
Hello rank 6,the number here is 67
Hello rank 7,the number here is 68
Hello rank 8,the number here is 69
Hello rank 9,the number here is 70
number here is multiple of 10
Hello rank 0,the number here is 71. This is the first processin in round 8!
Hello rank 1,the number here is 72
Hello rank 4,the number here is 75
Hello rank 2,the number here is 73
Hello rank 3,the number here is 74
Hello rank 5,the number here is 76
Hello rank 6,the number here is 77
Hello rank 7,the number here is 78
Hello rank 8,the number here is 79
Hello rank 9,the number here is 80
number here is multiple of 10
Hello rank 0,the number here is 81. This is the first processin in round 9!
Hello rank 1,the number here is 82
Hello rank 2,the number here is 83
Hello rank 3,the number here is 84
Hello rank 4,the number here is 85
Hello rank 5,the number here is 86
Hello rank 6,the number here is 87
Hello rank 7,the number here is 88
Hello rank 8,the number here is 89
Hello rank 9,the number here is 90
number here is multiple of 10
Hello rank 0,the number here is 91. This is the first processin in round 10!
Hello rank 1,the number here is 92
Hello rank 2,the number here is 93
Hello rank 3,the number here is 94
Hello rank 4,the number here is 95
Hello rank 5,the number here is 96
Hello rank 6,the number here is 97
Hello rank 7,the number here is 98
Hello rank 8,the number here is 99
Hello rank 9,the number here is 100
number here is multiple of 10
time cost is : 0.001991.
```