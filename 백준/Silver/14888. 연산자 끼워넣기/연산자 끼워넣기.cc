#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n; // Number of numbers
vector<int> nums; // Array of numbers
vector<int> ops(4); // Array of operators count (+, -, *, /)
int maxResult = -1e9, minResult = 1e9;

void backtrack(int depth, int current) {
    if (depth == n - 1) {
        maxResult = max(maxResult, current);
        minResult = min(minResult, current);
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (ops[i] > 0) {
            ops[i]--; // Use the operator
            if (i == 0)
                backtrack(depth + 1, current + nums[depth + 1]);
            else if (i == 1)
                backtrack(depth + 1, current - nums[depth + 1]);
            else if (i == 2)
                backtrack(depth + 1, current * nums[depth + 1]);
            else if (i == 3)
                backtrack(depth + 1, current / nums[depth + 1]);
            ops[i]++; // Backtrack (restore the operator count)
        }
    }
}

int main() {
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> ops[i];
    }

    backtrack(0, nums[0]); // Start recursion with the first number
    cout << maxResult << "\n" << minResult << "\n";
    return 0;
}
