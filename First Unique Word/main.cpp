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

    bool f = false;

    for(int i = 0; i < n; i++){

        if(m[v[i]] == 1){

            cout << v[i] << '\n';
            f = true;
            break;

        }

    }

    if(!f){

        cout << -1;

    }
    return 0;
}
