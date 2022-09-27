#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }

    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int T,total=0; cin>>T;
    double sum=0;
    cin.ignore();

    unordered_map<string, double> grade;
    grade["A+"] = 4.3, grade["A0"] = 4.0, grade["A-"] = 3.7,
    grade["B+"] = 3.3, grade["B0"] = 3.0, grade["B-"] = 2.7,  
    grade["C+"] = 2.3, grade["C0"] = 2.0, grade["C-"] = 1.7,  
    grade["D+"] = 1.3, grade["D0"] = 1.0, grade["D-"] = 0.7,  
    grade["F"] = 0.0;


    string str;
    while(getline(cin, str)){
        vector<string> subject = split(str, ' ');
        total += stoi(subject[1]); 
        sum += (stoi(subject[1])) * grade[ subject[2] ]; 
    }

    cout << fixed;
    cout.precision(2);
    double result = (double)sum/total;
    cout<<round(result*100)/100<<'\n';

    return 0;
}