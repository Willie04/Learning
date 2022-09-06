#include <iostream>

using namespace std;
void read_address()
{  
    int a =0;
    int b =1;
    int* a_pointer;
    cout << "a = "<< a << "\t a.address = " << &a <<endl;
    cout << "b = "<< b << "\t b.address = "<< &b <<endl;
    a_pointer = &a ;
    cout <<  "a_pointer = &a ---> a_pointer = " << a_pointer <<endl;
    cout << *a_pointer  << " different " << a_pointer << endl;
    cout << "so *appinter is a index a_pointer is a address" << endl;
    cout << "change value"<< endl;
    *a_pointer = 100;
    cout <<" *a_pointer = 100 so *a_pointer is : " << *a_pointer << endl ;
}

int main(){
    read_address();

    system("pause");
}