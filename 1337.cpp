#include "1337.hpp"

#include <iostream>
#include <string>
#include <map>
#include <fstream>

using std::string;

string Leet::encodeText(string text) {

    string translated_text;

    for (char& c : text){

        if (alphabet.find(c) != alphabet.end()) {
            translated_text += alphabet[c];
        } else {
            translated_text += c;
        }
    }
    
    return translated_text;
}

string Leet::decodeText(string text) {
    string original_text;

    for (char& c : text)
    {
        if (reversed_alphabet.find(c) != reversed_alphabet.end()) {
            original_text += reversed_alphabet[c];
        } else {
            original_text += c;
        }
    }

    return original_text;
}


bool Leet::encodeFile(string fileName) {

    string copy_file_name = "encoded-" + fileName;

    std::ifstream file_input(fileName);
    std::ofstream file_output(copy_file_name); 

    if (!file_input.is_open())
    {
        std::cerr << "Could not open the file - '" << fileName << "'" << std::endl;
        return false;
    }
    if (!file_output.is_open())
    {
        std::cerr << "Could not open the file - '" << fileName << "'" << std::endl;
        return false;
    }


    while (!file_input.eof())
    {
        string line, encoded_line;

        getline(file_input, line);

        encoded_line = encodeText(line);

        file_output << encoded_line << std::endl;
    }


    file_input.close();
    file_output.close();

    return true;
}

bool Leet::decodeFile(string fileName)
{
    string copy_file_name = "decoded-" + fileName;

    std::ifstream file_input(fileName);
    std::ofstream file_output(copy_file_name); 

    if (!file_input.is_open())
    {
        std::cerr << "Could not open the file - '" << fileName << "'" << std::endl;
        return false;
    }
    if (!file_output.is_open())
    {
        std::cerr << "Could not open the file - '" << fileName << "'" << std::endl;
        return false;
    }


    while (!file_input.eof())
    {
        string line, decoded_line;

        getline(file_input, line);

        decoded_line = decodeText(line);

        file_output << decoded_line << std::endl;
    }


    file_input.close();
    file_output.close();

    return true;
}