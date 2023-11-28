#include <stdio.h>
#include <stdlib.h>

int Check_File(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    int ch1, ch2;
    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            fclose(f1);
            fclose(f2);
            return 0; 
        }
        return 1;
    }

    fclose(f1);
    fclose(f2);

    
    if (ch1 != ch2) {
        return 0;
    }

    return 1;
}

int main() {
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";
    const char *text = "This is a test.";



 	FILE *file = fopen(file1, "w");
	fprintf(file, "%s", text);
    fclose(file);
    
    file = fopen(file2, "w");
	fprintf(file, "%s", text);
    fclose(file);
    
    if (Check_File(file1, file2)) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    return 0;
}
