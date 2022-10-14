#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    bool sign[3]={false,},wolf=true;
    int n,f1,f2; cin>>n;

    for(int i=0;i<n;i++){
        cin>>f1>>f2;
        if(f1==1&&f2==3||f1==3&&f2==1) sign[0]=true;
        else if (f1==1&&f2==4||f1==4&&f2==1) sign[1]=true;
        else if (f1==3&&f2==4||f1==4&&f2==3) sign[2]=true;
        else{
            wolf = false;
        }
    }

    for(int i=0;i<3;i++){
        if(!sign[i]){
            wolf = false;
        }
    }


    if(wolf)cout<<"Wa-pa-pa-pa-pa-pa-pow!";
    else cout<<"Woof-meow-tweet-squeek";
    

    return 0;
}
