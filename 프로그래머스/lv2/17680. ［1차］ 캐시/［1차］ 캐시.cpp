#include <string>
#include <vector>

using namespace std;

int CACHE = 1, DB = 5, NOT_FOUND = -1;
string to_lower_case(string str){
    string result;
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            result.push_back(str[i]+32);
        }else{
            result.push_back(str[i]);
        }
    }
    return result;
}
int find_cache(string target, vector<string>& cache){
    int result = NOT_FOUND;
    for(int i=0;i<cache.size();i++){
        if(to_lower_case(cache[i]) == to_lower_case(target)){
            result = i;
            break;
        }
    }
    return result;
}
void sync_cache(string city, int pos, int cacheSize, vector<string>& cache){
    int size = cache.size();
    if(size < cacheSize) cache.push_back(city);
    else{
        pos = (pos == NOT_FOUND ? 0 : pos);
        for(int i=pos;i<size-1;i++){
            cache[i] = cache[i+1];
        }
        cache[size-1] = city;
    }
}
int solution(int cacheSize,  vector<string> cities) {
    int cost = 0;
    vector<string> cache;    
    if(cacheSize == 0){
        cost = cities.size() * DB;
    }else{
        for(auto c : cities){
            int pos = find_cache(c,cache);

            if(cache.size() == 0 || pos == NOT_FOUND){
                cost+=DB;
            }else{
                cost+=CACHE;            
            }
            sync_cache(c, pos, cacheSize, cache);
        }
    }
    return cost;
}
