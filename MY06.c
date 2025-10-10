#include <stdio.h>

#define showLine printf("++++++++++++++++++\n");

int main(){
    char fullnme[50];
    char nickname[20];
    int age;
    float salary;
    
    showLine;
    printf(" Your information \n");
    showLine;
    printf("Enter your full name: ");
    scanf("%[^\n]", &fullnme);
    printf("Enter your nickname: ");
    scanf("%s", &nickname);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    showLine;
    printf("Your full name is: %s\n", fullnme);
    printf("Your nickname is: %s\n", nickname);
    printf("Your age is: %d\n", age);
    printf("Your salary is: %.2f\n", salary);
    showLine;


    return 0;
}