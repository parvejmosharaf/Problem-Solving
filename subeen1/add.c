#include <stdio.h>
/**
 * Take input two integer from user and add them.
 * 
 */

int main(){
    printf("Enter two number: ");
    int num1, num2, sum;
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum is: %d\n", sum);
    return 0;
}