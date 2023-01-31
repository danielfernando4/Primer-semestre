#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int menu();

//Prototipos del ejercicio 1
const int n = 10;
void ejercicio_1();
void exponencial(int x);
double exponente(int x,int n);
double factorial(int i);

//Prototipos del ejercicio 2
void ejercicio_2();
void segundo_despues(int hora, int minutos, int segundos);

//Prototipos del ejercicio 3
double hipotenusa(double x, double y);
void ejercicio_3();

//Prototipos del ejercicio 4
int cubo(int numero);
void ejercicio_4();

//Prototipos del ejercicio 5
int inverso (int numero);
bool capicua(int numero);
void ejercicio_5();

//Prototipos del ejercicio 6
void ejercicio_6();
int Hora(int hora, int minutos, int segundos);
void diferencia_Horas();

int main() {
  int opcion;
  cout << "Bienvenido a los ejercicios de funciones" << endl;
  cout << "Autores: Juan Naranjo, Daniel Mera" << endl;
  
    do {
      opcion = menu();
      switch (opcion) 
      {
        case 1: 
          ejercicio_1(); 
          break; 
        
        case 2: 
          ejercicio_2();
          break; 
        
        case 3: 
          ejercicio_3(); 
          break; 
        
        case 4: 
          ejercicio_4();
          break; 
        
        case 5: 
          ejercicio_5();
          break;
        
        case 6: 
          ejercicio_6();
          break;
        }
    
      }while(opcion != 0);
  
    return 0;  
}

int menu(){
  int opcion = -1;
  while ((opcion < 0) || (opcion > 6) ){
    cout << "Menu de ejercicios realizados" << endl;
    cout << "Selecccione el ejercicio que desea" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "4. Ejercicio 4" << endl;
    cout << "5. Ejercicio 5" << endl;
    cout << "6. Ejercicio 6" << endl;
    cout << "0. Salir" << endl;
    cin >> opcion; 
    if ((opcion < 0) || (opcion > 6)){
      cout << "Opcion no valida" << endl;
    }
  }
  return opcion; 
}

//Funciones del ejercicio 1
void ejercicio_1(){
  int x;
  char opcion;
  do {
    cout << "BIENVENIDO AL EJERCICIO 1" << endl;
    cout<<"Autores: Daniel Mera, Juan Naranjo"<<endl;
    cout << "Serie de Tylor" << endl;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    exponencial(x);
    cout << "Ingrese una tecla para continuar 0 para finalizar: ";
    cin >> opcion;
    cout << endl;
  } while(opcion != '0');
}

void exponencial(int x) {
    double ResulTylor = 0, Tylor;
    for (int i = 1; i <= n; i++) {
        Tylor = exponente(x, i) / factorial(i);
        ResulTylor = ResulTylor + Tylor;
    }
    cout << "El resultado de la Serie de Tylor es: " << ResulTylor + 1 << endl;
}

double exponente(int x, int i){
    int resultado;
    resultado = pow(x,i);
    return resultado;
}

double factorial(int i){
    long long int fact = 1;
    if (i <= 0) {
        fact = 0;
    }
    else {
        for (int l = 1; l <= i; l++) {
            fact = fact * l;
        }
    }
    return fact;
}

//Funciones del ejercicio 2
void ejercicio_2(){
  int hora, minutos, segundos;
  char opcion;
  do{
    cout << "BIENVENIDO AL EJERCICIO 2" << endl;
    cout<<"Autores: Daniel Mera, Juan Naranjo"<<endl;
    cout << "CALCULAR LA HORA UN SEGUNDO DESPUES" << endl;
    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundos;
    segundo_despues(hora, minutos, segundos); 
    cout << "Ingrese una tecla para continuar 0 para finalizar: ";
    cin >> opcion;
    cout << endl;
  } while(opcion != '0');
}

void segundo_despues(int hora, int minutos, int segundos){
  int i = 1;
  
  if ((hora <= 23) && (minutos <= 59) && (segundos <= 59)){
    if ((minutos <= 59) && (segundos != 59)){
      segundos += i;
    }
    else if (minutos != 59 && (segundos == 59)){
      segundos = 00;
      minutos += i;
    } 
    else if ((hora != 23) && (minutos == 59) && (segundos == 59)){
      segundos = 00;
      minutos = 00;
      hora += i;
    } 
    else if ((hora == 23) && (minutos == 59) && (segundos == 59)){
      segundos = 01;
      minutos = 00;
      hora = 00;
    }
    cout << "La nueva hora es: " << hora << ":" << minutos << ":" << segundos << endl;
  } else{
    cout << "Hora incorrecta" << endl;
  }
}

//Funciones del ejercicio 3
double hipotenusa (double x, double y){
  double resultado;
  resultado = sqrt(pow(x,2)+pow(y,2));
  return resultado;
}

