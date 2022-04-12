#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

#define N 1000
using namespace std;

void HeapSort(int A[], int n);
void Buildheap(int A[], int n);
void heapify(int A[], int k, int n);



void HeapSort(int A[], int n)
{
    int t;
    Buildheap(A, n);   
    for (int i = n; i >= 1; i--)        
    {
        
        t = A[0];
        A[0] = A[i];
        A[i] = t;

        
        heapify(A, 0, i - 1);
    }
}

void Buildheap(int A[], int n)
{
    for (int i = n / 2; i >= 0; i--)    
    {
        heapify(A, i, n);   
    }
}


void heapify(int A[], int k, int n)
{
    int left = k * 2;
    int right = k * 2 + 1;         
    int smaller;                   
    int t;

    if (right <= n)
    {
        if (A[left] < A[right])
            smaller = left;
        else smaller = right;
    }
    else if (left <= n) 
    {
        smaller = left;
    }
    else return;       

   
    if (A[smaller] < A[k])
    {
        t = A[k];
        A[k] = A[smaller];
        A[smaller] = t;
        heapify(A, smaller, n);
    }
}

void print(int* DataSet, int Length, const char* str)
{
    cout << str << '\n';
    for (int i = 0; i < Length; i++) cout << DataSet[i] << " ";
    cout << "\n\n";
}

int main(void)
{
    int n, DataSet[N];

    cout << "insert n" << endl;
    cin >> n;
    int Length = n;
    int i = 0;
   
    srand((unsigned int)time(NULL));
    for (i = 0; i < Length-1; i++)
    {
        for (int j = i+1; j < Length; j++) {
            DataSet[i] = (int)(rand() / (double)RAND_MAX * 100);

            if (DataSet[j] < DataSet[i]) {
                int temp = DataSet[j];
                DataSet[j] = DataSet[i];
                DataSet[i] = temp;

            }
        }
        
    }
    
  
    print(DataSet, Length, "[before heapSort]");
    HeapSort(DataSet, n);   
    print(DataSet, Length, "[after heapSort]");

 





  
   
    return 0;
}