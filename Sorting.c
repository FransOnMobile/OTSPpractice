#include <stdio.h>
#include <stdlib.h>

// Function for sorting the given array
void sort(int *arr, int size) {
    int temp = 0;

    // loop for running through all indeces of the array
    for(int i = 0; i < size; i++) {
        // another loop for running through all indeces of the array
        for(int j = i + 1; j < size; j++)
            // if value of array at ith index > value of array at jth index, swap them both
            if(*(arr + i) > *(arr + j)){
                temp = *(arr + i);
                *(arr + i) = *(arr + j);  // swap position of larger value and smaller value
                *(arr + j) = temp;  
            }
    }
    
    printf("The sorted array is: ");
    for(int k = 0; k < size; k++) {
        printf(" %d", arr[k]);
    }
}

int main() {
    int size = 0, start = 0;
    int *arr = (int*)malloc(100);
    int *sortedArr = (int*)malloc(100);
    
    printf("Input size of array: \n");
    scanf("%d", &size);
    
    // inputting values to array
    for(int i = 0; i < size; i++) {
        printf("Input value of index %d\n", i);
        scanf("%d", &arr[i]);
    }
    
    // sorting the array
    sort(arr, size);

    return 0;
}
