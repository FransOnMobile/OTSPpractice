#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function for determining if inputted string is a palindrome
void isPalindrome(char *arr, int size){
    char *rev = (char*)malloc(100);
    int count = 0;
    
    // loop to add to the rev array the characters of arr in reversed
    for(int i = size - 1; i >= 0; i--) {
        rev[count] = arr[i];
        count++;
    }
    rev[count] = '\0'; // remove newline character

    if(strcmp(arr, rev) == 0) 
        printf("%s is a palindrome!", arr);
    else
        printf("%s is not a palindrome!", arr);
}

// main function
int main() {
    char *arr = (char*)malloc(100);
    
    printf("Input string: \n");
    fgets(arr, 100, stdin);
    
    int size = strlen(arr);
    
    // it works like abc\n\0, where \n is when we press enter, and \0 is the end of the string
    // if newline character is found, replace with terminating character
    if (arr[size - 1] == '\n') {
        arr[size - 1] = '\0';
        size--;
    }
    
    isPalindrome(arr, size); // check if palindrome
    
    return 0;
}
