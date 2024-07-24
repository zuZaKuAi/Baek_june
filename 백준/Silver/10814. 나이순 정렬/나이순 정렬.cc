#include<iostream>
#include<algorithm>
#include<tuple>
#include<vector>
using namespace std;
int main()
{
    int n, x;
    string y;
    vector<tuple<int,int, string>> p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        p.push_back(make_tuple(x,i, y));
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < (int)p.size(); i++)
    {
        cout << get<0>(p[i]) << ' ' << get<2>(p[i]) << '\n';
    }
}