#include <iostream>

using namespace std;

int main(int argc, char* arg[])
{
//    int *p; // curretnly points to garbage memory location
    int *p = nullptr; // 0 help you know if the pointer is pointing to something or not
//    int *p = 0; // same as line 8 & 10
//    int *p = NULL; // same as line 8 & 9 
    
    int x = 100;
    
    p = &x; // p points to x's address
    
    cout << x << endl; // 100
    cout << &x << endl; // address of x
    cout << p << endl; // address of x
    cout << &p << endl; // address of p
    cout << *p << endl; // 100 (Value of waht the pointer p points to)
    
    p = nullptr; // Good time to not have it point to something when not in use
    
    cout << "p at the end: " << p << endl;

    return 0;
}