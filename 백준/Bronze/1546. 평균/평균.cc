#include <iostream> 
#include <algorithm>
#include<cmath>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n = 0;
	double sum = 0;
	cin >> n;
	double scores[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
	}
	sort(scores, scores + n);
	for (int i = 0; i < n; i++)
	{
		scores[i] = scores[i] / scores[n - 1] * 100;
	}
	for (int i = 0; i < n; i++)
	{
		sum+=scores[i];
	}
	cout << sum / n;
	return 0;
}