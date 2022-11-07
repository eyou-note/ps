#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    int n,m,cnt=1,prev; cin>>n>>m;
    vector<int> a(n+1,0);
    vector<pair<int, int>> v(m);
    pair<int,int> st;

    if(m==0){
        cout<<n;
        return 0;
    }

    for(int i=0;i<m;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(), v.end());

    st= v[0];
    for(int i=1;i<=n;i++){
        a[i] = (i>=st.first && i<=st.second)? st.first : i;
    }

    for(int i=1;i<m;i++){
        if(st.second >= v[i].first){
            st.first = min(st.first, v[i].first);
            st.second = max(st.second, v[i].second);
        }else{
            for(int j=st.first; j<=st.second;j++){
                a[j] = st.first;
            }
            st.first = v[i].first;
            st.second = v[i].second;
        }
    }

    for(int i=st.first; i<=st.second;i++){
        a[i] = st.first;
    }

    prev = a[1];
    for(int i=2;i<=n;i++){
        if(a[i] != prev){
            cnt+=1;
            prev = a[i];
        }
    }

    cout<<cnt;

    return 0;

}
