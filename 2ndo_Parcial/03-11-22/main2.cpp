/*
HERRERA RANGEL CARLOS ALBERTO 2AM2
10-03-2022
EJERCICIO 2:
Ejemplo de una clase derivada con herencia
*/
#include <iostream>
using namespace std;
class Poligono{
protected:
    int base, altura, dMayor, dMenor, bMayor, bMenor;
public:
    void config(int _b, int _h, int D, int d, int b, int B) { base = _b, altura = _h, dMayor = D, dMenor = d, bMayor = B, bMenor = b; }
};
class Rectangulo : public Poligono{
public:
    int area() { return base * altura; }
};
class Triangulo : public Poligono{
public:
    int area() { return (base * altura) / 2; }
};
class Rombo : public Poligono{
public:
    int area() { return (dMayor * dMenor) / 2; }
};
class Trapecio : public Poligono{
public:
    int area() { return (bMayor * bMenor) / 2; }
};
int main(){
    Rectangulo rec0;
    Triangulo tria0;
    Rombo rom0;
    Trapecio tra0;
    rec0.config(2, 4, 0, 0, 0, 0);
    tria0.config(2, 4, 0, 0, 0, 0);
    rom0.config(0, 0, 2, 4, 0, 0);
    tra0.config(0, 0, 0, 0, 2, 4);
    cout << "AREA" << endl << "Rectangulo:\t" << rec0.area() << endl << "Triangulo:\t" << tria0.area() << endl << "Rombo:\t\t" << rom0.area() << endl << "Trapecio\t" << tra0.area() << endl;
    return 0;
}

