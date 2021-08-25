#include <iostream>
using namespace std;
int cnt = 0, map[15][15], col[15], across1[18], across2[18], n;
void queens(int y)
{
    if(y == n)
    {
        cnt++;
        return;
    }
    for(int x = 0; x<n; x++){
        if(col[x] || across1[x+y] || across2[x-y+n-1]) continue;
        
        col[x] = 1;
        across1[x+y] = 1;
        across2[x-y+n-1] = 1;
        queens(y+1);
        col[x] = 0;
        across1[x+y] = 0;
        across2[x-y+n-1] = 0;
    }
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    queens(0);
    cout << cnt;
    
    return 0;
}


