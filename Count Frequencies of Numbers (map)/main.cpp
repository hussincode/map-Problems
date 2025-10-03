#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    map<int, int> m;

    for(int i = 0; i < n; i++){

        m[v[i]]++;

    }

    for(auto x : m) {
        cout << x.first << "  " << x.second << " times" << endl;
    }

    return 0;
}


