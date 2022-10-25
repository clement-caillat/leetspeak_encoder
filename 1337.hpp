#ifndef _LEET_
#define _LEET_
    #include <string>
    #include <map>

    class Leet {
        private:
            std::map<char, char> alphabet = {
                { 'a', '4' },
                { 'b', '8' },
                { 'e', '3' },
                { 'g', '6' },
                { 'l', '1' },
                { 'o', '0' },
                { 's', '5' },
                { 't', '7' },
                { 'A', '4' },
                { 'B', '8' },
                { 'E', '3' },
                { 'G', '6' },
                { 'L', '1' },
                { 'O', '0' },
                { 'S', '5' },
                { 'T', '7' },
            };
            std::map<char, char> reversed_alphabet = {
                { '4', 'a' },
                { '8', 'b' },
                { '3', 'e' },
                { '6', 'g' },
                { '1', 'l' },
                { '0', 'o' },
                { '5', 's' },
                { '7', 't' }
            };
        
        public:
            std::string encodeText(std::string text);
            std::string decodeText(std::string text);

            bool encodeFile(std::string fileName);
            bool decodeFile(std::string fileName);
    };
#endif