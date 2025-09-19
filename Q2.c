#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in quadrant I\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in quadrant II\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in quadrant III\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in quadrant IV\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%d, %d) is at the origin\n", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) is on the y-axis\n", x, y);
    } else {
        printf("The point (%d, %d) is on the x-axis\n", x, y);
    }

    return 0;
}
