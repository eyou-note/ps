#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int cnt=0;
    string a,b; 
    getline(cin, a);
    getline(cin, b);

    for(int i=0;i<=a.size() - b.size() && a.size()>=b.size();i++){
        bool same = true;
        for(int j=0;j<b.size();j++){
            if(b[j] != a[i+j]){
                same=false;
                break;
            }
        }
        if(same){
            cnt+=1;
            i+=b.size()-1;
        }
    }

    cout<<cnt;

    return 0;

}
