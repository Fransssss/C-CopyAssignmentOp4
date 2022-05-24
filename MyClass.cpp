// Implementation of MyClass

#include "MyClass.h"
#include <iostream>

using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout << "[Default Constructor]" << endl;
    _value = new int;
    *_value = 0;
}

MyClass& MyClass::operator=(const MyClass &oriObj)
        {
            cout << "[Copy Assignment Operator= ]" << endl;
            if(this != &oriObj)         // if object of each fir
            {
                delete _value;
                _value = new int;
                *_value = *(oriObj._value);
            }
            return *this;                       // return the value that's assigned
        }

void MyClass::SetVal(const int &v)
{
    cout << "[Set a value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}

MyClass::~MyClass()
{
    cout << "[Destructor]" << endl;
    delete _value;
}