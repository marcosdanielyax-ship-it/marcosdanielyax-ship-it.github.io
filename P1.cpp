#include <iostream>
#include <iomanip> 

using namespace std;


const int DIAS_EN_ANIO = 365;
const int DIAS_EN_MES = 30; 
const int DIAS_EN_SEMANA = 7;

void calcular_con_while(int dias_total) {
    cout << "\n--- Usando la estructura WHILE ---\n";

    int dias_restantes = dias_total;
    int anios = 0;
    int meses = 0;
    int semanas = 0;

    // años
    while (dias_restantes >= DIAS_EN_ANIO) {
        anios++;
        dias_restantes -= DIAS_EN_ANIO;
    }

    // meses
    while (dias_restantes >= DIAS_EN_MES) {
        meses++;
        dias_restantes -= DIAS_EN_MES;
    }

    // semanas
    while (dias_restantes >= DIAS_EN_SEMANA) {
        semanas++;
        dias_restantes -= DIAS_EN_SEMANA;
    }
    
    // lo restante
    
    cout << "Resultado del calculo con WHILE:\n";
    cout << dias_total << " dias equivalen a:\n";
    cout << "- Anios: " << anios << endl;
    cout << "- Meses: " << meses << " (Aprox.)" << endl;
    cout << "- Semanas: " << semanas << endl;
    cout << "- Dias restantes: " << dias_restantes << endl;
}

void calcular_con_do_while(int dias_total) {
    cout << "\n--- Usando la estructura DO-WHILE ---\n";

    int dias_restantes = dias_total;
    int anios = 0;
    int meses = 0;
    int semanas = 0;
    
   

    // años
    if (dias_restantes >= DIAS_EN_ANIO) {
        do {
            anios++;
            dias_restantes -= DIAS_EN_ANIO;
        } while (dias_restantes >= DIAS_EN_ANIO);
    }
    
    //meses
    if (dias_restantes >= DIAS_EN_MES) {
        do {
            meses++;
            dias_restantes -= DIAS_EN_MES;
        } while (dias_restantes >= DIAS_EN_MES);
    }

    // semanas
    if (dias_restantes >= DIAS_EN_SEMANA) {
        do {
            semanas++;
            dias_restantes -= DIAS_EN_SEMANA;
        } while (dias_restantes >= DIAS_EN_SEMANA);
    }
    
    // restante

    cout << "Resultado del calculo con DO-WHILE:\n";
    cout << dias_total << " dias equivalen a:\n";
    cout << "- Anios: " << anios << endl;
    cout << "- Meses: " << meses << " (Aprox.)" << endl;
    cout << "- Semanas: " << semanas << endl;
    cout << "- Dias restantes: " << dias_restantes << endl;
}


int main() {
    int dias_ingresados;
    
    // entrada de datos
    cout << "PROYECTO 01: Conversor de Dias a Anios, Meses y Semanas\n";
    cout << "--------------------------------------------------------\n";
    cout << "Ingrese el numero de dias: ";
    
    
    if (!(cin >> dias_ingresados) || dias_ingresados < 0) {
        cout << "Error: Ingrese un valor numerico positivo valido.\n";
        return 1; // Salir con error
    }

    // llama la funciones
    calcular_con_while(dias_ingresados);
    calcular_con_do_while(dias_ingresados);

    return 0; // Salir sin errores
}