void ejercicio_3(){
  double cateto1, cateto2;
  char salida;
  cout << "BIENVENIDO AL EJERCICIO 3" << endl;
  cout<<"Autores: Daniel Mera, Juan Naranjo"<<endl;
  while(salida != '0'){
    cout<<"ingrese el valor de un cateto"<<endl;
    cin>>cateto1;
    cout<<"ingrese el valor del otro cateto"<<endl;
    cin>>cateto2;
    
    if(cateto1 == 0 || cateto2==0){
      cout<<"el valor de los catetos no puede ser igual a cero"<<endl;
      salida = 2;
    }
    else{
      cout<<"el valor de la hipotenusa es: "<<hipotenusa(cateto1, cateto2)<<endl;
    }
    cout<<"para salir del ejercicio 3 pulse 0"<<endl<<"para continuar pulse otro numero"<<endl;
    cin>>salida;
  }
}

//funciones del ejericio 4
int cubo(int numero){

  int resultado, cubica = 0; 
  while(numero > 0){
    resultado = numero % 10;
    numero = numero / 10;
    cubica = cubica + pow(resultado, 3); 
  }
 return cubica;
  
}

void ejercicio_4(){
  cout << "BIENVENIDO AL EJERCICIO 4" << endl;
  cout<<"Autores: Daniel Mera, Juan Naranjo"<<endl;
  cout << "Números de tres cifras en los que la suma de los cubos de sus dígitos sea igual al propio número:" << endl;
  cout<<endl;
  int valor = 100;
  while(valor < 1000){
    cubo(valor);
    valor++;
    if(cubo(valor) == valor){
      cout<<cubo(valor)<<endl;
    }
  }
  cout<<endl;
}


//Funciones del ejercicio 5
int inverso (int numero){
  ofstream archivo;
  ifstream lectura;
  int resultado, valor;
  string letra;
  archivo.open("documento.txt");
  while(numero / 10 != 0 || numero % 10 != 0){
     resultado = numero % 10;
     numero = numero / 10;
     archivo<<resultado;
  }
  archivo<<endl<<"x";
  archivo.close();
  
  lectura.open("documento.txt");
  if(lectura.is_open()){
    while(letra != "x"){
      lectura>>valor>>letra;
      
    }
    lectura.close();
    
  }
  return valor;
}

bool capicua(int numero){

  bool retorno; 
  
  if(inverso(numero) == numero){
    retorno = true;
  }
  else{
    retorno = false;
  }
  return retorno;
}

void ejercicio_5(){
  int valor = 1;
  char salida;
  cout << "BIENVENIDO AL EJERCICIO 5" << endl;
  cout<<"autores: Daniel Mera, Juan Naranjo"<<endl;
while(salida != '0'){
  cout<<"ingrese un numero"<<endl;
  cin>>valor;

  if(valor < 0){
    cout<<"el numero debe ser positivo"<<endl;
    cout<<endl;
    valor = 1;
  } 
    
  else if(capicua(valor) == true){
    cout<<inverso(valor);
    cout<<endl<<"es un numero capicua"<<endl;
    cout<<endl;
  }
  else if(capicua(valor)== false){
    cout<<inverso(valor);
    cout<<endl<<"no es un numero capicua"<<endl;
    cout<<endl;
  }
  cout<<"desea salir del ejercicio 5"<<endl<<"presione 0 para salir---presione otro numero para continuar"<<endl;
  cin>>salida;
 }
}

//Funciones del ejercicio 6
void ejercicio_6(){
  int hora, minutos, segundos, hora1, hora2;
  char opcion;
  do{
    cout << "BIENVENIDO AL EJERCICIO 6" << endl;
    cout<<"Autores: Daniel Mera, Juan Naranjo"<<endl;
    cout << "RELOJ EN FORMATO DE 12 HORAS" << endl;
    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundos;
    if((hora <= 12) && (minutos <= 60) && (segundos <= 60)){
      cout << "Los segundos transcurridos desde que fueron las 12 son: " << Hora(hora, minutos, segundos) << endl;
    }else{
      cout << "Hora incorrecta" << endl;
    }
    cout << endl;
    diferencia_Horas();
    cout << "Ingrese una tecla para continuar 0 para finalizar: ";
    cin >> opcion;
    cout << endl;
  } while(opcion != '0');
}

int Hora(int hora, int minutos, int segundos){
  int segundos_usuario;
  segundos_usuario = (hora * 3600) + (minutos * 60) + segundos;
  return segundos_usuario;
}

void diferencia_Horas(){
  int hora, minutos, segundos, hora1, hora2, resultado;
  cout << "Diferencia entre dos horas" << endl;
  cout << "Primer Hora" << endl;
  cout << "Ingrese la hora: ";
  cin >> hora;
  cout << "Ingrese los minutos: ";
  cin >> minutos;
  cout << "Ingrese los segundos: ";
  cin >> segundos;
  if((hora <= 12) && (minutos <= 60) && (segundos <= 60)){
    hora1 = Hora(hora, minutos, segundos);
    cout << "Segunda Hora" << endl;
    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundos;
    if((hora <= 12) && (minutos <= 60) && (segundos <= 60)){
      hora2 = Hora(hora, minutos, segundos);
      resultado = hora1 - hora2;
      if(resultado < 0){
        resultado = resultado * -1;
      }
      cout << "Los segundos de diferencia entre las dos horas es: " << resultado << endl;
    } else{
      cout << "Hora incorrecta" << endl;
    }
  }else{
    cout << "Hora incorrecta" << endl;
  }
}