//preprocessor directive
//คือ ปก Libraty
#include <stdio.h>
#include "math.h"

//คือ ปก ค่าคงที่ = สร้างแทนของอะไรสั่งอย่างหนึ่ง
#define ShowPa printf("+++++++++++++++++++++\n");
#define SMILE "^-^ 555"

//global (ใช้ที่ใหนก็ได้) declaration (ปก/สร้าง)
int number = 999;
void showHey();

//user-defined function
void showHi(){
    printf("HI...\n");
}

//main function
int main(){
    ShowPa 
    printf("DTI-SAU\n");
    printf("%lf\n", pow(2, 20));
    ShowPa 
    showHi();
    showHey();

    return 0;
}

//user-defined function
void showHey(){
    printf("Hey.......\n");
}
