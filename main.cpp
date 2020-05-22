#include <iostream>
#include<fstream>
#include <vector>

using namespace std;

int main() {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string header = "<!DOCTYPE html>\n"
                    "<html lang=\"en\">\n"
                    "<head>\n"
                    "    <meta charset=\"UTF-8\">\n"
                    "    <title>Chuei-Zuo Chen - Dictionary</title>\n"
                    "</head>\n";
    string bodyBegin = "<body bgcolor=\"#00bfff\">\n"
                       "    Student Name: Chuei-Zuo Chen<br>\n"
                       "    Student ID: 10511047<br>\n"
                       "    Course: Object-oriented Programming with C++<br>\n"
                       "    <br>\n"
                       "    <br>\n"
                       "    Alphabet<br>\n"
                       "    <br>\n";
    string bodyEnd = "</body>\n"
                     "</html>\n";

    string html = header + bodyBegin;
    string command = "mkdir -p ../htmldoc";
    system(command.c_str());

    //write root index.html
    ofstream file("../htmldoc/index.html",ios::trunc);
    file << html << endl;
    for (int i = 0; i < alphabet.length(); ++i) {
        file << "<a href=\'"<<alphabet[i]<<"\'>"<<alphabet[i]<<"</a> ";

    }
    file << bodyEnd << endl;
    file.close();

    //





    return 0;
}
