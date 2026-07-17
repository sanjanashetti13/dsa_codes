#include <stdio.h>

int count(char arr[]){
    int c = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        c++;
    }
    return c-1;
}


int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("%d", count(name));
    

    return 0; 
}

