#include <iostream>
using namespace std;

int menu();

int main(){
    int opcion;
    cout << "Bienvenido a los ejercicios de arreglos" << endl;
    cout << "Autores: Daniel Mera, Juan Naranjo" << endl;

    do{
        opcion = menu();
        switch (opcion)
        {
            case 1:

            break;

            case 2:
            
            break;

            case 3:
            
            break;

            case 4:
            
            break;
        }
    } while (opcion != 0 );




    return 0;
}

int menu(){
    int opcion = -1;
    while ((opcion < 0) || (opcion > 4) ){
    cout << "Menu de ejercicios realizados" << endl;
    cout << "Selecccione el ejercicio que desea" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "4. Ejercicio 4" << endl;
    cout << "0. Salir" << endl;
    cin >> opcion; 
    if ((opcion < 0) || (opcion > 4)){
        cout << "Opcion no valida" << endl;
        }
    }
    return opcion; 
}