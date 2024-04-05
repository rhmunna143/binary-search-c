#include <stdio.h>

int binarySearch(int sortedArr[], int elementsNumber, int searchData) {
    int left = 0;
    int right = elementsNumber - 1;
    int mid;

    while(left <= right) {
        mid = (left + right) / 2;

        if(searchData == sortedArr[mid]) {
            return mid;
        } else if (searchData > sortedArr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int sortedArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elementsNumber = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int searchData = 6;

    int result = binarySearch(sortedArr, elementsNumber, searchData);

    if(result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index: %d\n", result);
    }

    return 0;
}