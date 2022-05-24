// Title:
// Purpose:
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include <iostream>
#include "MyClass.h"

using std::cout;
using std::endl;

int main()
{
    cout << endl;
    MyClass fClass;
    MyClass sClass;
    cout << "1st val: " << fClass.GetVal() << endl;
    cout << "2nd val: " << sClass.GetVal() << endl;
    cout << endl;

    fClass.SetVal(20);
    sClass = fClass;
    cout << "1st val: " << fClass.GetVal() << endl;
    cout << "2nd val: " << sClass.GetVal() << endl;
    cout << endl;

    fClass.SetVal(40);
    cout << "1st val: " << fClass.GetVal() << endl;
    cout << "2nd val: " << sClass.GetVal() << endl;
    cout << endl;

 return 0;  
}
