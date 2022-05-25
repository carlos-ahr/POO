/*
HERRERA RANGEL CARLOS ALBERTO 2AM2
10-03-2022
EJERCICIO 1:
Ejemplo de una clase derivada con un "friend"
*/
#include <iostream>
using namespace std;
class Cuadrado;
class Rectangulo{
    int base, altura;
public:
    int area() { return base * altura; }
    void convertir(Cuadrado x);
};
class Cuadrado{
    friend Rectangulo;
private:
    int lado;
public:
    Cuadrado(int x) : lado(x) {}
};
void Rectangulo::convertir(Cuadrado x){
    base = x.lado;
    altura = x.lado;
}
int main(){
    Rectangulo rect;
    Cuadrado cuad(8);
    rect.convertir(cuad);
    cout << "Area: " << rect.area() << endl;
    return 0;
}