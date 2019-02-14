#include <iostream>

using namespace std;

int main()
{

    int szam, v[20];
    cout << "Kerem a szamot";
    cin >> szam;
    int a = szam;
    int n=0, S=a, pos = -1;
    while (a>0)
    {
        S = S + a%10;
        v[n] = a%10;
        if (n>0)
        {
            if((v[n] < v[n-1]) && (pos==-1))
            {
                int csere = v[n];
                v[n] = v[n-1];
                v[n-1] = csere;
                pos =n-1;
            }
        }
        a = a/10;
        n++;
    }
    for(int i=0; i<pos-1; i++)
    {
        for(int j=i+1; j<pos; j++)
        {
            if (v[i] < v[j])
            {
                int csere = v[i];
                v[i] = v[j];
                v[j] = csere;
            }
        }
    }
    if (pos == -1)
    {
        cout << S;
    }
    else
    {
        for(int i=n-1; i>=0; i--)
        {
            cout << v[i];
        }
    }
    return 0;

}
