#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int case1,case2,case3,answer;
	int moontaeng[1001]{ 0, };
	int solo[1001] = { 0, };
	int n, m,so=0,moo=0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> moontaeng[i] >> solo[i];
	}
	sort(moontaeng, moontaeng + m);
	sort(solo, solo + m);
	moo = n / 6;
	so = n % 6;
	
	case3 = solo[0] * n;
	case1=moo * moontaeng[0] + so * solo[0];
	answer = case1;
	if (so > 0)
	{
		case2=(moo + 1)* moontaeng[0];
		if (case2 < case1)
			answer = case2;
	}
	if (answer > case3)
		answer = case3;
	cout << answer;
}
