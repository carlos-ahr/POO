#include <iostream>
using namespace std;
class demostracion{
public:
    demostracion();
    ~demostracion();
};
demostracion::demostracion(){
    cout<<"Se acaba de definir un object, el constructor esta corriendo" << endl;
}
demostracion::~demostracion(){
    cout<<"El destructor esta corriendo"<<endl;
}
int main(){
    demostracion demo;
    cout<<"El object esta apunto de ser destruido"<<endl;
    return 0;
}
