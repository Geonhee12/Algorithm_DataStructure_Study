#include <iostream>
using namespace std;
int sum, best, arr[1000];
void isSum(int i)
{
    if(arr[i] < sum+arr[i])
        sum = sum+arr[i];
    else
        sum = arr[i];
}
void isBest()
{
    if(best < sum)
        best = sum;
}
int main()
{

    ios::sync_with_stdio();
    cin.tie(NULL);
    int count, n;
    cin >> count;
    for(int k=0; k<count; k++)
    {
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sum = 0;
        best = -21e8;
        for(int i=0; i<n; i++)
        {
            isSum(i);
            isBest();
        }
        
        cout << best << '\n';
    }
    return 0;
}

