#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    cout << "Įveskite savo vardą" << endl;

    string first_name;
    string last_name;

    // Patikrina ar ivestas stringas nera tuscias
    do {

        cout << "> ";
        getline(cin, first_name);
       
        if (first_name.empty()) {
            cout << "Nieko neįvedėte." << endl << endl;
        }
        else {
            break;
        }

    } while (true);


    // Patikrina ar ivestas stringas yra normalus zodis
    do {

        bool valid_string = true;
        for (std::size_t i{}; i < first_name.length() && valid_string; i++) {
            if (!(std::isalpha(first_name[i]) || std::isspace(first_name[i]))) {
              valid_string = false; 
            }
        }

        if (!valid_string) {
            cout << "Neįvedėte taisyklingo vardo." << endl << endl;
        }
        else {
            break;
        }

    } while (true);


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

    cout << endl << endl;
    cout << border1 << endl << border2 << endl << border3 << endl
        << border4 << endl << border5 << endl;

    return 0;
}
