/*we are going to test the git */

#include <stdio.h>

int main(){
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    printf("The square of the number is: %d \n", a*a);
    for(int i = 0; i<=100; i++){
	if(i%a == 0){
	printf("%d\n", i);
    }
}
}
