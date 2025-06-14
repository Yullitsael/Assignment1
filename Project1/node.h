// node.h
#pragma once
#include "user.h"

typedef struct Node {
    USER data;
    struct Node* next;
} NODE, * PNODE;
