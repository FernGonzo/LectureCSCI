#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main(int argc, char* arg[])
{
    Distance *ptr;
    Distance d;
    ptr = &d;
    
    cout << "Enter Feet: ";
    cin >> d.feet;
     cout << "Enter Inch: ";
    cin >> d.inch;
    
    cout << "Displaying Information" << endl;
    cout << "Distance = " << ptr->feet << " Feet " << ptr->inch << " Inches" << endl;
    
    return 0;
}