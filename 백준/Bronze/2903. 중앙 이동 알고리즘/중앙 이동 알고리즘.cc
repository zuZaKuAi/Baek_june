#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	int n, centor = 0, on_line = 0,t=2,temp,sum = 4;
	cin >> n;

	for (int i = 0;i<n;i++)
	{
		temp = t;
		t += pow(2,i);
		centor = pow(t / 2, 2);
		on_line = (temp - 1) * (temp) * 2;
		sum += (on_line + centor);
	}
	

		cout << sum;
	return 0;
}