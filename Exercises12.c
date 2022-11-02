/**
 * @file Exercises12.c
 * @author Branium Academy
 * @see https://braniumacademy.net
 * @brief 
 * @version 2.0
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) Branium Academy 2022
 * 
 */

#include <stdio.h>

int main() {
    int t; // số lượng bộ test
	puts("Nhap vao so bo test: ");
	scanf("%d", &t); // đọc vào số lượng bộ test
	for(int k = 1; k <= t; k++) {
        int start;
        int width;
        int height;
        printf("%s", "Nhap width, height, k: ");
        scanf("%d%d%d", &width, &height, &start);
        printf("Test %d: \n", k);
        if (width < 1 || height < 1) { // không có hình khối nào có độ dài các cạnh <= 0.
            puts("ERROR");
            continue;
        } else if(width == 1 && height == 1) {
            printf("%d\n", start);
            continue;
        } else if(width == 1) {
            for(int i = 1; i <= height; i++) {
                printf("%3d\n", start++);
            }
            continue;
        } else if(height == 1) {
            for(int i = 1; i <= width; i++) {
                printf("%3d", start++);
            }
            puts("");
            continue;
        }
        
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
}
