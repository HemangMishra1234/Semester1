#include <stdio.h>
#include <stddef.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    int *ptr1 = &arr[1];  // Pointer pointing to the second element
    int *ptr2 = &arr[4];  // Pointer pointing to the fifth element

    // Subtracting pointers
    ptrdiff_t difference = ptr2 - ptr1;

    printf("The difference between ptr2 and ptr1 is %td elements.\n", difference);

    return 0;
}
