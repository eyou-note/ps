#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n, order=1; cin>>n;
    bool nice = true;
    vector<int> v(n);
    stack<int> st;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(v[i]);
        }else{
            if(st.top() > v[i]){
                st.push(v[i]);
            }else{
                
                // 여기서 뺄 수있는거 다 빼야하네
                if(st.top() == order){
                    while(!st.empty() && st.top() < v[i]){
                      st.pop(); order+=1;
                    }
                    st.push(v[i]);
                }else{
                    nice = false;
                    break;                    
                }

            }
        }
    }

    while(!st.empty()){
        if(st.top()==order){
            st.pop(); order+=1;
        }else{
            nice = false;
            break;
        }
    }

    if(nice) cout<<"Nice";
    else cout<<"Sad";

    return 0;
}
