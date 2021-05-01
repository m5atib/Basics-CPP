#include <iostream.h>

class PrintNumber{

private:
int *a;
public:
PrintNumber(int);
PrintNumber (PrintNumber &);
void set(int);
void print();
};
PrintNumber::PrintNumber(int v){
a = new int;
*a=v;
}
PrintNumber::PrintNumber(PrintNumber &obj){
a = new int;
*a=*obj.a;
}
void PrintNumber::print(){
cout <<*a<<endl;
}
void PrintNumber::set(int v){
*a=v;
}

main(){

PrintNumber p(4);
p.print(); // 4
PrintNumber p2=p; // call user defined copy constructor
p.set(5); 
p2.print();//4
p.print(); //5 
}