#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    char **words = malloc(sizeof(char*) * (MAX_LENGTH / 2));
    if (words == NULL) {
        return NULL;
    }

    int i = 0;
    char *word = strtok(str, " ");
    while (word != NULL) {
        words[i] = word;
        i++;
        word = strtok(NULL, " ");
    }

    words[i] = NULL;

    return words;
}

