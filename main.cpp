#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    cout << "Įveskite savo vardą ir pavardę: ";

    string first_name;
    string last_name;

    cin >> first_name;

    string greeting;
    first_name[0] = toupper(first_name[0]);
    if (first_name[first_name.size() - 1] == 's') {

        first_name[first_name.size() - 1] = 'i';
        greeting = "Sveikas, " + first_name + "!";
    }
    else if (first_name[first_name.size() - 1] == 'a') {

        greeting = "Sveika, " + first_name + "!";
    }
    else {

        greeting = "Sveikas, " + first_name + "!";
    }


    string border3 = "* " + greeting + " *";

    string border1(border3.size(), '*');
    string border5(border1);

    string temp(greeting.size() + 2, ' ');
    string border2 = "*" + temp + "*";
    string border4(border2);

    cout << border1 << endl << border2 << endl << border3 << endl
        << border4 << endl << border5 << endl;

    return 0;
}
