#include <stdio.h>
#include <pthread.h>

void* print_message(void* arg) {
    printf("Hello, World!\n");
    return NULL;
}

int main() {
    pthread_t threadID;

    if (pthread_create(&threadID, NULL, print_message, NULL) != 0) {
        printf("Error creating thread");
        return 1;
    }

    pthread_join(threadID, NULL);

    return 0;
}
