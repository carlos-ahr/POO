#include <iostream>
using namespace std;
class Poligono{
protected:
    int base, altura;
public:
    Poligono(int a, int b) : base(b), altura(a) {}
};
class Salida{
public:
    static void imprimir(int i);
};
void Salida::imprimir(int i){
    cout << i << endl;
}
class Rectangulo : public Poligono, public Salida{
public:
    Rectangulo(int a, int b) : Poligono(a, b) {}
    int area() { return base * altura; }
};
class Triangulo : public Poligono, public Salida{
public:
    Triangulo(int a, int b) : Poligono(a, b) {}
    int area() { return base * altura / 2; }
};
int main(){
    Rectangulo rec(3, 5);
    Triangulo tria(9, 8);
    rec.imprimir(rec.area());
    Triangulo::imprimir(tria.area());
    return 0;
}