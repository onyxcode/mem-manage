#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void failure(void) {
    printf("Memory failed to allocate.");
    exit(EXIT_FAILURE);
}

int main() {
    /// Stack memory
    char nam[500];
    int len;
    printf("What's your first name?\n> ");
    scanf("%s", &nam);
    len = strlen(nam);
    printf("'%s' is %d characters long. ", nam, len);

    /// Heap memory

    char *name = malloc(len * sizeof(char));
    strcpy(name, nam);
    printf("%s is your first name.\n", name);
    free(name);
}