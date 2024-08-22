#include <iostream>
#include <string>
#include <unordered_map>

void printArt(char ch) {
    std::unordered_map<char, std::string> asciiArt = {
        {'0', "  0000  \n 0    0 \n0      0\n0      0\n0      0\n 0    0 \n  0000  \n"},
        {'1', "   11   \n  111   \n   11   \n   11   \n   11   \n   11   \n  1111  \n"},
        {'2', "  2222  \n 2    2 \n      2 \n     2  \n    2   \n   2    \n 222222 \n"},
        {'3', "  3333  \n 3    3 \n      3 \n   333  \n      3 \n 3    3 \n  3333  \n"},
        {'4', "     44 \n    444 \n   4 4  \n  4  4  \n 444444 \n     4  \n     4  \n"},
        {'5', " 555555 \n 5      \n 5      \n  5555  \n      5 \n 5    5 \n  5555  \n"},
        {'6', "  6666  \n 6    6 \n 6      \n 66666  \n 6    6 \n 6    6 \n  6666  \n"},
        {'7', " 777777 \n     7  \n    7   \n   7    \n  7     \n 7      \n 7      \n"},
        {'8', "  8888  \n 8    8 \n 8    8 \n  8888  \n 8    8 \n 8    8 \n  8888  \n"},
        {'9', "  9999  \n 9    9 \n 9    9 \n  99999 \n      9 \n 9    9 \n  9999  \n"},

        // if you want to add more detailed characters as needed; be my guest
        
    };

    if (asciiArt.find(ch) != asciiArt.end()) {
        std::string art = asciiArt[ch];
        for (char& c : art) {
            if (c != ' ' && c != '\n') {
                c = ch;
            }
        }
        std::cout << art;
    } else {
        std::cout << "Character not supported!" << std::endl;
    }
}

int main() {
    char ch;
    std::cout << "Enter a single digit: ";
    std::cin >> ch;
    printArt(ch);


    system("pause");

    return 0;
}
