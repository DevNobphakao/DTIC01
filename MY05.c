#include <stdio.h>

int dataA = 100;
const int info1 = 111;

void show(){
    int detaB = 200;
    int detaE;
    const int info2 =222;
    const int info3;
    printf("deataA = %d\n", dataA);
    printf("deataB = %d\n", detaB);
    detaE = 400;

}

int main(){ 
    int dataC = 300;
    printf("dataA = %d\n", dataA);
    printf("dataA = %d\n", dataC);
    dataC = 400;

    return 0;
}