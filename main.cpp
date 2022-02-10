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

    // Patikrina ar ivestas stringas nera tuscias
    do {

        cout << "> ";
        getline(cin, first_name);
       
        if (first_name.empty()) {
            cout << "Nieko neįvedėte." << endl << endl;
            continue;
        }


        // Patikrina ar ivestas stringas yra normalus zodis
        bool valid_string = true;
        for (std::size_t i{}; i < first_name.length() && valid_string; i++) {
            if (!(std::isalpha(first_name[i]) || std::isspace(first_name[i]))) {
              valid_string = false; 
            }
        }

        if (!valid_string) {
            cout << "Neįvedėte taisyklingo vardo." << endl << endl;
            continue;
        }

        break;

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


    for (int i {}; i < 5; i++) {

        cout << "*";

        if (i == 0 || i == 4) {
            for (int i{}; i < greeting.size() + 2; i++)
                cout << "*";

            cout << "*" << endl;
            continue;
        }

        if (i == 1 || i == 3) {
            for (int i{}; i < greeting.size() + 2; i++)
                cout << " ";

            cout << "*" << endl;
            continue;
        } 


        if (i == 2) {
            cout << " " + greeting << " *" << endl;
        }
    }

    return 0;
}
