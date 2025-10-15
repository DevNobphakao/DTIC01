#include <stdio.h>
#define showline printf("-------------------------------\n");
int main() {
    float width, length, height;    
    float wall_area, ceiling_area, total_area;
    float paint_coverage = 2.75;    
    float paint_needed;

    showline
    printf(" Paint Calculator \n");
    showline

    printf("Enter room width (m): ");
    scanf("%f", &width);

    printf("Enter room length (m): ");
    scanf("%f", &length);

    printf("Enter room height (m): ");
    scanf("%f", &height);

    wall_area = 2 * height * (width + length);
    ceiling_area = width * length;
    total_area = wall_area + ceiling_area;
    paint_needed = total_area / paint_coverage;

    showline
    printf("Wall area: %.2f sq.m.\n", wall_area);
    printf("Ceiling area: %.2f sq.m.\n", ceiling_area);
    printf("Total area to paint: %.2f sq.m.\n", total_area);
    printf("Paint needed: %.2f gallons\n", paint_needed);
    showline

    return 0;
}
