#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    //삼각형의 성질 : 가장긴 변의 길이는 나머지 두변의 길이의 합보다 작다.
    //위 조건을 완전탐색으로 찾음.
    int n,cnt=0; cin>>n;

    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            int k = n-(i+j);
            if(k<j) break;
            if(k<i+j) cnt++;
        }
    }

    cout<<cnt;


    return 0;
}

