#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int a[4][4];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    int n,in,none=0;     cin>>n;
    pair<int, int> mx = make_pair(0,0);

    for(int i=0;i<n;i++){
        for(int j=1;j<=3;j++){
            cin>>in;
            a[j][in] += 1;
        }
    }
    for(int i=1;i<=3;i++){
        int sum=0;
        for(int j=1;j<=3;j++){
            sum+=a[i][j] * j;
        }   
        
        if(sum>mx.second){
            mx = make_pair(i, sum);
            none = 0;
        }else if (sum == mx.second){

            if(a[i][3]>a[mx.first][3]){
                mx = make_pair(i, sum);
                none = 0;
            }else if(a[i][3]==a[mx.first][3] && a[i][2]>a[mx.first][2]){
                mx = make_pair(i, sum);
                none = 0;
            }else if(a[i][3]==a[mx.first][3] && a[i][2]==a[mx.first][2] && a[i][1]>a[mx.first][1]){
                mx = make_pair(i, sum);
                none = 0;
            }else if(a[i][3]==a[mx.first][3] && a[i][2]==a[mx.first][2] && a[i][1]==a[mx.first][1]){
                mx = make_pair(i, sum);
                none = 1;
            }
        }
    }
    if(none) 
        cout<<"0 "<<mx.second;
    else
        cout<<mx.first<<' '<<mx.second;

    return 0;
}