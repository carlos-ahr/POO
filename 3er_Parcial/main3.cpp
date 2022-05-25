/*
 *27/03/22
*/
#include <iostream>
using namespace std;
template <class T>
class Cono{
    T radio, altura;
public:
    Cono(T r, T h){radio = r, altura = h;}
    T volumen(){return (3.1416*(radio*radio)*altura)/3;}
};
int main(){
    Cono<float>c1(15.1, 17.2);
    cout<<"El volumen es: "<<c1.volumen()<<endl;
    return 0;
}
