#include <stdio.h>
#include <stdlib.h>

float mean(int *arr) {
    float mean = 0;
    int count = 0;
    
    while(arr[count] != '\0'){
        mean += arr[count];
        count += 1;
    }
    return mean/count;
}

int median(int *arr, int size) {
    int pos = 0;
    
    if(size % 2 == 0) {
        size -= 1;
        pos = size / 2;
    }
    else if(size % 2 == 1) {
        pos = size / 2;
    }
    return arr[pos];
}

int mode(int *arr, int size) {
    int count = 0, currCount = 0, mode = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j])
                count++;
        }
        if(count > currCount){
            currCount = count;
            mode = i;
        }
    }
    if(count > 1)
        return arr[mode];
        
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
