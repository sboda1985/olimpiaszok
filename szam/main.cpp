#include <iostream>

using namespace std;

int main()
{

    int szam;
    cout << "Kerem a szamot";
    cin >> szam;
    int a = szam;
    int p = 1, n=0;
    while (a>0)
    {
        p = p * 10;
        a = a/10;
        n++;
    }
    p = p/10;
    cout << n << " " << p << endl;
    int    maxmax = szam;
    for(int i =0; i<n; i++)
    {
        int c = szam%10;
        szam = szam / 10;
        szam = c*p + szam;
        cout << szam << endl;
        if (szam > maxmax)
        {
            maxmax = szam;
        }
    }
    cout << maxmax << endl;
    return 0;
}
