#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void failure(void) {
    printf("Memory failed to allocate.");
    exit(EXIT_FAILURE);
}

int main(void) {
    char *name = malloc(9 * sizeof(char));
    if (name == NULL) {
        failure();
    }
    strcpy(name, "onyxcode");

    int *numbers = calloc(2, sizeof(int));
    if (numbers == NULL) {
        failure();
    }
    numbers[0] = 14;
    numbers[1] = 1;


    name = realloc(name, 10 * sizeof(char));
    if (name == NULL) {
        failure();
    }
    strcat(name, " is epic!");

    free(name);
    free(numbers);

    return EXIT_SUCCESS;
}