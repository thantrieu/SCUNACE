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
	scanf("%d", &t); // đọc vào số lượng bộ test
	for(int k = 1; k <= t; k++) {
		int m, n;
		puts("Nhap kich thuoc m, n:");
		scanf("%d%d", &m, &n); // đọc vào kích thước hàng, cột
		printf("Test %d: \n", k); // in ra thứ tự các bộ test
		if (m > 0 && n > 0) {
			int i, j;
			for (i = 1; i <= m; i++) {
				for (j = 1; j <= n; j++) {
					printf(" * "); // in ra các dấu *
				}
				puts(""); // in xuống dòng
			}
		}
		else {
			puts("ERROR");
		}
	}
}