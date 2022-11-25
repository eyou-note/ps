#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int sum(string s){
    int result = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            result += s[i]-'0';
        }
    }
    return result;
}

bool cmp (string a, string b){
    if(a.size()!=b.size()) 
        return a.size() < b.size();

    int a_sum = sum(a), b_sum = sum(b);
    if(a_sum != b_sum) return a_sum < b_sum;
    return a<b;
}

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end(), cmp);

    for(auto s : a){
        cout<<s<<endl;
    }

    return 0;
}