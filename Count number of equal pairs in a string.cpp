#include <bits/stdc++.h>
using namespace std;
#define MAX 256


int countPairs(string s)
{

	int cnt[MAX] = { 0 };


	for (int i = 0; i < s.length(); i++)
		cnt[s[i]]++;

	int ans = 0;

	for (int i = 0; i < MAX; i++)
		ans += cnt[i] * cnt[i];

	return ans;
}

int main()
{
	string s = "geeksforgeeks";
	cout << countPairs(s);
	return 0;
}
