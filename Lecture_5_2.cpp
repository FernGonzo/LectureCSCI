#include <iostream>

using namespace std;

int main(int argc, char* arg[])
{
    int *p;
    int *q;
    int x = 5;
    
    q = &x;
    p = q;
    
    // p now points to what x
    // q points to x
    
    *q = 100; //p still points to q at this point
    
    cout << *p << endl; // 100
    cout << *q << endl; // 100
    
    return 0;
}