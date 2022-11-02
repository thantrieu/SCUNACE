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
		int h;
		puts("Nhap chieu cao h:");
		scanf("%d", &h);
		printf("Test %d: \n", k); // in ra thứ tự các bộ test
		if (h > 0) {
			int i, j;
			// xét từng hàng
			for (i = 1; i <= h; i++) {
				for (j = 1; j <= i; j++) {
					printf(" * "); // in ra các dấu *
				}
				// in xong i dấu * trên hàng thứ i thì xuống dòng
				puts(""); // in xuống dòng
			}
		}
		else {
			puts("ERROR");
		}
	}
}