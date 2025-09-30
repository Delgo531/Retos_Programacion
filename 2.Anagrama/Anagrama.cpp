#include <iostream>
#include "Anagrama_utils.h"
using namespace std;
int main()
{
    if (Anagrama("ol", "eded"))
    {
        cout << "Es un anagrama" << endl;
    }
    else
    {
        cout << "No es un anagrama" << endl;
    }

    return 0;
}