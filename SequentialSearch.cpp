#include <iostream>

//Sequential Search (Linear Search)
//Searches through the array from the start to finish and returns index if found, -1 if not
int SequentialSearch(int a[], int len, int key)
{
    for(int i = 0; i < len; i++)
    {
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int test[] = {3, 7, 1, 9, 2, -2};
    int len = sizeof(test)/sizeof(test[0]);
    std::cout << SequentialSearch(test, len, 5) << std::endl;
    
    return 0;
}