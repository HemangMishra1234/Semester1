#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open the file in binary write mode
    filePointer = fopen("DATA1", "wb");

    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // List of elements to be written to the file
    int elements[] = {12, 19, 24, 64, 70, 89, 99, 106, 109};
    int numElements = sizeof(elements) / sizeof(elements[0]);

    // Write each element to the file using putw
    for (int i = 0; i < numElements; ++i) {
        putw(elements[i], filePointer);
    }

    // Close the file
    fclose(filePointer);

    printf("Data written to file successfully.\n");

    return 0;
}
