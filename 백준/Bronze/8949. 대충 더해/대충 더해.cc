#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    string n1, n2;
    cin>>n1>>n2;

    if(n1.size() > n2.size())
        swap(n1, n2);

    while(n1.size()!=n2.size()){
        n1.insert(0,1,'0');
    }

    for(int i=0;i<n2.size();i++){
        cout<<(n1[i]-'0') + (n2[i]-'0');
    }

    return 0;
}     