#include <stdio.h>
#include <stdlib.h>

// Function for calculating mean
float mean(int *arr) {
    float mean = 0;
    int count = 0;
    
    // keeps adding current number in array until it reaches the end
    while(arr[count] != '\0'){
        mean += arr[count];
        count += 1;
    }
    
    // returns the average: total / count
    return mean/count;
}

// Function for calculating median
int median(int *arr, int size) {
    int pos = 0;
    
    // if size of array is even, median is in (size - 2)/2
    if(size % 2 == 0) {
        size -= 1;
        pos = size / 2;
    }
    
    // else if size of array is odd, median is in size/2
    else if(size % 2 == 1) {
        pos = size / 2;
    }
    return arr[pos];
}

// Function for calculating mode or most repeating
int mode(int *arr, int size) {
    int count = 0, currCount = 0, mode = 0;
    
    // loop for every element in array
    for(int i = 0; i < size; i++) {
        // another loop for every element in array
        for(int j = 0; j < size; j++) {
            // if we find a duplicate of that element in a different position, add count
            if(i != j && arr[i] == arr[j])
                count++;
        }
        
        // if new count of repeating elements is greater than old, store the new count
        if(count > currCount){
            currCount = count;
            mode = i;  // the mode will be the position in which the highest amount of count /  repeating elements is found
        }
    }
    if(count > 1)
        return arr[mode];
    
    // returns 0 if there is no mode found or if all elements have equal repetition
    return 0;
}

int main() {
    int* arr = (int*)malloc(100);
    int size;
    
    printf("Input Size of array: \n");
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++) {
        printf("Input value for index %d of array: \n", i);
        scanf("%d", &arr[i]);
    }
    
    printf("The mean of the values is: %.2f", mean(arr));
    printf("\nThe median of the values is: %d", median(arr, size));
    printf("\nThe mode of the values is: %d", mode(arr, size));

    return 0;
}
