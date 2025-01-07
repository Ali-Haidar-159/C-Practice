#include <stdio.h>
#include <pthread.h>

void* calculate_square(void* arg) {
    int num = *((int*)arg);
    printf("The square of %d is %d\n", num, num * num);
    return NULL;
}

int main() {
    pthread_t threadID;
    int number = 7;

    // Create a new thread
    if (pthread_create(&threadID, NULL, calculate_square, &number) != 0) {
        printf("Error creating thread");
        return 1;
    }

    // Wait for the thread to complete
    pthread_join(threadID, NULL);

    return 0;
}

