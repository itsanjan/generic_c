#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details.
#include <pthread.h>

// A normal C function that is executed as a thread
// when its name is specified in pthread_create()
// https://timmurphy.org/2010/05/04/pthreads-in-c-a-minimal-working-example/
void *myThreadFun(void *vargp)
{
    sleep(1);
    printf("Printing from Thread 0\n");
    return NULL;
}

void *myThread_1(void *vargp)
{
    while(1){
    printf("Hello\n");
    }
    return NULL;
}

void *myThread_2(void *vargp)
{
    while(1){
    printf("World\n");
    }
    return NULL;
}

int main()
{
    pthread_t thread_id;
    pthread_t thread_id1, thread_id2;
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, myThreadFun, NULL);
    pthread_create(&thread_id1, NULL, myThread_1, NULL);
    pthread_create(&thread_id2, NULL, myThread_2, NULL);
    pthread_join(thread_id, NULL);
    pthread_join(thread_id1, NULL);
    pthread_join(thread_id2, NULL);
    printf("After Thread\n");
    exit(0);

}
