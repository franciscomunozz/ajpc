#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 3, 5, 2, 8, 9, 3};
    set<int> s(nums.begin(), nums.end());

    cout << "Elementos sin duplicados: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    return 0;
}
