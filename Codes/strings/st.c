// #include <stdio.h>

// int main(){
//     char string[] = { 'S', 'A', 'N', 'P', 'A', 'V', '\0'};
//     //printf("%c\n", string[2]);

//     char st[] = "Sanjana";
//     printf("%s", &st);
//     return 0;
// }

#include <stdio.h>

int main(){
    char name[20]; 
    printf("Enter Name: ");
    fgets(name, 20, stdin);
    puts(name);
    return 0;
}