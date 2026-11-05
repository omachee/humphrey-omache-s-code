#include <stdio.h>

int main() {
    int arr[10] = {5, 10, 15, 20};
    int size = 4;

    printf("Initial array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int pos_insert = 2;
    int val_insert = 99;

    for (int i = size; i > pos_insert; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos_insert] = val_insert;
    size++;

    printf("After inserting 99 at index 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int pos_delete = 1;

    for (int i = pos_delete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("After deleting item at index 1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}