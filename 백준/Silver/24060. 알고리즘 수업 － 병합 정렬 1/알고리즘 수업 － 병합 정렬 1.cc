#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int n,k,cnt,sorted[500001];
void merge(int a[], int begin, int middle, int end){
    int i=begin, j=middle+1, m=begin;
    while(i<=middle&&j<=end){
        if(a[i]<=a[j]) sorted[m++] = a[i++];
        else sorted[m++] = a[j++];
    }

    if(i>middle){
        for(int t=j;t<=end;t++){
            sorted[m++] = a[t];
        }
    }else{
        for(int t=i;t<=middle;t++){
            sorted[m++] = a[t];
        }
    }

    for(int t=begin;t<=end;t++){
        cnt+=1;
        a[t] = sorted[t];
        if(cnt==k) cout<<a[t];
    }
}

void merge_sort(int a[], int begin, int end){
    if(begin<end){
        int middle = (begin+end)/2;
        merge_sort(a, begin, middle);
        merge_sort(a, middle+1, end);
        merge(a, begin, middle, end);
    }
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin); 

    int a[500001]={0,};
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    merge_sort(a,0,n-1);

    if(cnt<k) cout<<-1;

    return 0;

}
