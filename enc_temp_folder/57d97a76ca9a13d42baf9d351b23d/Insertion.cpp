#include<iostream>
#define NUMS 10
#include <time.h>
using namespace std;

void swap(int* a, int* b)
{

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}


void insertionsort(int* arr, int n)
{
	for (int i = 1; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}
void main()
{

	srand(time(NULL));
	int arr[NUMS];
	cout << "[랜덤으로 10개의 정수를 만들어냅니다.]" << endl;
	for (int j = 0; j < NUMS; j++)
		arr[j] = rand() % 999 + 1;


	for (int i = 0; i < NUMS; i++)
		cout << arr[i] << " ";


	insertionsort(arr, NUMS);
	cout << endl << endl;

	cout << "[삽입정렬이 완료된 이후의 배열입니다.]" << endl;
	insertionsort(arr, NUMS);
	for (int i = 0; i < NUMS; i++)
		cout << arr[i] << " ";
	cout << endl << endl;





	system("pause");

}

