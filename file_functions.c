#include <stdio.h>

void read_file(void) {
    FILE* file_pointer;

    char* file_name = "text.txt";
    char* opening_mode = "r", c;

    file_pointer = fopen(file_name, opening_mode);

    if (file_pointer == NULL) {
        printf("An error occurred whilst opening the file!");
    }
    else {
        c = fgetc(file_pointer);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(file_pointer);
        }

        fclose(file_pointer);
    }
    printf("\n\n");
}
