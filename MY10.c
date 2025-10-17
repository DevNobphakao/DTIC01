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
    switch(bus_number){
        case 57 : printf("Go to Pinklao Bangkunnon\n");
                break;
        case 3 : printf("Go to Sanam Luang Ladproao\n");
                break;
        case 71 : printf("Go to Hua Lamphong Yaowarat\n");
                break;
        case 56 : printf("Go to Bang Lamphu Sqphan Krungthon\n");
                break;
        case 539 : printf("Go to Anusawari Chai Samsen\n");
                break;
        default: printf("No bus number information...T_T\n");
    }
    senpa


    return 0;
}