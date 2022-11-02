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
// Liệt kê tối đa k số nguyên tố trong đoạn [a, b]

#include <stdio.h>
#include <math.h>

/*
* @author Branium Academy
*/

int main() {
	int t; // số lượng bộ test
	puts("Nhap so bo test: ");
	scanf("%d", &t);
	for(int testCase = 1; testCase <= t; testCase++) {
		int a, b, k;
		puts("Nhap ba so nguyen a, b, k:");
		scanf("%d%d%d", &a, &b, &k);
		printf("Test %d: ", testCase);
		// kiểm tra đầu vào
		if(k <= 0) {
			printf("ERROR\n");
			continue; // bỏ qua các lệnh còn lại trong vòng lặp
		}
		// biến lưu trạng thái kiểm tra số nguyên tố
		int isPrime; // biến đánh dấu xem giá trị đang xét có là số ng.tố
		int i, j;	 // biến chạy
		int count = 0; // biến đếm các số nguyên tố tìm được

		for (i = a; i <= b; i++) {
			isPrime = 1;
			if (i < 2) { // mọi giá trị nguyên < 2 không phải số nguyên tố
				isPrime = 0;
			}
			else {
				int bound = sqrt(i); // lấy căn bậc hai củai
				for (j = 2; j <= bound; j++) {
					if (i % j == 0) { // nếu i có ước khác 1 và chính nó
						isPrime = 0; // i không phải ng.tố
						break; // thoát vòng lặp
					}
				}
			}
			// dựa vào giá trị biến isPrime để đưa ra kết luận
			if (isPrime) {
				printf("%d ", i);
				count++;
				if (count == k) {
					break; // kết thúc
				}
			}
		}
		if (count == 0) {
			printf("NO RESULT\n");
		} else {
			printf("\n");
		}
	}
}