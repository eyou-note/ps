#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    string in; 
    getline(cin,in);
    stack<char> st;

    for(int i=0;i<in.size();i++){

        if(in[i] == '<'){
            if(!st.empty()){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
            }
            string tag;
            while(1){
                tag.push_back(in[i]);
                if(in[i]=='>') break;
                i++;
            }
            cout<<tag;
        }else{
            if(in[i]==' '){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout<<in[i];
            }else{
                st.push(in[i]);
            }
        }
    }
    if(!st.empty()){
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }


    return 0;

}