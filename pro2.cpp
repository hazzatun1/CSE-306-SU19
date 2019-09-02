#include<fstream>
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int MAXN = 210;

int n , l , flag;
int node[MAXN][MAXN];
int color[MAXN];

void Bfs(){
    int i , j;
    for(i = 0 ; i < n ; i++){
        if(color[i] == -1)
            continue;
        for(j = 0 ; j < n ; j++){
            if(node[i][j]){
                if(color[j] == -1)
                    color[j] = !color[i];
                else{
                    if(color[j] != !color[i]){
                        flag = 0;
                        return;
                    }
                }
            }
        }
    }
    flag = 1;
}

void solve(){
    memset(color , -1 ,sizeof(color));
    color[0] = 1;
    Bfs();
    if(flag)
      cout<<"bicolorable"<<endl;
    if(flag == 0)
       cout<<"not bicolorable"<<endl;
}

int main(){
     ifstream reader;
    reader.open("input.txt");
    int x , y;

    while((reader>>n )&&n){
       reader>>l;
        memset(node , 0 , sizeof(node));
        for(int i = 0 ; i < l ; i++){
           reader>>x>>y;
            node[x][y] = 1;
        }
        solve();
    }
    return 0;
}
