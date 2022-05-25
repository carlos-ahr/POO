#include <iostream>
class poligono {
protected:
    int base, altura;
public:
    poligono(int _base, int _altura) : base(_base), altura(_altura);
    ~poligono() {}
};
class Rectangulo : public poligono {
public:
    int area() { return base * altura; }
};
class Triangulo : public poligono {
public:
    int area() { return (base * altura) / 2; }
};