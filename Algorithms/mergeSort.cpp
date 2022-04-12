#include <iostream>
#include <ctime>

#define MAX_ARR 100000

using namespace std;

void merge(int* arr, int p, int mid, int r)
{
	int* sorted = new int[r - p + 1];
	int i, j, k;
	i = p;		
	j = mid + 1;	
	k = 0;			

	while (i <= mid && j <= r)
	{
		if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}

	if (i > mid)
		while (j <= r) sorted[k++] = arr[j++];
	else
		while (i <= mid) sorted[k++] = arr[i++];

	for (i = p, k = 0; i <= r; i++, k++) arr[i] = sorted[k];

	delete[] sorted;
}

void mergeSort(int* arr, int p, int r)
{
	if (p < r)
	{
		int mid = (p + r) / 2;
		mergeSort(arr, p, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, p, mid, r);
	}
}

void print(int* arr, int N, const char* str)
{
	cout << str << '\n';
	for (int i = 0; i < N; i++) cout << arr[i] << " ";
	cout << "\n\n";
}

int main(void)
{
	int temp;
	srand(time(NULL));




	int n, arr[MAX_ARR];

	cout << "insert n" << endl;
	cin >> n;


	for (int i = 0; i < n ; i++) {
		arr[i] = (rand() % 10000) + 1;
		for (int j = i; j < n; j++) {
			
			
			if (arr[i] < arr[j]) {
				
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	print(arr, n, "[before mergeSort]");
	mergeSort(arr, 0, n - 1);
	print(arr, n, "[after mergeSort]");



	return 0;
}