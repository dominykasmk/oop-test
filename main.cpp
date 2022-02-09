#include <iostream>


using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    cout << "Įveskite savo vardą ir pavardę: ";

    string name;
    getline(cin, name);


    cout << name << endl;
    return 0;
}
