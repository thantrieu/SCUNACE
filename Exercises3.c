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

// Nếu dùng Visual Studio thì thêm dòng sau:
#define _CRT_SECURE_NO_WARNINGS // không dùng Visual Studio thì xóa bỏ dòng này đi
#include <stdio.h>
#include <math.h>

int main() {
	int t; // số lượng các bộ test
	puts("Nhap so luong bo test: ");
	scanf("%d", &t);
	for(int k = 1; k <= t; k++) {
		int a, b, n;
		puts("Nhap ba so nguyen a, b, n:");
		scanf("%d%d%d", &a, &b, &n);
		printf("Test %d: ", k); // in ra số thứ tự bộ test
		if (n <= 0) {
			puts("ERROR");
		}
		else {
			if (a >= 0 && b >= 0) {
				int i;	 // biến chạy
				int count = 0; // biến đếm các số chính phương tìm được
				int bound = (int)sqrt(b); // giới hạn trên, ép kiểu sang int
				for (i = (int)sqrt(a); i <= bound; i++) {
					if (i * i >= a) {
						printf("%d ", i * i);
						count++;
						if (count == n) {
							break; // kết thúc
						}
					}
				}
				if (count == 0) {
					puts("NO RESULT");
				} else {
					puts(""); // in xuống dòng
				}
			}
			else {
				puts("NO RESULT");
			}
		}
	}
}