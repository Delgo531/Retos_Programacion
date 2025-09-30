#include "Anagrama_utils.h"
#include <string>
using namespace std;

bool Anagrama(string palabra1, string palabra2)
{

    int contador = 0;

    for (int i = 0; i < palabra1.length(); i++)
    {
        for (int j = 0; j < palabra1.length(); j++)
        {
            if (palabra1.at(i) == palabra2.at(j))
            {
                contador++;
                palabra2.at(j) = '-';
                break;
            }
        }
    }

    if (contador == palabra2.length())
    {
        return true;
    }
    else
    {
        return false;
    }
}