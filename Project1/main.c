
// main.c
#include "queue.h"
#include "user.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number_of_users>\n", argv[0]);
        return 1;
    }

    int total = atoi(argv[1]);
    if (total <= 0) {
        printf("Invalid number of users.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));

    PQ q = createQueue();
    if (!q) {
        fprintf(stderr, "Failed to allocate queue.\n");
        return 1;
    }

    for (int i = 0; i < total; i++) {
        USER u;
        usernameRand(&u);
        lvlRand(&u);
        factionRand(&u);
        if (!enqueue(q, u)) {
            fprintf(stderr, "Failed to enqueue user.\n");
        }
    }

    while (!isEmpty(q)) {
        dequeue(q);
    }

    freeQueue(q);
    return 0;
}
