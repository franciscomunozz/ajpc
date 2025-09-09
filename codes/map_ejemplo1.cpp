#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4, 2, 3};
    map<int, int> freq;

    for (int x : nums) freq[x]++;

    cout << "Frecuencia de cada número:\n";
    for (auto par : freq) {
        cout << par.first << " aparece " << par.second << " veces\n";
    }

    return 0;
}
