#include <bits/stdc++.h>


using namespace std;

string solution(vector<int> nums) {
    string ans = "";

    auto cmp = [](auto a, auto b)
	{
		auto str_a = to_string(a);
		auto str_b = to_string(b);
        
		return str_a + str_b > str_b + str_a;
	};

    sort(nums.begin(), nums.end(), cmp);

	size_t sum = 0u;
	for (auto& num : nums){
		ans += to_string(num);
		sum += num;
	}

	if (sum == 0u)
		ans = "0";


    return ans;
}