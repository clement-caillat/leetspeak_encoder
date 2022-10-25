// LEET Translator

#include <iostream>
#include "1337.hpp"
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv) {

    string verb = argv[1];
    string option = argv[2];
    string value = argv[3];

    Leet translator;

    if (option == "-t") {
        if (verb == "encode") {
            cout << translator.encodeText(value) << endl;
        } else if (verb == "decode") {
            cout << translator.decodeText(value) << endl;
        }
    } else if (option == "-f") {
        bool status;

        if (verb == "encode") {
            status = translator.encodeFile(value);
        } else if (verb == "decode") {
            status = translator.decodeFile(value);
        }


        if (status) {
            cout << "Le fichier " << verb << " a bien ete traite." << endl;
        } else {
            cout << "Le fichier " << verb << " n'a pas ete traite." << endl;
        }

    } else {
        cout << "Invalid flag" << endl;
    }
}