#include <iostream>
using namespace std;
class cuadrado{
    int base, altura;
    public:
        void mostrar(int,int);
        int area(){return base * altura;}
};
void cuadrado::mostrar(int h, int b){
    base = b;
    altura = h;
}
int main(){
    cuadrado cuadrado1;
    cuadrado1.mostrar(2,6);
    cout<<"Area: "<<cuadrado1.area()<<endl;
    return 0;
}