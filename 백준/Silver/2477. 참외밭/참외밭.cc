#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int next(int d){
    if(d==1) return 4;
    else if(d==2) return 3;
    else if(d==3) return 1;
    else return 2;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int k,h_mx=0,w_mx=0,v,nd=0,d=0, sub_area=0; 
    pair<int, int> p[6], prev;
    cin>>k;

    for(int i=0;i<6;i++){
        cin>>d>>v;
        if(d==1||d==2){
            w_mx = max(w_mx,v);
        }else{
            h_mx = max(h_mx,v);
        }
        p[i] = {d,v};
    }

    prev = p[0]; 
    for(int i=1;i<6;i++){
        nd = next(prev.first);
        if(nd != p[i].first){
            sub_area = p[i-1].second * p[i].second;
            break;
        }
        prev = p[i];
    }

    if(sub_area == 0){
        // cout<<prev.first<<' '<<prev.second<<endl;
        sub_area = p[0].second * prev.second;
    }

    cout<<((h_mx * w_mx) - sub_area) * k;

    return 0;
}