#include<iostream>
#include<stdlib.h>
using namespace std;

int W;
	int A, B, C, D, E;

int main() {

	cout << "1000�� �̸��� �Ž������� �Է��Ͻÿ�. " << endl << endl;
	cin >> W;

	if (W >= 1000) {
		fprintf(stderr, "�Է��� �ݾ��� 1000�� �̻��Դϴ�.");
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

	cout << "�Ž������� 500�� " << A << "��, 100�� " << B << "��, 50�� " << C
		<< "��, 10�� " << D << "��, 1�� " << E << "�� �Դϴ�." << endl << endl;

	return 0;

	system ("PAUSE");
}

