#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

char intensity(int r, int g, int b){
    int result =  2126*r + 7152*g + 722*b;
    if(result >=0&&result<510000){
        return '#';
    }else if(result >=510000&&result<1020000){
        return 'o';
    }else if(result >=1020000&&result<1530000){
        return '+';
    }else if(result >=1530000&&result<2040000){
        return '-';
    }else{
        return '.';
    }

}

int p[401][1203];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    int n,m,r,g,b; cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<3*m;j+=3){
            cin>>r>>g>>b;
            cout<<intensity(r,g,b);
        }
        cout<<'\n';
    }


    return 0;
}

