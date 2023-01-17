#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

string add_zero(string str){
    while(str.size()<32){
        str = "0"+str;
    }
    return str;
}

string to_binary(int n){
    string result;

    while(n!=0){
        result.push_back((n%2)+'0');
        n/=2;
    }

    reverse(result.begin(), result.end());

    return result;
}

string get_2_complement(string n){

    for(int i=0;i<n.size();i++){
        n[i] = (n[i]=='0')?'1':'0';
    }
    int carry = 1;
    for(int i=n.size()-1;i>=0;i--){

        int r = (n[i]-'0') + carry;

        if( r == 2 ){
            carry = 1;
            n[i] = '0';
        }else{
            carry = 0;
            n[i] = (r+'0');
        }
    }


    return n;
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int n,diff_cnt=0; 
    cin>>n;

    string binary = add_zero(to_binary(n));
    string complement = get_2_complement(binary);

    for(int i=0;i<binary.size();i++){
        if(binary[i]!=complement[i])
            diff_cnt+=1;
    }

    cout<<diff_cnt;

    return 0;
}     