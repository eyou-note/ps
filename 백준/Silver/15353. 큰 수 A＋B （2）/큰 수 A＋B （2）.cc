#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    string n1,n2,res; cin>>n1>>n2;
    int r = 0;
    
    if( n1.size() > n2.size() ){
        swap(n1,n2);
    }
    while(n1.size()!=n2.size()){
        n1="0"+n1;
    }

    for(int i=n1.size()-1;i>=0;i--){
        int sum = ((n1[i]-'0') + (n2[i]-'0') + r)%10;
        r = ((n1[i]-'0') + (n2[i]-'0') + r ) /10;
        res = to_string(sum)+res;
    }

    if(r==1) res = "1"+ res;

    cout<<res;
    
    


    return 0;
}
