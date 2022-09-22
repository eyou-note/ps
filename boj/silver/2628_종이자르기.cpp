#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin);   

    int row,col,type,n,p,area, mx=0;
    vector<int> rv,cv;
    
    cin>>col>>row;
    rv.push_back(0), rv.push_back(row);
    cv.push_back(0), cv.push_back(col);

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>type>>p;
        if(type == 0){
            rv.push_back(p);
        }else{
            cv.push_back(p);
        }  
    }
    sort(rv.begin(), rv.end());
    sort(cv.begin(), cv.end());

    for(int i=0;i<rv.size()-1;i++){
        for(int j=0;j<cv.size()-1;j++){
            area = (rv[i+1] - rv[i]) * (cv[j+1] - cv[j]);
            mx = max(mx, area);
        }
    }

    cout<<mx;
    
    return 0;
}
