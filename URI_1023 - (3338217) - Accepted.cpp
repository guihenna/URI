#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int val[201], contador = 0, x, y, p, c, contc = 0, contn;
    int n;
    while(cin >> n, n != 0)
    {
        p = c = contn = 0;
        memset(val, 0, sizeof(val));
        for(int i = 0; i < n; i++)
        {
            cin >> x >> y;
            val[y/x] += x;
            p += x;
            c += y;
        }
        if(contc > 0)
            cout << '\n';
        contc++;
        cout << "Cidade# " << ++contador << ":\n";
        for(int i = 0; i < 201; i++)
        {
            if(val[i] == 0)
                continue;
            if(contn > 0)
                cout << " ";
            contn++;
            if(val[i] > 0)
                cout << val[i] << "-" << i;
        }
        cout << '\n';
        cout << fixed;
        int aux = (int)100*((double)c/(double)p);
        double resp = (double) aux / 100.0;
        cout << "Consumo medio: " << setprecision(2) << resp << " m3.\n";

    }
	return 0;
}
