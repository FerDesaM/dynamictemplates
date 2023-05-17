#include <iostream>
#include <string>
#include "dynamictemplates.h"

using namespace std;
int main() {
    char arr[]= {'a','a','a','a','a','a'};
        DynamicIntegerArray <char> NewArray(arr,6);
        NewArray.pushback('b');
        NewArray.remove(1);
        NewArray.print();
    int arr2[]= {1,2,3,44,5,6};
        DynamicIntegerArray <int> NewArray2(arr2,6);
        NewArray2.insert(12,5);
    NewArray2.print();
    double arr3[]= {1.4,2.6,3.8,44.4,5.7,6.5};
        DynamicIntegerArray <double> NewArray3(arr3,6);
        NewArray3.pushback(12.6);
    NewArray3.print();
    //Nueva clase en templates
    DynamicIntegerArray<Estudiante> Lista;
        Lista.pushback(Estudiante("Alfredo"));
        Lista.pushback(Estudiante("Pedro"));
        Lista.pushback(Estudiante("Juan"));
    Lista.print();
    return 0;
}
