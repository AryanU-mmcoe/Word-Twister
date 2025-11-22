#include <stdio.h>
#include<string.h>

char s1[100] , s2[50];
void lengthfind();
void combine();

int main() {
    int input;
    
    printf("Welcome to Word Twister!! What would you like to do?\n1. Find length of a word\n2. Combine two words\n");
    scanf("%d", &input);
   
   switch(input){
       case 1:
         lengthfind(s1);
       break;
       case 2:
         combine();
       break;
       default:
        printf("Invalid Input. Please Try again!");
       break;
   }
    
    return 0;
}

void lengthfind(){
    printf("Enter your word(Up till 100 Characters): ");
    scanf("%s", &s1);
    int length = strlen(s1); 
    printf("The length of the word is: %d\n", length);
}

void combine(){
    printf("Enter your first word/sentence: ");
    scanf("%s", &s1);
    
    printf("Enter your second word/sentence: ");
    scanf("%s", &s2);
    
    strcat(s1, s2);
    printf("%s\n", s1);
}
