#include <stdio.h>

int main() {
    FILE *file;
    int i;


    file = fopen("divisible_numbers.txt", "w");
    if (file == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    // Write numbers divisible by either 3 or 5 into the file
    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    // Close the file
    fclose(file);

    printf("Numbers written to file successfully.\n");

    return 0;
}
