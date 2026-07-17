#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Sanjana";
    char str2[] = "Saachi";
    printf("BFORE\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    strcpy(str1, str2);
    printf("after\n");
    printf("%s\n", str1);
    strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;

}