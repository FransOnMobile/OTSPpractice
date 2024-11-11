#include <stdio.h>
#include <stdlib.h>

// function for swapping values of two arrays
void swap(int *arr1, int *arr2){
    int temp = 0;
    
    // loop that loops 5 times
    for(int i = 0; i < 5; i++) {
        temp = arr1[i]; // put to temp the current value of arr1
        arr1[i] = arr2[i]; // change the current value of arr1 to the val of arr2
        arr2[i] = temp; // change the value of arr2 to the value of arr1 before changes
    }
    
    // printing of values
    
    printf("Values of Array 1: ");
    for(int k = 0; k < 5; k++) {
        printf("%d ", arr1[k]);
    }
    
    printf("\nValues of Array 2: ");
    for(int j = 0; j < 5; j++) {
        printf("%d ", arr2[j]);
    }
}

// main function
int main() {
    int *arr1 = (int*)malloc(100);
    int *arr2 = (int*)malloc(100);
    
    printf("Input 5 values for array 1: ");
    scanf("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);
    
    printf("Input 5 values for array 2: ");
    scanf("%d %d %d %d %d", &arr2[0], &arr2[1], &arr2[2], &arr2[3], &arr2[4]);
    
    swap(arr1, arr2);
    return 0;
}
