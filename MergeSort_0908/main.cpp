#include <iostream>
using namespace std;
int arr[1000000], temp[1000000];


void sort(int start, int middle, int end) // 정렬
{
    int a = start, b = middle+1, num = start;
    while(a<= middle && b <= end) // 두 리스트 비교하며
    {
        if(arr[a] < arr[b])
            temp[num++] = arr[a++];
        else
            temp[num++] = arr[b++];
    }
    if(a > middle) // a 리스트를 모두 사용한 경우
    {
        while(b <= end)
            temp[num++] = arr[b++];
    }
    else // b 리스트를 모두 사용한 경우
    {
        while(a <= middle)
            temp[num++] = arr[a++];
    }
    for(int i = start; i<=end; i++) // temp배열을 arr에 복사
        arr[i] = temp[i];
}
void merge(int start, int end) // 정렬하기 위해 분할
{
    if(start == end || start > end)
        return;
    int middle = (start+end)/2;
    merge(start, middle);
    merge(middle+1, end);
    sort(start, middle, end);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    merge(0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << '\n';
    return 0;
}

