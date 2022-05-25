#include <iostream>
using namespace std;
class Rectangulo{
    int base, altura;
    public:
    Rectangulo();
    Rectangulo(int, int);
    int area(void){return base*altura;};
};
Rectangulo::Rectangulo(){
    base = 2;
    altura = 3;
}
Rectangulo::Rectangulo(int b, int h){
    base = b;
    altura = h;
}
int main(){
    Rectangulo rect(4, 5);
    Rectangulo rect2;
    cout<<"Area 1: "<<rect.area()<<endl<<"Area 2: "<<rect2.area()<<endl;
    return 0;
}