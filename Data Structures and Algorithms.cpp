#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    try {
        cout << abc(1, 0, 0) << endl;
    }
    catch (int e) {
        cout << "The error type is " << e << " !" << endl;
    }
    cout << "Done!\n";
}
