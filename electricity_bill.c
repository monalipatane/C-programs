#include <stdio.h>

int main() {
    int units;
    float charge = 0.0, surcharge, total_bill;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        charge = units * 0.50;
    } else if (units <= 150) {
        // 50 units at 0.50 + remaining at 0.75
        charge = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        // 50 units at 0.50 + 100 units at 0.75 + remaining at 1.20
        charge = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        // Above 250 units
        charge = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    surcharge = charge * 0.20;  // 20% surcharge
    total_bill = charge + surcharge;

    printf("Electricity charge: Rs %.2f\n", charge);
    printf("Surcharge @20%%: Rs %.2f\n", surcharge);
    printf("Total electricity bill: Rs %.2f\n", total_bill);

    return 0;
}
