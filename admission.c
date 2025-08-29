#include <stdio.h>

int main() {
    int math, physics, chemistry, total, math_physics_total;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    total = math + physics + chemistry;
    math_physics_total = math + physics;

    if (math >= 65 && physics >= 55 && chemistry >= 50) {
        if (total >= 190 || math_physics_total >= 140) {
            printf("Eligible for admission.\n");
        } else {
            printf("Not eligible: Total marks condition not met.\n");
        }
    } else {
        printf("Not eligible: Individual subject marks condition not met.\n");
    }

    return 0;
}
