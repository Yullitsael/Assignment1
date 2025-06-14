// queue.h
#pragma once
#include "node.h"

typedef struct Queue {
    PNODE head;
    PNODE tail;
} Q, * PQ;

PQ createQueue();
bool isEmpty(PQ q);
bool enqueue(PQ q, USER u);
bool dequeue(PQ q);
void freeQueue(PQ q);

