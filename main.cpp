#include <iostream>
using namespace std;

int main() 
{
    int i,j,somma;
    int matrice [3][3];
    somma=0;
    for (i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        cout << "Inserisci l'elemento " << i+1 << "," << j+1 << " della matrice: ";
        cin >> matrice[i][j];
        somma=somma+matrice[i][j];
    }
    cout << "La matrice e':" << endl;
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout << matrice [i][j] << " ";
        }
        cout << endl;
    }
    cout << "La somma e' : "<< somma << endl
}

