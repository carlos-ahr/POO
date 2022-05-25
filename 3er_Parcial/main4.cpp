/*
 *27/03/22
*/
#include <iostream>
using namespace std;
template<class T>
class Rectangulo{
    T base, altura;
public:
    Rectangulo(T b, T h){base = b, altura = h;}
    T area(){return base*altura;}
};
int main(){
    Rectangulo<int> rec(2, 4);
    cout<<"El area del rectangulo es: "<<rec.area()<<endl;
    return 0;
}
