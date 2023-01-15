#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main() {
    FILE* pFile;
    char buffer[100];

    pFile = fopen("myfile.txt", "r");
    if (pFile == NULL) {
        perror("Error opening file");
    } else {
        while (!feof(pFile)) {
            if (fgets(buffer, 100, pFile) == NULL) {
                break;
            }
            fputs(buffer, stdout);
        }
        fclose(pFile);
    }

    _getch();
    return 0;
}