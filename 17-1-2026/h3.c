#include <stdio.h>

int calculateBonus(int years) {
    if (years < 2)
        return 0;
    else if (years <= 4)
        return 5000;
    else if (years <= 9)
        return 10000;
    else
        return 20000;
}

int main() {
    int years;
    int bonus;

    printf("Enter years of experience: ");
    scanf("%d", &years);

    bonus = calculateBonus(years);

    printf("Bonus amount = Rs. %d\n", bonus);

    return 0;
}
