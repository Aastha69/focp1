#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("HCF is not defined for zero.\n");
        return 0;
    }

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF (Highest Common Factor) of %d and %d is %d.\n", a, b, hcf);

    return 0;
}
