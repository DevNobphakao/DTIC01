#include <stdio.h>
#include <string.h>
#define showline printf("------------------------------\n");

int main() {
    char name[100];
    float height_cm, weight_kg, height_m, bmi;

    showline
    printf("BMI Calculator Program\n");
    showline

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter height (cm): ");
    scanf("%f", &height_cm);

    printf("Enter weight (kg): ");
    scanf("%f", &weight_kg);
    
    showline
    height_m = height_cm / 100.0;
    bmi = weight_kg / (height_m * height_m);
    printf("\nname: %s\n", name);
    printf("BMI calculated: %.2f\n", bmi);
    showline

    return 0;
}