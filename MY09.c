#include <stdio.h>
#define senpa printf("----------------\n");

int main(){
    int bus_number;

    senpa
    printf(" Bus Number Information\n");
    senpa
    printf("Enter bus number : ");
    scanf("%d", &bus_number);
    senpa
    if(bus_number == 57 ){
        printf("Go to Pinklao Bangkunnon\n");
    }else if(bus_number == 3 ){
        printf("Go to Sanam Luang Ladproao\n");
    }else if(bus_number == 71 ){
        printf("Go to Hua Lamphong Yaowarat\n");
    }else if(bus_number == 56 ){
        printf("Go to Bang Lamphu Sqphan Krungthon\n");
    }else if(bus_number == 539 ){
        printf("Go to Anusawari Chai Samsen\n");
    }else {
        printf("No bus number information...T_T\n");
    }
    senpa


    return 0;
}

