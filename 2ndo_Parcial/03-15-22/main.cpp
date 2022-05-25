#include <iostream>
using namespace std;
class Poligono{
protected:
    int base, altura, basemayor, basemenor;
public:
    void valor(int a, int b, int _basemayor, int _basemenor)
    {
        base = b;
        altura = a;
        basemayor = _basemayor;
        basemenor = _basemenor;
    }
};
class Rectangulo : public Poligono{
public:
    int area() { return base * altura; }
};
class Triangulo : public Poligono{
public:
    int area() { return base * altura / 2; }
};
class Rombo : public Poligono{
public:
    int area() { return basemayor * basemenor / 2; }
};
class Trapecio : public Poligono{
public:
    int area() { return basemayor * basemenor / 2; }
};
int main(){
    Rectangulo rect;
    Triangulo tria;
    Rombo rom;
    Trapecio traP;
    rect.valor(4, 3, 1, 1);
    tria.valor(8, 9, 1, 1);
    rom.valor(1, 1, 5, 5);
    traP.valor(1, 1, 2, 4);
    cout << "area del Rectangulo es: " << rect.area() << endl;
    cout << "Area del triangulo: " << tria.area() << endl;
    cout << "Area del Rombo: " << rom.area() << endl;
    cout << "Area del Trapecio es: " << traP.area() << endl;
}