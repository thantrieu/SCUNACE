/**
 *@author Branium Academy
 *@version 2022.10.05
 *@see https://braniumacademy.net
 */

#include <stdio.h>

int main() {
    int start;
    printf("%s", "Giá trị bắt đầu 1 <= n <= 30: ");
    scanf("%d", &start);
    printf("%s", "Chiều cao: ");
    int width;
    scanf("%d", &width);
    printf("%s", "Chiều rộng: ");
    int height;
    scanf("%d", &height);
    int counter1 = start;
    int counter2 = start + width;
    int counter3 = start + 2 * width + height - 3;
    int counter4 = start + 2 * (width + height) - 5;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1) {
                printf("%3d", counter1++);
            } else if (j == width) {
                printf("%3d", counter2++);
            } else if (i == height) {
                printf("%3d", counter3--);
            } else if (j == 1) {
                printf("%3d", counter4--);
            } else {
                printf("%3s", ".");
            }
        }
        printf("\n");
    }
}
