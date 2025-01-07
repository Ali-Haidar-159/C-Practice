#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void* printMessage(void* arg)
{
    int number = *((int*)arg);

    if (number == 196)
    {
        printf("Thread %d: Md. Tanvir Hossain\n", number);
    }
    else if (number == 193)
    {
        printf("Thread %d: Ali Haider\n", number);
    }
    else if (number == 182)
    {
        printf("Thread %d: Nabila Tabassum\n", number);
    }
    else
    {
        printf("Thread %d: Unknown operation.\n", number);
    }

    free(arg);   // Free dynamically allocated memory

    return NULL;
}

int main()
{
    pthread_t thread1, thread2, thread3;

    // Dynamically allocate memory for thread arguments
    int* arg1 = (int*) malloc(sizeof(int));
    int* arg2 = (int*) malloc(sizeof(int));
    int* arg3 = (int*) malloc(sizeof(int));

    // Assign values to the arguments
    *arg1 = 196;
    *arg2 = 193;
    *arg3 = 182;

    // Create threads
    if (pthread_create(&thread1, NULL, printMessage, arg1) != 0)
    {
        perror("Error creating thread 1");

        return 1;
    }
    if (pthread_create(&thread2, NULL, printMessage, arg2) != 0) {
        perror("Error creating thread 2");

        return 1;
    }
    if (pthread_create(&thread3, NULL, printMessage, arg3) != 0) {
        perror("Error creating thread 3");

        return 1;
    }

    // Wait for threads to complete
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    printf("\nAll threads have completed.\n");

    free(arg1);
    free(arg2);
    free(arg3);

    return 0;
}

