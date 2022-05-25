#include <iostream>
#include <string>
using namespace std;
class ejemplo{
    string *ptr;
    public:
    ejemplo():ptr(new string){}
    ejemplo(const string& str):ptr(new string(str)){}
    ~ejemplo(){delete ptr;}
    const string& contenido(){return *ptr;}
};
int main(){
    ejemplo foo("foo");
    ejemplo bar("bar");
    cout<<"foo contenido: "<<foo.contenido()<<endl;
    cout<<"bar contenido: "<<bar.contenido()<<endl;
    return 0;
}