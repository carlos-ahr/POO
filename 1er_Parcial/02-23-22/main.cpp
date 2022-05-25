#include <iostream>
using namespace std;
class Triangulo{
    int base, altura;
    public:
    void calcularArea(int, int);
    int area(){return(base * altura)/2;};
}tria0, tria1;
void Triangulo::calcularArea(int b, int h){
    base = b;
    altura = h;
}
int main(){
    tria0.calcularArea(2, 8);
    tria1.calcularArea(3, 8);
    cout<<"Area del triangulo 1: "<<tria0.area()<<endl<<"Area de triangulo 2: "<<tria1.area()<<endl;
    return 0;
}