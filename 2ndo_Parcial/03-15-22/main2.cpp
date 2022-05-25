#include <iostream>
using namespace std;
class Poligono{
protected:
    int base, altura;
public:
    void valor(int a, int b)
    {
        base = a;
        altura = b;
    }
};
class Rectangulo : public Poligono{
public:
    int area() { return base * altura; }
    int perimetro() { return 2 * (altura + base); }
    int volumen() { return altura * altura * altura; }
};
class Triangulo : public Poligono{
public:
    int area() { return base * altura / 2; }
    int perimetro() { return altura + altura + altura; }
    int volumen() { return altura * base * altura / 3; }
};
int main(){
    Rectangulo rect;
    Triangulo trian;
    rect.valor(4, 5);
    trian.valor(4, 5);
    cout << "Area del Triangulo: " << trian.area() << endl;
    cout << "perimetro del Triangulo:" << trian.perimetro() << endl;
    cout << "volumen del Triangulo: " << trian.volumen() << endl;
    cout << "Area del Rectangulo : " << rect.area() << endl;
    cout << "perimetro del Rectangulo:" << rect.perimetro() << endl;
    cout << "volumen del Rectangulo: " << rect.volumen() << endl;
}