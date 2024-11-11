#include <stdio.h>
#include <stdlib.h>

// function for swapping two characters in array
void swap(char *char1, char *char2) {
    char temp;
    temp = *char1;
    *char1 = *char2;
    *char2 = temp;
}

// function for finding the permutation from a to nth alphabet
// using recursion, it starts with the most inner values and swaps them
// this continues until it reaches the full length and then prints
// once full length is reached, swap the first character with its neighbor and repeat
void findPermu(char *arr, int start, int end) {
    if(start == end) // checks if full length is reached
        printf("%s\n", arr);
    else {
        for(int i = start; i <= end; i++) {
            swap((arr + start), (arr + i));
            findPermu(arr, start + 1, end);
            swap((arr + start), (arr + i));
        }
    }
}

int main() {
    int n = 0;
    char *arr = (char*)malloc(100);
    
    printf("Input n: \n");
    scanf("%d", &n);
    
    // check if n input is valid
    if(n < 1 || n > 26) {
        printf("Invalid n input");
        return 0;
    }
    
    // loop for filling array with alphabets from a to nth alphabet
    for(int i = 0; i < n; i++) {
        arr[i] = 'a' + i;
    }
    
    arr[n] = '\0';
    findPermu(arr, 0, n - 1);

    return 0;
}
