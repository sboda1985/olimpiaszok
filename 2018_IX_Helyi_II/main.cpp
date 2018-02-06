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
