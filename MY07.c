#include "stdio.h"
#define senpa printf("--------------------\n");

int main(){
    int number;

    senpa
    printf(" Lucky Number\n");
    senpa
    printf("Enter lucky number: ");
    scanf("%d" , &number );
    senpa
    if( number ==13 ){
        printf("You are correct, 13 is a lucky number\n");
    }
    senpa

    return 0;
}