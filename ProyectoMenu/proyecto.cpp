#include <iostream> //libreria estandar 
#include <windows.h> // Para usar SetConsoleOutputCP y forzar UTF-8 en la terminal
#include <string>   // Para usar string y empty
#include <cstdlib>  //para usar system("cls") y limpiar pantalla y system("pause") para pausar la //ejecucion del programa 
#include <iomanip>  // Para usar setprecision
#include <clocale>  //para usar setlocale y poder usar acentos y otros caracteres

    //no se usa using namespace std; por que es una mala practica y puede causar conflictos de nombres

    using std::cout;// Para usar cout <<
    using std::cin;// Para usar cin >>
    using std::string;// Para usar string 
    using std::endl;// Para usar endl 
    using std::fixed;// Para usar fixed
    using std::setprecision;// Para usar setprecision (numero de decimales)
    using std::getline;// Para usar getline 
    using std::setw;//para predefinir con espacios
    using std::left;//para alinear ala izquierda

int main(){
    int opcionm1, opcionm2;
    long long precioV;
    string nombrec;
    float recargo = 0; 
    int jardin = 0, piscina = 0;
    SetConsoleOutputCP(65001); // Fuerza UTF-8 para imprimir ñ y tildes

    cout << "\033[32mMY HOME\033[0m\n";
    cout << "bienvenido \n";
    cout << "Ingrese nombre del cliente :";
    getline(cin,nombrec);

    if (nombrec.empty())
    {
        cout << "\033[31mnombre invalido \033[0m\n";
        cout <<"Saliendo..";
        Sleep(1500);
        exit (0);
    }
    cout << "bienvenido SR@ " << "\033[94m" << nombrec << "\033[0m\n";

    // Encabezados
    cout << left << setw(30) << "Tipo de vivienda"
         << setw(20) << "En obra negra"
         << setw(25) << "Acabados sencillos"
         << setw(25) << "Acabados especiales" << endl;

    cout << string(100, '-') << endl;

    // Filas de la tabla
    cout << left << setw(30) << "1) De un piso colindante"
         << setw(20) << "$75.000.000"
         << setw(25) << "$85.000.000"
         << setw(25) << "$90.000.000" << endl;

    cout << left << setw(30) << "2) De dos pisos colindante"
         << setw(20) << "$85.000.000"
         << setw(25) << "$95.000.000"
         << setw(25) << "$100.000.000" << endl;

    cout << left << setw(30) << "3) De un piso esquinera"
         << setw(20) << "$80.000.000"
         << setw(25) << "$90.000.000"
         << setw(25) << "$95.000.000" << endl;

    cout << left << setw(30) << "4) De dos pisos esquinera"
         << setw(20) << "$90.000.000"
         << setw(25) << "$100.000.000"
         << setw(25) << "$105.000.000" << endl;

         cout <<endl;
         cout <<endl;
 
         cout << "Que tipo de vivienda deseea?\n";
         cout <<endl;
         cout << "\033[92m 1)\033[0m"<<"De un piso colindante \n";
         cout << "\033[92m 2)\033[0m"<<"De dos pisos colindante\n";
         cout << "\033[92m 3)\033[0m"<<"De un piso esquinera\n";
         cout << "\033[92m 4)\033[0m"<<"De dos pisos esquinera\n";
         cin >> opcionm1;

         if (opcionm1 < 0 || opcionm1 > 4)
         {
            cout << "\033[31mDato invalido \033[0m\n";
            cout <<"Saliendo..";
            Sleep(1500);
            exit (0);
         }
    
         cout << "Que tipo de acabados desea deseea?\n";
         cout <<endl;
         cout << "\033[92m 1)\033[0m"<<"En obra negra \n";
         cout << "\033[92m 2)\033[0m"<<"Acabados sencillos\n";
         cout << "\033[92m 3)\033[0m"<<"Acabados especiales\n";
         cin >> opcionm2;
    
         if (opcionm2 < 0 || opcionm2 > 3)
         {
            cout << "\033[31mDato invalido \033[0m\n";
            cout <<"Saliendo..";
            Sleep(1500);
            exit (0);
         }
        
         switch (opcionm1)
         {

             case 1:
             {
                switch(opcionm2) 
                {
                    case 1:
                    {
                        precioV = 75000000;
                        break;
                    }
                    case 2:
                    {
                        precioV = 85000000;
                        break;
                    }
                    case 3:
                    {
                        precioV = 90000000;
                        break;
                    }
                }
                break;
             }// termina case 1
             case 2:
             {
                switch(opcionm2) 
                {
                    case 1:
                    {
                        precioV = 85000000;
                        break;
                    }
                    case 2:
                    {
                        precioV = 95000000;
                        break;
                    }
                    case 3:
                    {
                        precioV = 100000000;
                        break;
                    }
                }
                break;
             }// termina case 2
             case 3:
             {
                switch(opcionm2) 
                {
                    case 1:
                    {
                        precioV = 80000000;
                        break;
                    }
                    case 2:
                    {
                        precioV = 90000000;
                        break;
                    }
                    case 3:
                    {
                        precioV = 95000000;
                        break;
                    }
                }
                cout << "¿Qué tipo de jardín desea?\n1) Grande (15%)\n2) Pequeño (10%)\n";
                cin >> jardin;
                if (jardin == 1)
                {
                    recargos += precioV * 0.15;
                }
                else if (jardin == 2)
                {
                    recargos += precioV * 0.10;
                }
                else
                {
                    cout << "\033[31mDato invalido \033[0m\n";
                    cout <<"Saliendo..";
                    Sleep(1500);
                    exit (0);
                }
                cout << "¿Desea vista a la piscina? (1 = Sí, 0 = No): ";
                cin >> piscina;
                if (piscina == 1)
                {
                    recargos += precioV * 0.05;
                }
                break;
             }// termina case 3 
             case 4:
             {
                switch(opcionm2) 
                {
                    case 1:
                    {
                        precioV= 90000000;
                        break;
                    }
                    case 2:
                    {
                        precioV = 100000000;
                        break;
                    }
                    case 3:
                    {
                        precioB = 105000000;
                        break;
                    }
                }//termina swtich
                cout << "¿Qué tipo de jardín desea?\n1) Grande (15%)\n2) Pequeño (10%)\n";
                cin >> jardin;
                if (jardin == 1)
                {
                    recargos += precioV * 0.15;
                }
                else if (jardin == 2)
                {
                    recargos += precioV * 0.10;
                }
                else
                {
                    cout << "\033[31mDato invalido \033[0m\n";
                    cout <<"Saliendo..";
                    Sleep(1500);
                    exit (0);
                }
                 
                cout << "¿Desea vista a la piscina? (1 = Sí, 0 = No): ";
                cin >> piscina;
                if (piscina == 1)
                {
                    recargos += precioV * 0.05;
                }
                break;
            }// termina case 4
        }//fin del switch del menu1



    return 0;
}
