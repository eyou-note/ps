#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int r,w,l,c = 1;

    while(1){
        cin>>r>>w>>l;
        if(r == 0) break;

        bool fit = (r*2) >= sqrt(w*w + l*l);

        cout<<"Pizza "<<c;
        if(fit) cout<<" fits on the table."<<endl;
        else cout<<" does not fit on the table."<<endl;
    
        c+=1;
    }

    return 0;
}