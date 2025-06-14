// user.h
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#define USERNAME_LEN 10
#define MAXLVL 60
#define MINLVL 1

typedef struct user {
    char username[USERNAME_LEN + 1];
    int lvl;
    char faction[10];
} USER, * PUSER;

void usernameRand(PUSER u);
void lvlRand(PUSER u);
void factionRand(PUSER u);
