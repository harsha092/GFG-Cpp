#include<iostream>
#include<queue>
using namespace std;
int adjnode[100][100];
void BFS(int start){
    queue<int> q;
    bool reach[100]={false};
    reach[start]= true;
    q.push(start);
    while(!q.empty()){
        int f=q.front();
        q.pop();
         cout << f << " ";
        for(int i=0;i<100;i++){
            if(adjnode[f][i]==1 && !reach[i]){
                reach[i]=true;
                q.push(i);
            }
        }
    }
}
int main(){
    adjnode[0][1]=1;
    adjnode[0][2]=1;
    adjnode[1][3]=1;
    adjnode[1][4]=1;
    adjnode[2][5]=1;
    adjnode[3][6]=1;
    adjnode[3][7]=1;

BFS(0);
return 0;
}
