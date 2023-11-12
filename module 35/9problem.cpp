#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> last_occurrence;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (last_occurrence.find(s) == last_occurrence.end())
        {
            last_occurrence[s] = -1;
            cout << -1 << "\n";
        }
        else
        {
            cout << last_occurrence[s] <<"\n";
        }
        last_occurrence[s] = i;
    }
    return 0;
}
