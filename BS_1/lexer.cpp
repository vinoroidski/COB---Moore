/* 
 * File:   lexer.cpp
 * Author: Vinay
 * 
 * Created on April 24, 2014, 4:19 PM
 */

#include "lexer.h"

lexer::lexer() {
}

lexer::lexer(const lexer& orig) {
}

lexer::~lexer() {
}

void lexer::readFile(string filePath) {

    char letter;
    ifstream myFile;

    myFile.open(filePath.c_str());

    while (!myFile.eof()) {

        myFile >> noskipws >> letter;

        if (!myFile.eof())
            input.push_back(letter);

    }

    myFile.close();

}

void lexer::cleanFile() {

    for (vector<char>::iterator it = input.begin(); it != input.end(); it++) {

        if (*it == '/') {

            it++;

            if (*it == '/') {

                it++;

                for (vector<char>::iterator it2 = it; it2 != input.end(); it2++) {

                    // NEED FIX: what if there is only one line!

                    if (*it2 == '\n') {

                        it = it2 + 1;
                        break;

                    }

                }

            } else if (*it == '*') {

                it++;

                for (vector<char>::iterator it3 = it; it3 != input.end(); it3++) {

                    if (*it3 == '*') {

                        it3++;

                        if (*it3 == '/') {

                            it = it3 + 1;
                            it3 = input.end();
                            break;

                        }

                    }

                }

            } else {

                output.push_back('/');
                output.push_back(*it);

            }

        } else if (*it == ' ') {

            for (vector<char>::iterator it4 = it; it4 != input.end(); it4++) {

                if (*it4 != ' ') {

                    it = it4 - 1;
                    break;

                }

            }

        } else if (*it == '\r') {

            for (vector<char>::iterator it5 = it; it5 != input.end(); it5++) {

                if (*it5 != '\r') {

                    it = it5 - 1;
                    break;

                }

            }

        } else if (*it == '\n') {

            for (vector<char>::iterator it6 = it; it6 != input.end(); it6++) {

                if (*it6 != '\n') {

                    it = it6 - 1;
                    break;

                }

            }

        } else {

            output.push_back(*it);

        }

    }

}

void lexer::writeFile(string filePath) {

    if (output.size() > 0) {

        ofstream myFile;

        myFile.open(filePath.c_str());

        for (vector<char>::iterator it = output.begin(); it != output.end(); it++) {

            myFile << *it;

        }

        myFile.close();

    }

}