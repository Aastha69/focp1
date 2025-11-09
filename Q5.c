#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the coordinates (x and y): ");
    scanf("%f %f", &x, &y);

    // Determine quadrant or axis
    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the FIRST quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the SECOND quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the THIRD quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the FOURTH quadrant.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%.2f, %.2f) lies at the ORIGIN.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies on the Y-AXIS.\n", x, y);
    else if (y == 0)
        printf("The point (%.2f, %.2f) lies on the X-AXIS.\n", x, y);

    return 0;
}
