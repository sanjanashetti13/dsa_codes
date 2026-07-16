#include <stdio.h>

void indian (){
    printf("Namasthe");
}

void french(){
    printf("Bonjour");
}


int main(){

char resp;
printf("Input F or I: \n");
scanf("%c", &resp);

if(resp == 'I'){
    indian();
}

if(resp == 'F'){
    french();
}
    return 0;
}