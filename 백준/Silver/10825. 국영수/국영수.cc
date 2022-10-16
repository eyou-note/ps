#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Student{
    int korean;
    int english;
    int math;
    string name;
} Student;

Student parse(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    Student student;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }
    student.name = result[0];
    student.korean = stoi(result[1]);
    student.english = stoi(result[2]);
    student.math = stoi(result[3]);
    return student;
}


bool cmp(Student a, Student b){
    if(a.korean>b.korean) return true;
    if(a.korean==b.korean&&a.english<b.english) return true;
    if(a.korean==b.korean&&a.english==b.english&&a.math>b.math) return true;
    if(a.korean==b.korean&&a.english==b.english&&a.math==b.math&&a.name<b.name) return true;
    return false;
}

int main(){
    fastio;
  // freopen("input.txt", "r", stdin);
    
    int n; 
    cin>>n; cin.ignore();
    vector<Student> st;
    string in;

    while(getline(cin, in)){
        st.push_back( parse(in, ' ') );
    }

    sort(st.begin(), st.end(), cmp);

    for(auto s : st){
        cout<<s.name<<'\n';
    }

    return 0;
}
