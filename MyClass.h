// Declaration of MyClass

#ifndef C_COPYASSIGNMENTOP4_MYCLASS_H
#define C_COPYASSIGNMENTOP4_MYCLASS_H


class MyClass
{
private:
    int* _value;
public:
    MyClass();
    MyClass& operator=(const MyClass& oriObj);
    ~MyClass();
    int GetVal() const;
    void SetVal(const int& v);
};


#endif //C_COPYASSIGNMENTOP4_MYCLASS_H
