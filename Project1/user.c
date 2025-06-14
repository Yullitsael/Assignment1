// user.c
#include "user.h"

void usernameRand(PUSER u) {
    char options[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charSetSize = strlen(options);

    for (int i = 0; i < USERNAME_LEN; i++) {
        u->username[i] = options[rand() % charSetSize];
    }
    u->username[USERNAME_LEN] = '\0';
}

void lvlRand(PUSER u) {
    u->lvl = rand() % (MAXLVL - MINLVL + 1) + MINLVL;
}

void factionRand(PUSER u) {
    const char* factions[] = { "Red", "Blue", "Green" };
    strcpy(u->faction, factions[rand() % 3]);
}

