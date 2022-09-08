#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

void setup_and_sorting(int n, vector<long long> &v){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
}

bool binary_search(vector<long long> &v, int begin, int end, long long x){
    while(begin <= end){
        int mid = (begin+end)/2;
        if(v[mid] == x) 
            return true;
        
        if(v[mid] < x)  //right
            begin = mid+1;
        else    //left
            end = mid-1;
    }

    return false;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    int n,m;
    long long x;
    cin>>n;

    vector<long long> v(n);

    setup_and_sorting(n, v);

    cin>>m;

    for(int i=0;i<m;i++){
        cin>>x;

        if(binary_search(v,0,n,x))
            cout<<1<<'\n';
        else
            cout<<0<<'\n';
    }

    return 0;
}   