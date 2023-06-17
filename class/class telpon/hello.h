#include <iostream>

using namespace std;

class hello{
    public:
    string word;
    void inputWord(){
        cout << "Input Pesan : ";
        getline(cin,word);
    }
    void tampilWord(){
        cout << word << endl;
    }
};