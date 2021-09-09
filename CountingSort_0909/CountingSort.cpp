#include <iostream>
using namespace std;
int arr[10001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }
    for(int i=1; i<10001; i++)
    {
        if(arr[i] == 0)
            continue;
        while(arr[i] != 0)
        {
            cout << i << '\n';
            arr[i]--;
        }
    }
    return 0;
}
