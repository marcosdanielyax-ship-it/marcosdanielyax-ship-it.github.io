#include <iostream>
#include <cmath> 

using namespace std;

int calcularMCD(int a, int b)
{
    
    if (a == 0)
        return abs(b);
    if (b == 0)
        return abs(a);

    while (b != 0)
    {
        int temp = b;   
        b = a % b;      
        a = temp;       
    }

   
    return abs(a);
}


int calcularMCM(int a, int b)
{
    
    if (a == 0 || b == 0)
        return 0;

    
    int mcd = calcularMCD(a, b);

    
    return abs((a / mcd) * b);
}


int main()
{
    int num1, num2;

    cout << "===================================" << endl;
    cout << "  CALCULADORA DE MCD Y MCM" << endl;
    cout << "===================================" << endl;

    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    
    if (!cin)
    {
        cout << "Error: Debe ingresar numeros enteros validos." << endl;
        return 1;
    }

    
    int mcd_resultado = calcularMCD(num1, num2);
    int mcm_resultado = calcularMCM(num1, num2);

   
    cout << "\RESULTADOS:	" << endl;
    cout << "-----------------------------------" << endl;
    cout << "El Maximo Comun Divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd_resultado << endl;
    cout << "El Minimo Comun Multiplo (MCM) de " << num1 << " y " << num2 << " es: " << mcm_resultado << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}

