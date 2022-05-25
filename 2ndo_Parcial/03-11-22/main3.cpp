/*
HERRERA RANGEL CARLOS ALBERTO 2AM2
10-03-2022
EJERCICIO 3:
EJERCICIO de una clase derivada con herencia
*/
#include <iostream>
using namespace std;
class Poligono{
protected:
    int lado, apotema;
public:
    void config(int l, int a) { lado = l, apotema = a; }
};
class Pentagono : public Poligono{
public:
    int area() { return ((lado * apotema) * 5) / 2; }
};
class Hexagono : public Poligono{
public:
    int area() { return ((lado * apotema) * 6) / 2; }
};
class Heptagono : public Poligono{
public:
    int area() { return ((lado * apotema) * 7) / 2; }
};
int main(){
    Pentagono pen0;
    Hexagono hex0;
    Heptagono hep0;
    pen0.config(5, 6);
    hex0.config(6, 7);
    hep0.config(7, 8);
    cout << "AREA\n" << "Pentagono:\t" << pen0.area() << endl << "Hexagono:\t" << hex0.area() << endl << "Heptagono:\t" << hep0.area() << endl;
    return 0;
}