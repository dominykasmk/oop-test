#include <iostream>


using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    cout << "Įveskite savo vardą ir pavardę: ";

    string first_name;
    string last_name;

    cin >> first_name >> last_name;

    if (first_name[first_name.size() - 1] == 's') {
        first_name[first_name.size() - 1] = 'i';
    }


    if (last_name[last_name.size() - 1] == 's') {
        last_name[last_name.size() - 1] = 'i';
    }

    cout << first_name << ", " << last_name << endl;
    return 0;
}
