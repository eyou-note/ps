#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int calc(int a, int p){
    int result = 0;
    while(a!=0){
        int r= a%10;
        result+=pow(r,p);
        a/=10;
    }
    return result;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    set<int> st;
    vector<int> v;
    int a,p,cnt=0; cin>>a>>p;

    st.insert(a);
    v.push_back(a);
    while(1){   
        a = calc(a,p);
        if(st.find(a)!=st.end()){
            break;
        }
        st.insert(a);
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++){
        if(v[i] == a) break;
        cnt+=1;
    }
    cout<<cnt;
    

    return 0;

}
