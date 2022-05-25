#include <iostream>
using namespace std;
class Rectangulo{
    int base, altura;
    public:
    Rectangulo(int b, int h):base(b), altura(h){};
    Rectangulo() = default;
    Rectangulo(const Rectangulo & other) = delete;
    int area(){return base * altura;};
};
int main(){
    Rectangulo rec(6,7);
    Rectangulo rec1(5,7);
    cout<<"Area: "<<rec.area()<<endl;
    cout<<"Area 2 : "<<rec1.area()<<endl;
    return 0;
}