/**
 * read char with Scanf, 
 */

#include <stdio.h>

int main(){
     // printf("Enter a char:");
     // char myChar = getchar();
     // printf("You have enter: %c\n", myChar);

     // char ch;
     // printf("Enter you first letter of your name: ");
     // scanf("%c", &ch);
     // printf("The first letter fo your name is: %c\n", ch);
     
     printf("Enter a string: ");
     char arr[100]; //like string
     gets(arr);
     printf("You entered: %s \n",arr);

     return 0;
}
