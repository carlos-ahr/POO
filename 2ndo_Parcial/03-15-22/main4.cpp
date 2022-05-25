#include <iostream>
#include <math.h>
using namespace std;
class Volumenes{
protected:
    int l, R, h;
public:
    double Pi = 3.141592;
    void valor(int _l, int _R, int _h)
    {
        l = _l;
        R = _R;
        h = _h;
    }
};
class Cubo : public Volumenes{
public:
    int area() { return pow(l, 3); }
};
class Cilindro : public Volumenes{
public:
    int area() { return pow(R, 2) * Pi * h; }
};
class Cono : public Volumenes{
public:
    int area() { return ((pow(R, 2) * Pi) / 3) * h; }
};
int main(){
    Cubo cub;
    Cilindro cili;
    Cono co;
    cub.valor(2, 1, 1);
    cili.valor(1, 8, 4);
    co.valor(1, 5, 3);
    cout << "El volumen del cubo es: " << cub.area() << endl;
    cout << "El volumen del cilindro es: " << cili.area() << endl;
    cout << "El volumen del cono es: " << co.area() << endl;
}