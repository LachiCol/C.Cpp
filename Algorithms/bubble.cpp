#include<iostream>
#define NUMS 10
#include <time.h>
using namespace std;

void swap(int *a, int *b)
{

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

void bubblesort_upgrade(int* arr, int n)
{
	bool check = true;
	for (int i = n; i > 0; i--) 
	{
		check=false;
		for (int j = 1; j < i; j++)
		{

			if (arr[j] < arr[j - 1])
				swap(&arr[j], &arr[j - 1]); 
			check = true;
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

	bubblesort_upgrade(arr, NUMS);
	cout << endl << endl;

	cout << "[버블정렬이 완료된 이후의 배열입니다.]" << endl;
	bubblesort_upgrade(arr, NUMS);
	for (int i = 0; i < NUMS; i++)
		cout << arr[i] << " ";
	cout << endl << endl;
	system("pause");

}

