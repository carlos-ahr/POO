#include <iostream>
using namespace std;
class Mascota{
public:
virtual ~Mascota() = 0;
};
Mascota::~Mascota(){
    cout<<"~Mascota()"<<endl;
}
class Perro : public Mascota{
    public:
    ~Perro(){
        cout<<"~Perro()"<<endl;
    }
};
int main(){
    Mascota *p = new Perro;
    delete p;
    return 0;
}