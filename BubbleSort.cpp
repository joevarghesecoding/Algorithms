#include <iostream>

//Bubble sort
//checks two indexes at a line, if they are out of order, swap them
//run until list is sorted
//THE LARGEST INDEX IS BUBBLED TO THE END, THEN WE IGNORE IT

void BubbleSort(int a[], int len)
{
    for(int i = len- 1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }
    }
}


int main()
{
    int test[] = {3, 7, 1, 9, 2, -2};
    int len = sizeof(test)/sizeof(test[0]);
    BubbleSort(test, len);
    for(int i = 0; i < len; i++){
        std::cout << test[i] << std::endl;
    }

    return 0;
}