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
		puts("Nhap hai so nguyen m, n: ");
		scanf("%d%d", &m, &n);
		printf("Test %d: \n", k); // in ra thứ tự các bộ test
		if (m > 0 && n > 0) {
			int i, j;
			for (i = 1; i <= m; i++) {
				for (j = 1; j <= n; j++) {
					// chỉ in ra * ở hàng đầu, hàng cuối, cột đầu, cột cuối
					if (i == 1 || i == m || j == 1 || j == n) {
						printf(" * "); // in ra các dấu *
					}
					else { // những vị trí còn lại in dấu cách
						printf("   "); // in ra ba dấu cách
					}
					// dành bao nhiêu kí tự in dấu * thì dành bấy nhiêu kí tự in dấu cách
				}
				puts(""); // in xuống dòng
			}
		}
		else {
			puts("ERROR");
		}
	}
}