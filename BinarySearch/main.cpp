#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
void search(int num, int start, int end)
{
    int middle = (start+end)/2;
    while(start <= end)
    {
        if(arr[middle] == num)
        {
            cout << "find" << '\n';
            return;
        }
        if(num > arr[middle])
            start = middle + 1;
        else
            end = middle - 1;
        middle = (start + end) / 2;
    }
    cout << "not find" << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    cin >>m;
    for(int i=0; i<m; i++)
    {
        int num;
        cin >> num;
        search(num, 0, n);
    }
    return 0;
}