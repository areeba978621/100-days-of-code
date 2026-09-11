//Q4: Write a program to calculate the area and circumference of a circle given its radius.s
#include <stdio.h>
int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}