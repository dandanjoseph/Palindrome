/* 
 * File:   palindrome.c
 * Author: Joseph
 *
 * This program responds if you have entered palindrome or not
 * This program does not strip out cases, non alpha characters, and numbers
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 101



int main(void) {

    //this holds the size of the inputed text
    char inputStr[SIZE];

    int i =0;
    int j =0;
    int k = 0;
    int n = 0;
 
    

    //we need this to take stuff in
    setbuf(stdin, NULL);

    //we need this to take stuff out
    setbuf(stdout, NULL);

    printf("Enter a string:");

    //we use fgets to take stuff in, with the parameters of inputStr, the size and stdin
    fgets(inputStr, SIZE, stdin);
   // inputStr[strlen(inputStr) - 1] = '\0';

  
    
  

    //as we type in our text we have a loop that counts how much characters are inputed, 
    //when its not equal to the last char in the array of characters
    for (n = 0; inputStr[n] != '\0'; n++) {

        //if our inputed text at the position count is greater than 65 and less than 90 then we go
        if (inputStr[n] >= 65
                && inputStr[n] <= 90) 

            inputStr[n]= inputStr[n] + 32;

         else if (inputStr[n] >= 97 && inputStr[n] <= 122) 

            inputStr[n] = inputStr[n];

        
        
        k++;
    }
    
    j = k -2;
    
    
   
    while (i < j) {
        if (inputStr[i++] != inputStr[j--]){
            printf("This is not a palindrome");
        return 0;}

    }
    printf("This is a palindrome");
    return 1;

}


    
    
    
    




