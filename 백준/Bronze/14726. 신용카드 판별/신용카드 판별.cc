#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int sum(long n){
    int result = 0;
    while(n!=0){
        result += n%10;
        n/=10;
    }
    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    string num;
    
    while(t--){
        cin>>num;

        for(int i=0;i<num.size();i++){
            if(i%2==0){
                int n = (num[i]-'0') * 2;

                if(n>9){
                    n = sum(n);
                }

                num[i] = n + '0';
            }
        }

        int s = sum( stol(num) );

        cout<< ((s%10) ? 'F' : 'T')<<endl;
    }

    return 0;
}     