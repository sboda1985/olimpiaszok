/*

Adott egy input.txt, amelynek az első sorában egy N szám van, 
s a következő 2 sorban egy a, illetve b sorozat.
Számítsuk ki az ai^bi összeg utolsó számjegyét, s írjuk ki egy output.txt fileba.

Trükk: az összeg utolsó számjegyéhez minden tag utolsó számjegyére van szükségünk, 
így minden szorzás után elhanyagoljuk a többit.
Lehetne még hatékonyabban is, ha figyelembe vennék, hogy különböző számjegyek 
különböző hatványokon csak néhány értéket vehetnek fel, pl 5 bármelyik 0 tól nagyobb hatványkitevő esetén 5 el végződik, stb.
*/

#include <iostream>
#include <fstream>
using namespace std;

int szamjegy(int a, int b)
{

    if (a == 0)
    {
        return 0;
    }

    if (b == 0)
    {

        return 1;
    }

    int c = 1;
    for(int i = 0; i< b; i++)
    {
        c*=a;
        c= c%10;
    }
    return c;
}

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int n;
    int S = 0;
    input >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        input >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        input >> b[i];
    }
    for(int i=0; i<n; i++)
    {
        S+=szamjegy(a[i],b[i]);
    }
    output << S%10;

    return 0;
}
