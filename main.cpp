#include "maximum.h"
#include <cstdlib>
#include <iostream>
#include <typeinfo>


using namespace std;

int main() {
    {
        float a = 3.f;
        float b = 2.f;
        cout << "Maximum de a et b : " << maximum(a, b)
                << " de type : " << typeid (maximum(a, b)).name() << endl;
    }
       {
        int  a = 32;
        int b = 25;
        cout << "Maximum de a et b : " << maximum(a, b)
                << " de type : " << typeid (maximum(a, b)).name() << endl;
    }
    return EXIT_SUCCESS;
}
