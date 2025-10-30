#include <iostream>
using namespace std;

string decimalABinario(int decimal)
{
    
    if (decimal == 0)
        return "0";

    string binario = "";

    while (decimal > 0)
    {
        int residuo = decimal % 2; 

        binario = char(residuo + '0') + binario;

        decimal /= 2;
    }

    return binario;
}

int main()
{
    int numero;

    cout << "Ingrese un numero decimal entero positivo: ";
    cin >> numero;

    
    if (cin.fail() || numero < 0)
    {
        cout << "Error: ingrese un numero entero positivo valido." << endl;
        return 1;
    }

    string resultado = decimalABinario(numero);

    cout << "El numero decimal " << numero
         << " en binario es: " << resultado << endl;

    return 0;
}

