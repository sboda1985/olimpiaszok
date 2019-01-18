#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, j,  S = 0, p;
    ifstream file("asd.txt");
    cout << "n=";
    cin >> n;
    cout << "p=";
    cin >> p;
    for(int j=1; j<=n; j++)
    {
        int i=2,counter = 0, a, k;
        cout << "a=";
        cin >> a;
        cout << "k=";
        cin >> k;
        while(i<=a)
        {
            if (a%i==0)
            {
                counter++;
            }
            while(a%i==0)
            {
                a = a/i;
            }
            if (counter== k)
            {
                if (p==1)
                {
                    cout << i << endl;
                }
                S = S + i;
                break;
            }


            i++;
        }
    }
    if (p==2)
    {
        cout << S;
    }
    return 0;
}
