#include <iostream>
using namespace std;
int arr[10] = {1, 4, 2, 6, 5, 9, 10, 5, 3, 7};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<9-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<10; i++)
        cout << arr[i];
    return 0;
}

