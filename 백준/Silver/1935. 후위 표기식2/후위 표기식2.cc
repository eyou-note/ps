#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,in; 
    string s; 
    stack<double> st;
    vector<double> a;
    cin>>n>>s;

    for(int i=0;i<n;i++){
        cin>>in;
        a.push_back(in);
    }

    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            st.push( a[s[i]-'A']);
        }else{
            char op = s[i];
            double a = st.top(); st.pop();
            double b = st.top(); st.pop();

            if(op == '+'){
                st.push(b+a);
            }else if(op == '-'){
                st.push(b-a); 
            }else if(op == '*'){
                st.push(a*b); 
            }else{
                st.push(b/a); 
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout<<st.top();

    return 0;
}