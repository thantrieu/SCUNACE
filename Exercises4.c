/**
 * @file Exercises1.c
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
	scanf("%d", &t);
	for(int k = 1; k <= t; k++) {
		int m, n;
		puts("Nhap kich thuoc m, n:");
		scanf("%d%d", &m, &n);
		printf("Test %d: \n", k);
		// kiểm tra xem cặp số m, n có hợp lệ không
		if (m > 0 && n > 0) {
			int i, j;
			for (i = 1; i <= m; i++) {
				for (j = i; j < n + i; j++) {
					printf("%d ", j); // in ra các phần tử trên cùng hàng
				}
				printf("\n"); // in xuống dòng
			}

		}
		else {
			puts("ERROR");
		}
	}
}