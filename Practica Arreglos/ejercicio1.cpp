#include <iostream>
using namespace std;

const int TAM = 50;
void ejercicio_1();
int menu();
void ingresar_notas(double lista[TAM], int &contador);
int buscar(const double lista[TAM], const int contador, bool &encontrado);
void eliminar(double lista[TAM], int &contador);
void insertar(double lista[TAM], int &contador);
void visualizar(const double lista[TAM], const int contador);

int main(){
    ejercicio_1();
    return 0;
}

void ejercicio_1(){
    int opcion, buscado, contador = 0;
    double lista[TAM];
    bool encontrado = false;

    do{
        opcion = menu();
        switch (opcion)
        {
        case 1:
            ingresar_notas(lista,  contador);
            break;
        
        case 2:
            buscado = buscar(lista, contador, encontrado);
            if(encontrado == true){
                cout << "La calificacion " << lista[buscado] << " se encuentra en la posicion " 
                << buscado + 1 << endl;
            }else{
                cout << "La calificacion ingresda no consta en la lista" << endl;
            }
            cout << endl;
            break;

        case 3:
            eliminar(lista, contador);
            break;

        case 4:
            insertar(lista, contador);
            break;
        
        case 5:
            visualizar(lista, contador);
            break;
        }    
    } while(opcion != 0);
}

void ingresar_notas(double lista[TAM],  int &contador){
    int num_calificaciones;
    cout << "Cantidad de calificaciones a ingresar: ";
    cin >> num_calificaciones;
    if (num_calificaciones <= TAM){
        for(int i = 0; i < num_calificaciones; i++){
            cout << "Calificacion " << i + 1 << ": ";
            cin >> lista[i];
            contador++;
        }
    } else {
        cout << "Cantidad de calificaciones superior a la capacidad de la lista" << endl;
    }
    cout << endl;
}

int buscar(const double lista[TAM],  const int contador, bool &encontrado){
    double buscado;
    int resultado, i = 0;
    cout << "Ingrese la calificacion a buscar: ";
    cin >> buscado;

    while((i < contador) && (!encontrado)){
        if (lista[i] == buscado){
            encontrado = true;
            resultado = i;
        } else { 
            i++;
        }
    }
    return resultado;
}

void eliminar(double lista[TAM], int &contador){
    int pos;
    cout << "Ingresar posicion de la calificacion a eliminar: ";
    cin >> pos;
    for (int i = pos-1; i < contador-1; i++){
    lista[i]= lista[i+1];
    }
    contador--;
    cout << endl; 
}

void insertar(double lista[TAM], int &contador){
    int pos;
    double calificacion;
    cout << "Ingresar la posicion de la nueva calificacion: ";
    cin >> pos;
    cout << "Ingresar el valor de la nueva calificacion: ";
    cin >> calificacion;
    if (contador < TAM){
        for (int i=contador; i>pos; i--){
            lista[i] = lista[i-1];
        }
        lista[pos] = calificacion;
        contador++;
    }
    cout << endl;
}

void visualizar(const double lista[TAM], const int contador){
    cout  << "Listado de notas" << endl;
    for(int i = 0; i < contador; i++){
        cout << "Calificacion " << i + 1 << ": " << lista [i] << endl;
    }
    cout << endl;
}

int menu(){
    int opcion = -1;
    while ((opcion < 0) || (opcion > 5) ){
    cout << "SISTEMA DE CALIFICACIONES" << endl;
    cout << "1. Ingresar calificaciones" << endl;
    cout << "2. Buscar calificaciones" << endl;
    cout << "3. Eliminar calificaciones" << endl;
    cout << "4. Insertar calificacion atrasada" << endl;
    cout << "5. Visualizar calificaciones" << endl;
    cout << "0. Salir" << endl;
    cin >> opcion; 
    if ((opcion < 0) || (opcion > 5)){
        cout << "Opcion no valida" << endl;
        }
    }
    cout << endl;
    return opcion;  
}
