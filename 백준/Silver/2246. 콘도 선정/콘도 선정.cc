#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Condo{
    int d;
    int c;
} Condo;

bool cmp(Condo a, Condo b){
    if(a.d < b.d) return true;
    if(a.d==b.d && a.c<b.c) return true;
    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    int n,cnt=1; cin>>n;
    vector<Condo> a(n);
    for(int i=0;i<n;i++){
        Condo c;
        cin>>c.d>>c.c;
        a[i] = c;
    }
    sort(a.begin(), a.end(), cmp);

    for(int i=1;i<n;i++){
        bool found = false;
        for(int j=0;j<i;j++){
            if( a[j].d <= a[i].d && a[j].c <= a[i].c ){
                found = true;
                break;
            }

        }
        if(!found) 
            cnt+=1;
    }
    cout<<cnt;

    return 0;
}

