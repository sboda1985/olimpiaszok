#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    bool repeat = true;
    int kontor = 0;
    int v[1000] = {0};
    int v2[1000] = {0};
    int sz[100] = {0};
     int a = n*n;
    do{

        a = a / 10;
        a = a% 100;

        if (sz[a]== 0) {
            sz[a] = 1;
            v[kontor] = a;
            if (a> 9){
                v2[kontor] = (a/10)%10;

            } else {
                v2[kontor] = a%10;

            }

            kontor ++;
        } else {
            repeat = false;
        }
    a = a * a;
    } while (repeat);
    for(int i = 0; i < kontor; i++){
        cout << v[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < kontor -1; i++){
        for(int j = i+1; j< kontor; j++){
            if (v2[j] < v2[i]) {
                int csere = v2[j];
                v2[j] = v2[i];
                v2[i] = csere;

                csere = v[j];
                v[j] = v[i];
                v[i] = csere;


            }
        }
    }

    for(int i = 0; i < kontor; i++){
        cout << v[i] << " ";
    }

    return 0;
}
