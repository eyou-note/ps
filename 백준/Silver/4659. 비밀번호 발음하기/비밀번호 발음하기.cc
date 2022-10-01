#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string s;

bool has_vowels(){
    for(int i=0;i<s.size();i++){
        if('a'==s[i] || 'e'==s[i] || 'i'==s[i]  || 'o'==s[i] || 'u'==s[i]){
            return true;
        }
    }
    return  false;
}

bool non_consecutive(int idx){
    if(idx < s.size()-2){
        if(('a'==s[idx] || 'e'==s[idx] || 'i'==s[idx] ||  'o'==s[idx] || 'u'==s[idx])
            && ('a'==s[idx+1] || 'e'==s[idx+1] || 'i'==s[idx+1] || 'o'==s[idx+1] || 'u'==s[idx+1])
            && ('a'==s[idx+2] || 'e'==s[idx+2] || 'i'==s[idx+2] || 'o'==s[idx+2] || 'u'==s[idx+2])){
                return false;
        }

        if(('a'!=s[idx] && 'e' !=s[idx] && 'i'!=s[idx] &&  'o'!=s[idx] && 'u'!=s[idx])
            && ('a'!=s[idx+1] && 'e' !=s[idx+1] && 'i'!=s[idx+1] &&  'o'!=s[idx+1] && 'u'!=s[idx+1])
            && ('a'!=s[idx+2] && 'e' !=s[idx+2] && 'i'!=s[idx+2] &&  'o'!=s[idx+2] && 'u'!=s[idx+2])){
                return false;
        }
    }
    return true;
}

bool not_repeat(int idx){
    if(idx == s.size()-1) return true;
    if(s[idx] == s[idx+1]&& (s[idx]!='e'&&s[idx]!='o')) {
        return false;
    }
    return true;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    while(getline(cin,s)){
        if(s=="end") break;
        bool acceptable = has_vowels();

        if(!acceptable){
            cout<<"<"<<s<<"> is not acceptable.\n";
            continue;
        }

        for(int i=0;i<s.size();i++){
            if(!not_repeat(i) || !non_consecutive(i)){
                acceptable = false;   
                break;
            }
        }

        if(acceptable)  cout<<"<"<<s<<"> is acceptable.\n";
        else cout<<"<"<<s<<"> is not acceptable.\n";

    }

    return 0;
}

