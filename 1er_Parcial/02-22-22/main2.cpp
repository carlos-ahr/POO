#include <iostream>
using namespace std;
class Cubo{
    int lado;
    public:
    void valor(int);
    int volumen(){return lado * lado * lado;}
};
void Cubo::valor(int l){
    lado=l;
}
int main(){
    Cubo cub;
    cub.valor(3);
    cout<<cub.volumen()<<endl;
}