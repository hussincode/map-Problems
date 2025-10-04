#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string>v(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];

    }

    map<string,int>m;

    for(int i = 0; i < n; i++){

        m[v[i]]++;

    }

    for(auto x : m){

        cout << x.first << "  " << x.second << '\n';

    }

    return 0;
}
