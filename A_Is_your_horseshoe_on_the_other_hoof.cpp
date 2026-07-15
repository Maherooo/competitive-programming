#include <iostream>
#include <set>
using namespace std;

int main() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    set<int> s;

    s.insert(x);
    s.insert(y);
    s.insert(z);
    s.insert(k);

    cout << 4 - s.size();

    return 0;
}