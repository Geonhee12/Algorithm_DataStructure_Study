#include <iostream>
using namespace std;
char arr[4] = {'1', '2', '3', '4'}, used[4], path[4];
void dfs(int level){
    if(level == 4)
    {
        cout << path<< '\n';
        return;
    }
    for(int i=0; i<4; i++){
        if(used[i] == 1)
            continue;
        
        used[i] = 1;
        path[level] = arr[i];
        dfs(level+1);
        used[i] = 0;
        path[level] = 0;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dfs(0);
    return 0;
}
