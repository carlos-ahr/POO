#include <iostream>
using namespace std;
class delfines{
    public:
    virtual ~delfines()=0;
};
delfines ::~delfines(){
    cout<<"~cetaceos"<<endl;
}
class distintosdelfines:public delfines{
    public:
    ~distintosdelfines(){
    cout<<"~delfin()"<<endl;}
};
int main(){
    delfines *p=new distintosdelfines;
    delete p;
}