#include <iostream>

using namespace std;

int main()
{

    int v[1000],  i, j, k, n;
    cout << "n=";
    cin >> n;
    cout << "a kov szam";
    cin >> v[0];
    int max1=v[0], max2=0, pos1=0, pos2=0;

    for(int i=1; i<n; i++)
    {
        cout << "a kov szam";
        cin >> v[i];
        j = v[i-1]*v[i];
        //megkeressuk a ket legnagyobb elemet

        if (j>=max1)
        {
            //ha kaptunk egy uj maximumot lementjuk, a helyzetevel egyutt
            //de elott a masodik legnagyobb elembe mentjuk az addigi maximumot
            max2=max1;
            pos2=pos1;
            max1=j;
            pos1=i-1;
        }
        //ha kaptunk egy uj masodik maximumot, akkor lementjuk, a helyzetevel egyutt
        else if (j>max2)
        {
            max2=j;
            pos2=i-1;
        }
    }
    int    S = 0;
    for(int i=0; i<n-1; i++)
    {
        if ((i==pos1) || (i == pos2))
        {
            S = S + v[i] * v[i+1];
            i++;
        }
        else
        {

            S = S + v[i];

        }
    }
    cout << S << endl;
    return 0;
}
