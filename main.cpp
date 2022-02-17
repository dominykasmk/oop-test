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
            if (!(std::isalpha(first_name[i]) || !std::isspace(first_name[i]))) {
              valid_string = false; 
            }
        }

        if (!valid_string) {
            cout << "Neįvedėte taisyklingo vardo." << endl << endl;
            continue;
        }

        break;

    } while (true);

    
    cout << endl << "Įveskite norimą rėmelio dydį (nuo 1 iki 10)" << endl;
    cout << "> ";
    int frame_size;

    
    while (!(cin >> frame_size) || (frame_size > 10 || frame_size < 1)) {
        
        cout << endl << "Įveskite skaičių nuo 1 iki 10" << endl;
        cout << "> ";

        cin.clear();
        cin.ignore(22, '\n');
    }
    cout << endl;


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


    for (int i {}; i < frame_size * 2 + 3; i++) {

        if (i == 0 || i == frame_size * 2 + 2) {
            for (int i{}; i < greeting.size() + 2 + frame_size * 2; i++)
                cout << "*";

            cout << endl;
            continue;
        }


        if (i == frame_size + 1) {
            string white_spaces(frame_size, ' ');
            cout << "*" << white_spaces << greeting << white_spaces << "*" << endl;

            continue;
        }

        string white_spaces(greeting.size() + frame_size * 2, ' ');
        cout << "*" << white_spaces << "*" << endl;
    }

    return 0;
}
