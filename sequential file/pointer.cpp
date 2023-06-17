#include <iostream>
 
using namespace std;
 
int main()
{
    int var1 = 100;
    int var2 = 200;
    int var3 = 300;
    
    cout << "Var1 : " << var1 << endl;
    cout << "Var2 : " << var2 << endl;
    cout << "Var3 : " << var3 << endl;
    
    cout << endl;
    
    cout << "&Var1 : " << &var1 << endl;
    cout << "&Var2 : " << &var2 << endl;
    cout << "&Var3 : " << &var3 << endl;
    
    cout << endl;

    cout << "Soal beda" << endl;
    cout << "==============================================" << endl;

    int varA = 100;
    int &varB = varA;
    int &varC = varA;
    
    cout << varA << endl;
    cout << varB << endl;
    cout << varC << endl;
    
    cout << endl;
    
    cout << &varA << endl;
    cout << &varB << endl;
    cout << &varC << endl;

  return 0;
}