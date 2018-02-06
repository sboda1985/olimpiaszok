
/*
Egy kódot egy n és k szám segítségével generálnak, a következőképpen:
* az első sorban a két első tag 1 es, az ezután következők ez előzőek összegei
* a következő k-1 sorban az első tag az előtte levő sorból az első két tag összege
* a következő k-1 sorban a második tag az előtte levő sorból a második és harmadik tag összege
* a következő k-1 sorban az ezután következő tagok az előző kettő összegei.
* a kód a k. sorban lévő n. tag lesz, ha az prím, ha nem, akkor az ezután következő első prímszám

Trükk: valójában a Fibonnacci sort kell legeneráljuk, méghozzá a Fibbonacci sornak a F(n+2*k-2) tagját, 
ha ez prím, ha nem, akkor a következő prím tagját

*/
#include <iostream>
#include <fstream>

bool prim(unsigned long a)
{

    if (a%2 == 0)
    {
        return false;
    }

    for(unsigned long i=3; i<a/2; i++)
    {
        if (a%i == 0)
        {
            return false;
        }
    }
    return true;

}
using namespace std;

int main()
{
    int n, k;
    ifstream input("COD.IN");
    ofstream output("COD.out");

    input >> k;
    input >> n;
    n += 2*(k-1);

    unsigned long prev = 1;
    unsigned long next = 1;
    unsigned long F = 1;
    bool ismetel = true;
    int kontor = 2;
    if (n > 1)
    {
        do
        {
            F = prev + next;
            prev = next;
            next = F;
            kontor++;
            if (kontor >= n)
            {
                if (prim(F)){
                    ismetel = false;
                }
            }
        }
        while (ismetel);
    }
    output << F;
    return 0;
}
