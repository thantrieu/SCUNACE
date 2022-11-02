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
#include <math.h>

int main() {
	int t; // số lượng bộ test
	puts("Nhap vao so bo test: ");
	scanf("%d", &t); // đọc vào số lượng bộ test
	for(int k = 1; k <= t; k++) {
		int h;
		puts("Nhap chieu cao h:");
		scanf("%d", &h);
		/* tam giác cân đối xứng qua cột thứ h và có chiều rộng 2h - 1 
		trên hàng thứ i ta in ra dấu * tại các vị trí |h-j| <= i-1
		các vị trí còn lại in ra dấu cách
		*/
		printf("Test %d: \n", k); // in ra thứ tự các bộ test
		if (h > 0) {
			int i, j;
			// xét từng hàng
			for (i = 1; i <= h; i++) {
				for (j = 1; j < 2*h; j++) {
					if (abs(h - j) <= i - 1) {
						printf(" * "); // in ra các dấu *
					}
					else {
						printf("   "); // in ra 3 dấu cách
					}
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