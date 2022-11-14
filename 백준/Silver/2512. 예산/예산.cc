#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,m;
int binary_search(vector<int>& a, int low, int high){
    int result;
 
    while(low<=high){
        int total = 0;
        int cost = (low+high)/2;

        for(int i=0;i<n;i++){
            total += a[i]>cost?cost:a[i];
        }

        if(total == m){
            result = cost;
            break;
        }else if(total < m){
            result = cost;
            low = cost+1;
        }else{
            high = cost-1;
        }
    }

    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    
    sort(a.begin(), a.end());

    cout<<binary_search(a, 0, a[n-1]);

    return 0;
}