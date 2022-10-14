#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string rev(string s){
    int i=0, j=s.size()-1;
    while(i<=j){
        swap(s[i++], s[j--]);
    }
    return s;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    string s,a,b,c,ans; 
    cin>>s;
    int size = s.size();

    for(int i=0;i<50;i++){
        ans+="z";
    }

    //세 부분으로 나눈다.
    for(int i=0;i<size; i++){
        for(int j=i+1;j<size-1; j++){   
                
            a = rev(s.substr(0,i+1));    // 뒤집는다.
            b = rev(s.substr(i+1,j-i));
            c = rev(s.substr(j+1,size-j));

            ans = min(a+b+c, ans); // 합친다.
        }
    }
    cout<<ans;

    return 0;
}
