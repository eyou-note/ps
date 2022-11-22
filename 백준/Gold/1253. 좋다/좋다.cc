#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  
    
    int n,ans=0; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //정렬을 해서?
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){   // n번
        int l=0, r=n-1, x=a[i];
        while(l<r){     //n/2번
            int sum = a[l]+a[r];
            if(sum== x){
                if(l!=i && r!=i){
                    ans+=1;
                    break;
                }
                else if(l==i) l+=1;
                else if(r==i) r-=1;
            }else if(sum < x){
                l+=1;
            }else{
                r-=1;
            }
        }
    }

    cout<<ans;


    return 0;
}