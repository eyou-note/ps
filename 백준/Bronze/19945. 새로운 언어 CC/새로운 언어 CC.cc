#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

string get_binary(int n){
    n =  n<0 ? n*-1 : n;
    string result="";
    while(n){
        result.insert(0, 1, (n%2) + '0'); 
        n/=2;
    }
    while(result.size()!=32){
        result.insert(0,1,'0');
    }
    return result;
}

string get_complement(string n){
    for(int i=0;i<n.size();i++){
        if(n[i] == '0') n[i] = '1';
        else n[i] = '0';
    }

    char r = '1';
    for(int i=n.size()-1;i>=0;i--){
        if(n[i] == '0') {
            n[i] = r;
            r = '0';
            break;
        }
        n[i] = '0';
        r = '1';
    }
    
    return  r=='1' ? "1"+n : n;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, cnt=0; 
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    
    string bin = get_binary(n);
    
    if(n < 0){
       bin = get_complement(bin);
    }

    for(int i=0;i<bin.size();i++){
        if(bin[i] == '0') cnt+=1;
        else break;
    }

    cout<<32-cnt;


    return 0;
}     