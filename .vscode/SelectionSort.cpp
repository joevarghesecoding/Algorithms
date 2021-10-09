#include <iostream>

//Selection sort
//goes through each element in the array and moves the smallest value to 
//the front
//Brute force method O(n^2)
void SelectionSort(int a[], int len)
{
    
    for(int i = 0; i < len ; i++)
    {
        for(int j = 0; j < len ; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int test[] = {3, 9, 1, 7, 2};
    int len = sizeof(test)/sizeof(test[0]);
    SelectionSort(test, len);
    for(int i = 0; i < 5; i++){
        std::cout << test[i] << std::endl;
    }

    return 0;
}