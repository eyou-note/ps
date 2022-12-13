#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

char to_lower(char c){
    if(c>='A' && c<='Z'){
        c += 32; 
    }
    return c;
}

int main(){
    fastio;
   
    int t; 
    cin>>t; cin.ignore();
    string in;
    while(getline(cin,in)){
        int i=0, j=in.size()-1;
        bool yes = true;        
        while(i<=j){
            if(((in[i]>='a'&&in[i]<='z') || (in[i]>='A'&&in[i]<='Z')) 
                && ((in[j]>='a'&&in[j]<='z') || (in[j]>='A'&&in[j]<='Z'))){

                if( to_lower(in[i++]) !=  to_lower(in[j--]) ){
                    yes = false;
                    break;
                }    
                
            }else{
                if(in[i++] != in[j--]){
                    yes = false;
                    break;
                }
            }
        }

        cout<<(yes?"Yes" : "No")<<endl;
    }

    return 0;
}     