#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    vector<int>num;
    for (int i = 0; i < n; i++) {
        num.push_back(i);
    }
    int current = k;
    int a = num.size();
    while (num.size() > 1) {
        current = (current + m - 1) % a;
        num.erase(num.begin() + current);
        a--;
    }
    cout << num[0] << endl;

    return 0;
}