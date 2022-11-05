#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int img[41][41];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int r,c,t,cnt=0; cin>>r>>c;
    vector<int> v;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>img[i][j];
        }
    }

    cin>>t;

    for(int i=0;i+3<=r;i++){
        for(int j=0;j+3<=c;j++){
            vector<int> pix;
            for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                    pix.push_back(img[k+i][l+j]);
                }
            }
            sort(pix.begin(), pix.end());
            v.push_back( pix[4] );
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i]>=t) cnt+=1;
    }

    cout<<cnt;
    
    

    return 0;

}
