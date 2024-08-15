#include <iostream>
#include <algorithm>
#include <vector>
#include<utility>
using namespace std;

int main() {
	int n, tmplo=0,tmpc=0,same=1;
	long long sum = 0;
	cin >> n;
	vector<pair<int, int>> v2;
	int* arr1 = new int[n];
	int** arr2 = new int* [n];
	for (int i = 0; i < n; i++)
		arr2[i] = new int[2] {0,};


	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	sort(arr1, arr1 + n);
	tmpc = arr1[0];
	//값기준으로 오름 차순 정렬했으므로 같은 값일 때 "arr2[tmplo][1]"를 1씩 더해 줌
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == tmpc)
		{
			arr2[tmplo][0] = tmpc;
			arr2[tmplo][1]++;
		}
		else
		{
			tmplo++;
			tmpc = arr1[i];
			arr2[tmplo][0] = tmpc;
			arr2[tmplo][1]++;
		}
	}
	for (int i = 0; i <= tmplo; i++)
	{
		v2.push_back(make_pair(arr2[i][1], arr2[i][0]));
	}
	//중복개수 기준으로 오름차순 정렬후 개수가 같으면 값기준으로 오름차순 정렬
	sort(v2.begin(), v2.end());
	
	for (int i = 0; i <= tmplo; i++)
	{
		//cout << i << "번째:" << v2[i].second << " " << v2[i].first << endl;
		sum += v2[i].second * v2[i].first;
	}
	
	/*
	for (int i = 0; i <n; i++)
	{
		sum += arr1[i];
	}
	*/
	//산술
	//cout << "sum:" << sum << endl;
	if (sum >= 0)
	{
		if (sum * 10 / n%10 >= 5)
			cout << sum / n + 1 << endl;
		else
			cout << sum / n << endl;
	}
	else
	{
		if (sum * -10 / n % 10 >= 5)
			cout << sum / n -1 << endl;
		else
			cout << sum / n << endl;
	}
	//중앙
	cout << arr1[n / 2] << endl;

	//최빈값
	for (int i = tmplo-1; i >=0; i--)
	{
		if (v2[tmplo].first == v2[i].first)
			same++;
		else
			break;
	}
	if (same >1)
	{
		cout << v2[tmplo - same + 2].second << endl;
	}
	else
	{
		cout << v2[tmplo].second << endl;
	}
	
	//범위
	cout << arr1[n - 1] - arr1[0] << endl;

	delete[] arr1;
	for (int i = 0; i < n; i++)
		delete[] arr2[i];
	delete[] arr2;

	return  0;
}