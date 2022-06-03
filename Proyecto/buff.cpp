#include <iostream>
using namespace std;
// CLASE DE UN TRIANGULO
template <class T>
class Triangulo : public Poligono<T>
{
    T base, altura;

public:
    // CONSTRUCTOR DE UN TRIANGULO
    Triangulo(T b, T h)
    {
        base = b;
        altura = h;
        cout << "[+] Triangulo creado.\n";
    }
    // DESTRUCTOR DE UN TRIANGULO
    ~Triangulo()
    {
        cout << "[-]Triangulo eliminado.\n";
    }
    // DEFINICION DE METODO PERIMETRO PARA EL TRIANGULO
    virtual T perimetro()
    {
        return base * 3;
    }
    // DEFINICION DEL METODO AREA PARA EL TRIANGULO
    virtual T area()
    {
        return (base * altura) / 2;
    }
};
