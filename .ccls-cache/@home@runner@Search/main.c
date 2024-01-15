#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int k = 4, item = 7, j = 0;

    printf("----- Array Elements ----- \n");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("Element in arr [%d] is: %d\n", i, arr[i]);
    }

    while (j < sizeof(arr)/sizeof(arr[0])) {
        if (arr[j] == item) 
            break;
        j++;
    }

    // Check if the item was found in the array
    if (j < sizeof(arr)/sizeof(arr[0])) {
        printf("Item %d is located in index %d\n", item, j);
    } else {
        printf("Item %d not found in the array\n", item);
    }

    return 0;
}
