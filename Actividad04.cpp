#include <iostream>
#include <cstring>
#include <conio.h>
 
using namespace std;
 
void arreglo() {
  float arreglo[5];
  float num, suma = 0;
  for (int i = 0; i <= 4; i++) {
    cout << "Introduce el numero de la posicion " << i << ": "; cin >> num;
    arreglo[i] = num;
  }
  cout << "\nNumeros ingresados: ";
  for (int i = 0; i <= 4; i++) {
    cout << arreglo[i] << " ";
    suma += arreglo[i];
  }
  fflush(stdin);
  cout << "\nLa suma de los numeros es: " << suma << endl;
  cout << "El promedio del arreglo es: " << suma / 5 << "\n" << endl;
}
 
int main() {
  int opc = 0;
  int bucle = 1;
  while (bucle == 1) {
    cout << "Selecciona una de las siguientes opciones:" << endl;
    cout << "Opcion 1: Capturar arreglo" << endl;
    cout << "Opcion 2: Mostrar arreglo" << endl;
    cout << "Opcion 3: Crear estructura de personaje" << endl;
    cout << "Opcion 4: Salir del programa\n" << endl;
    cout << "Ingresa una opcion: "; cin >> opc;
    cout << "**************************\n";
 
    switch (opc) {
    case 1: arreglo(); break;
    case 2: break;
    case 3: break;
    case 4:
      cout << "\nSaliendo del programa...";
      return 0;
      break;
    default:
      cout << "Opcion no valida, ingrese otra vez" << endl;
      break;
    }
  }
}