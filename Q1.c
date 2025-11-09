#include <stdio.h>

int main() {
    int num, temp, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        result = result + (remainder * remainder * remainder);
        temp = temp / 10;
    }

    if (result == num) {
                printf("%d is an Armstrong number.\n", num)
    ;}
    else{
        printf("%d is not an Armstrong number.\n", num)
    ;}

    return 0;
}
