#include <iostream>
#include <string>
using namespace std;
int main(){
    string nombre, boleta, promedio, profesor, numero, direccion;
    cout<<"Cual es tu nombre? ";
    getline(cin, nombre);
    cout<<"Cual es tu numero de boleta? ";
    getline(cin, boleta);
    cout<<"Cual es tu promedio? ";
    getline(cin, promedio);
    cout<<"Cual fue tu profesor de fundamentos de programacion? ";
    getline(cin, profesor);
    cout<<"Cual es tu numero? ";
    getline(cin, numero);
    cout<<"Cual es tu direccion? ";
    getline(cin, direccion);
    cout<<"Hola "<<nombre<<" Bienvenido al curso de programacion orientada a objetos!\nBoleta: "<< boleta<<"\nPromedio:"<<promedio<< "\nProfesor:"<<profesor<<"\nNumero: "<<numero<<"\nDireccion: "<< direccion;
    return 0;
}