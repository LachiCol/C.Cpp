#include<iostream>
#include<stdlib.h>
using namespace std;

int W;
	int A, B, C, D, E;

int main() {

	cout << "1000원 미만의 거스름돈을 입력하시오. " << endl << endl;
	cin >> W;

	if (W >= 1000) {
		fprintf(stderr, "입력한 금액이 1000원 이상입니다.");
		return 1;
	}

	while (1) {
		if (W >= 500) {
			W = W - 500;
			A++;
			continue;
		}
		if (W >= 100) {
			W = W - 100;
			B++;
			continue;
		}
		if (W >= 50) {
			W = W - 50;
			C++;
			continue;
		}
		if (W >= 10) {
			W = W - 10;
			D++;
			continue;
		}
		if (W >= 1) {
			W = W - 1;
			E++;
			continue;

		}
		if (W == 0) {
			break;
		}
	}

	cout << "거스름돈은 500원 " << A << "개, 100원 " << B << "개, 50원 " << C
		<< "개, 10원 " << D << "개, 1원 " << E << "개 입니다." << endl << endl;

	return 0;

	system ("PAUSE");
}

