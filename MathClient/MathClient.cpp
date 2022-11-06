#include <iostream>
#include "MathLibrary.h"
using namespace std;

int main()
{
    
    fibonacci_init(1, 1);
    
    do {
        cout << fibonacci_index() << ": "
            << fibonacci_current() << endl;
    } while (fibonacci_next());
  
    cout << fibonacci_index() + 1 <<
        "  Stop!" << endl;
}