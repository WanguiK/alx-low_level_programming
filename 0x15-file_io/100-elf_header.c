#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char buffer[letters + 1];
    ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
    if (bytesRead <= 0) {
        fclose(file);
        return 0;
    }

    buffer[bytesRead] = '\0';
    printf("%s"
