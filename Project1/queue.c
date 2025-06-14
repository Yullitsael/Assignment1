// queue.c
#include "queue.h"

PQ createQueue() {
    PQ q = malloc(sizeof(Q));
    if (q) {
        q->head = NULL;
        q->tail = NULL;
    }
    return q;
}

bool isEmpty(PQ q) {
    return q->head == NULL;
}

bool enqueue(PQ q, USER u) {
    PNODE newNode = malloc(sizeof(NODE));
    if (!newNode) return false;

    newNode->data = u;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->head = newNode;
        q->tail = newNode;
    }
    else {
        q->tail->next = newNode;
        q->tail = newNode;
    }
    return true;
}

bool dequeue(PQ q) {
    if (isEmpty(q)) return false;

    PNODE temp = q->head;
    printf("Username: %s\nLevel: %d\nFaction: %s\n\n",
        temp->data.username, temp->data.lvl, temp->data.faction);

    q->head = q->head->next;
    if (q->head == NULL) q->tail = NULL;

    free(temp);
    return true;
}

void freeQueue(PQ q) {
    while (!isEmpty(q)) {
        dequeue(q);
    }
    free(q);
}
