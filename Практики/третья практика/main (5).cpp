#include <iostream>
#include <string>
#include <fstream>

int main() {
    setlocale(LC_ALL, "Rus");
    std::ifstream in("input.txt", std::ios::in);
    std::string glas = "ףוûאמÿט";
    std::ofstream out("output.txt", std::ios::out);

    while (!in.eof()) {
        std::string text;
        std::string l;
        in >> text;
        for (int i = 0; i < text.length() - 1; i++) {
            if ((unsigned char)text[i] == (unsigned char)text[i + 1]) {
                for (int j = 0; j < glas.length(); j++) {
                    if ((unsigned char)text[i] == (unsigned char)glas[j]) {
                        l = text[i];
                        text[i] -= 32;
                        text[i + 1] -= 32;
                    }
                }
            }
        }  
        out << text + " ";
        if (l != "") {
            out << "(" + l + ")" + " ";
        }
    }
}
