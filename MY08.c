#include <stdio.h>
#define showPa printf("---------------------\n");

int main(){
        char pro_id[5], pro_name[50];
        float pro_price, pro_sale;
        
        showPa
        printf(" Calcuate Product Sale\n");
        showPa
        
        printf("Enter product code : ");
        scanf("%s", &pro_id);
        printf("Enter product name : ");
        scanf("%s", &pro_name);
        printf("Enter product price : ");
        scanf("%s", &pro_price);
        showPa
        if(pro_price < 1000){
            pro_sale = pro_price - (pro_price * 3 / 100.0);
        }else{
            pro_sale = pro_price - (pro_price * 5 / 100.0);
        }
        printf("Product sale : %.2f\n", pro_sale);
        showPa

    return 0;
}
