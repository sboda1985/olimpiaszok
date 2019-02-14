#include <iostream>

using namespace std;

int main()
{

    int szam;
    cout << "Kerem a szamot";
    cin >> szam;
    int a = szam;
    int p = 1, n=0, S=0;
    while (a>0)
    {
        S = S + a%10;
        p = p * 10;
        a = a/10;
        n++;
    }

    p = p/10;
    a = szam;
    int    maxmax = szam;

    for(int i =0; i<n; i++)
    {
        int c = szam%10;
        szam = szam / 10;
        szam = c*p + szam;
        if (szam > a)
        {
            if (maxmax == a)
            {
                maxmax = szam;
            }
            if (maxmax > szam)
            {
                maxmax = szam;
            }
        }

    }
    if (maxmax == a)
    {
        cout << a + S;
    }
    else
    {
        cout << maxmax;
    }
    return 0;

}
