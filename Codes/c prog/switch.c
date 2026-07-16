#include <stdio.h>


int main(){
int a = 18;
int b = 20;
char opr;

printf("Please Select: \n");
scanf("%c", &opr);

switch(opr)
{
    case '+': 
    printf("The sum: %d", a+b);
    break;

    case '-':
    printf("The sum is: %d", a-b);
    break;

    default:
    printf("Wrong");
    break;
}
    return 0;
}