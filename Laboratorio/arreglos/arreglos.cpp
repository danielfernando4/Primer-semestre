#include <iostream>
using namespace std;

const int TAM = 40;
void inicializa(int lista[TAM], int &contador);
void imprimir(const int lista[TAM], int contador);
int buscar(const int lista[TAM], int contador, bool & encontrado);
void insertar(int lista[TAM], int &contador, int pos, int nuevo);
void eliminar(int lista[TAM], int &contador, int pos);
int menu();

int main(){
    int var;
    int listado[TAM];
    int contador=0;
    int buscado;
    bool encontrado = false;
    int opcion, pos, nuevo;
    do{
        opcion = menu();
        switch (opcion){
        case 1:
            inicializa(listado, contador);
            break;
        case 2:
            cout << "Posicion a insertar: ";
            cin >> pos;
            cout << "Nuevo valor: ";
            cin >> nuevo;
            insertar(listado, contador, pos, nuevo);
            break;
        case 3:
            cout << "Posicion a eliminar: ";
            cin >> pos;
            eliminar(listado, contador, pos);
            break;
        case 4:
            buscado = buscar(listado, contador, encontrado);
            if (encontrado == true){
                cout << "El numero buscado " << listado[buscado] 
                << " esta en la posicion " << buscado+1 << endl;
            }
            else{
            cout << "El valor buscado no esta en la lista" << endl;
            }
            break;
        case 5:
            imprimir(listado, contador);
            break;
        }
    }while (opcion !=0);
}

void inicializa(int lista[TAM], int &contador){
    int cantValores;
    cout<< "Cuantos valores tendra la lista: " << endl;
    cin >> cantValores;
    for (int i = 0; i < cantValores; i++){
        cout << "Valor " << i+1 << ": ";
        cin >> lista[i];
        contador++;
    }
}
void imprimir(const int lista[TAM], int contador){
    cout << "Estos son los valores de la lista" <<endl;
    for (int i = 0; i <contador; i++){
        cout << "Valor " << i+1 << ": " << lista[i] << endl;
    }
}
int buscar(const int lista[TAM], int contador, bool &encontrado){
    encontrado = false;
    int buscado, posicion = 0;
    cout  << "Ingrese el numero a buscar: ";
    cin >> buscado;
    int i=0;
    while(!encontrado && i < contador){ //Despues de una interaccion encontrado = true y en el while !encontrado = false y por tanto no ingresa 
        //cout << posicion <<" "<< lista[i]<<" "<< buscado <<" "<< encontrado << endl;
        if (lista[i]== buscado){
            posicion = i;
            encontrado = true;
            cout << lista[i];
        }   
        i++;
    }
    //cout << posicion <<" "<< buscado <<" "<< encontrado;
    return posicion;
}

int menu(){
    int op;
    do{
        cout << "1. Inicializar" << endl;
        cout << "2. Insertar" <<endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Buscar" << endl;
        cout << "5. Imprimir" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> op;
    } while ((op < 0) || (op >5));
    return op;
}

void insertar(int lista[TAM], int &contador, int pos, int nuevo){
    if (contador < TAM){
        //Abrir espacio
        for (int i=contador; i>pos; i--){
            lista[i] = lista[i-1];
        }
        //Insertar e incrementar el contador
        lista[pos] = nuevo;
        contador++;
    }
}
void eliminar(int lista[TAM], int &contador, int pos){
    //desplazamos a la izquierda desde el siguiente de la posicion
    for (int i = pos; i<contador-1; i++){
        lista[i]= lista[i+1];
    }
    contador--; // derementamos el contador
}