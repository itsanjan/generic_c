# Linux basics

## Week 1
- D1 - File system, liscence, bootloader & boot process
- D2 - Static & shared libraries
- D3 - Makefile
- D4 - Multithreading
- D5

## Week 2
- D1 - Fork, wait_PID, system calls, process control, file manipulation
- D2 -
- D3 -
- D4 -
- D5 -


### W1D1 - File structure

### W1D2 - Static & shared libraries

Compile a simple .c code : gcc -o helloWorld helloWorld.c  

We can also create libraries :
1. Static (.a)

    - Create object file (compile library)
        > src : lib_mylib.c

    ```
    gcc -c lib_mylib.c -o lib_mylib.o
    ```
    - Create static library
    ```
    ar rcs lib_mylib.a lib_mylib.o
    ```

    - Create a program using static library created
    > src : driver.c
    ```
    gcc -c driver.c -o driver.o
    ```
    - linked compiled progeam with static library
    ```
    gcc -o driver driver.o -L. -l_mylib
    ```
    [1]

2. Share or dynamic libraries (.so or .dll)
   > src : shared.c
   ```
   gcc -o sample shared.c
   ```
   ldd ./sample
   ```
   linux-vdso.so.1 =>  (0x00007ffd880c1000)   
   libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007effbde40000)
   /lib64/ld-linux-x86-64.so.2 (0x00007effbe20a000)
   ```
   Here ldd perform a list dependencies of the programs binaries
   []
   ```
   gcc -shared -fPIC -o liblibrary.so library.c
   gcc application.c -L $(pwd)/ -llibrary -o sample_application
   export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
   ```

### W1D3 - Makefile

### W1D4 - Multhreading
```
#include <pthread.h>

gcc *.c -lpthread
```
1. Mutex
  - Can lock on only 1 resource
2. Semaphores
  - Can manage multiple resource



## References
- Libraries  
[1] https://www.geeksforgeeks.org/static-vs-dynamic-libraries/  
[2] https://hackernoon.com/static-and-dynamic-libraries-fe5d23daffe3  
[3] https://medium.com/@StueyGK/static-libraries-vs-dynamic-libraries-af78f0b5f1e4  
[4] https://www.geeksforgeeks.org/working-with-shared-libraries-set-1/  
[5] https://www.geeksforgeeks.org/working-with-shared-libraries-set-2/  
- Makefile  
- Multithreading  
[1] https://randu.org/tutorials/threads/  
[2] https://www.geeksforgeeks.org/multithreading-c-2/
[3] https://see.stanford.edu/materials/icsppcs107/23-Concurrency-Examples.pdf  
