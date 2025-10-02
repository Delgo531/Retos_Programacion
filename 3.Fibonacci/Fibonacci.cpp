#include <iostream>
#include <vector>
using namespace std;
int main()
{

    long size = 0;
    cout << "Ingresa el tamaño de la secuencia:" << endl,
        cin >> size;

    vector<unsigned long long> fibonacci(size);

    for (int i = 0; i < size; i++)
    {
        if (i <= 1)
        {
            fibonacci[i] = i;
        }
        else
        {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }

        cout << i << ". " << fibonacci[i] << endl;
    }
}