/* 
 * File:   parser.h
 * Author: Vinay
 *
 * Created on April 24, 2014, 6:26 PM
 */

#ifndef PARSER_H
#define	PARSER_H

#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

class parser {
public:
    parser();
    virtual ~parser();
    
<<<<<<< HEAD
    //void read();
    int add (int x, int y);
    int sub (int x, int y);
    int mul (int x, int y);
    int div (int x, int y);
=======
    void parse(string, string);
>>>>>>> origin/HEAD
    
    void parse(string, string);
    
private:
<<<<<<< HEAD
    //vector<char> input;
    //vector<char> output;
    
=======
>>>>>>> origin/HEAD
    string expression;
    map<string, string> store;
    
    float addition(float, float);
    float subtraction(float, float);
    float multiplication(float, float);
    float division(float, float);
    
    int op(string);
    vector<string> factors(string);
    
    float result(string);
<<<<<<< HEAD

=======
    
>>>>>>> origin/HEAD
};

#endif	/* PARSER_H */

/*
 * Diego = +, -, /, * methods. return int, take two parameters. declare in header and cpp
 * Vinay = charToInt and formatting of final input file
 * 
 */