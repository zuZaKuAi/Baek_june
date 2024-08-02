#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n, len,init;
	string str;
	vector<pair<int, string>> p;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		init = 0;
		cin >> str;
		for (int j = 0; j < (int)p.size(); j++)
		{
			if (p[j].second == str)
			{
				init = 1;
				break;
			}
		}
		if (init == 0)
		{
			len = str.size();
			p.push_back(make_pair(len, str));
		}
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < (int)p.size(); i++)
	{
		cout << p[i].second << '\n';
	}
}