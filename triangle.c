#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter length of side 1,2 and 3 respectively: ");
    scanf("%f %f %f", &side1, &side2, &side3);
     {

        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    return 0;
}
