#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "example.txt";
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file.");
        return EXIT_FAILURE;
    }
    fprintf(fp, "Hello, World!");
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file.");
        return EXIT_FAILURE;
    }
    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}

