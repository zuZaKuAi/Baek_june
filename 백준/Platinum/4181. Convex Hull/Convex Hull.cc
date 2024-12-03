#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

long long ccw(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3) {
	return (x1 * y2 + x2 * y3 + x3 * y1) - (y1 * x2 + y2 * x3 + y3 * x1);
}

bool compAscXAscY(pair<long long, long long>& a, pair<long long, long long>& b) {
	if (a.first == b.first) return a.second < b.second;
	else return a.first < b.first;
}

bool comp(pair<long long, long long>& a, pair<long long, long long>& b, pair<long long, long long>& pivot) {
	long long res = ccw(pivot.first, pivot.second, a.first, a.second, b.first, b.second);
	if (res == 0) {
		if (a.first == b.first) return a.second > b.second;
		else {
			if (a.second == b.second) return a.first < b.first;
			else return a.second > b.second;
		}
	}
	else {
		return res > 0;
	}
}

vector<pair<long long, long long>> convexHull(int n, vector<pair<long long, long long>>& pos) {
	vector<pair<long long, long long>> hull;

	sort(pos.begin(), pos.end(), compAscXAscY);
	sort(pos.begin() + 1, pos.end(), [&](auto& a, auto& b) {
		return comp(a, b, pos[0]);
		});

	hull.push_back(pos[0]);
	hull.push_back(pos[1]);

	for (int i = 2; i < pos.size(); i++) {
		while (hull.size() >= 2) {
			pair<long long, long long> a = hull.back();
			hull.pop_back();
			pair<long long, long long> b = hull.back();
			long long res = ccw(pos[i].first, pos[i].second, a.first, a.second, b.first, b.second);
			if (res <= 0) {
				hull.push_back(a);
				break;
			}
		}
		hull.push_back(pos[i]);
	}

	return hull;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<pair<long long, long long>> pos;

	for (int i = 0; i < n; i++) {
		long long x, y;
		char c;
		cin >> x >> y >> c;
		if (c == 'Y') pos.push_back({ x, y });
	}

	vector<pair<long long, long long>> hull = convexHull(n, pos);

	cout << hull.size() << endl;
	for (const auto& p : hull) {
		cout << p.first << " " << p.second << "\n";
	}

	return 0;
}
