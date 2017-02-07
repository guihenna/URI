#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

string rev(string s)
{
    string r;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        r += s[i];
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    int n;

    cin >> n;
    cin.ignore();
    for(int k = 0; k < n; k++)
    {
        char c[1001];
        string s;
        cin.getline(c, 1001);
        s += c;
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                s[i] += 3;
            }
        }
        s = rev(s);
        for(int i = s.size()/2; i < s.size(); i++)
            s[i]--;
        cout << s << '\n';
    }
	return 0;
}
