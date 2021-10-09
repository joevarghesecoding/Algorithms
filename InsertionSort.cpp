#include <iostream>

using namespace std;

//STRATEGY OF DECREASE (BY 1) AND CONQUER
//We go from right to left, and put the rightmost element in its right spot.
//Then we go n-1 and search again.

void InsertionSort(int a[], int len);

void swap(int a[], int i, int j);

void print(int a[], int len);

int main()
{
    int arr[] = { 3, 2, 5, 1, 9, 0};
    int len = sizeof(arr)/sizeof(arr[0]);

    InsertionSort(arr, len);

    print(arr, len);

    return 0;
}

void InsertionSort(int a[], int len)
{
    for(int i = len -1; i >= 0; i--)
    {
        for(int j = i; j >= 0; j--)
        {
            int temp = a[i];
            if(a[j] > temp)
            {
                swap(a, i, j);
            }
        }
    }
}

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void print(int a[], int len)
{
    int comma = len - 1;
    for(int i = 0; i < len; i++ )
    {
        cout << a[i];
        if(i < comma)
        {
            cout << " , ";
        }
    }
}