/* 
 * File:   screener.h
 * Author: Vinay
 *
 * Created on April 27, 2014, 6:26 PM
 */

#ifndef SCREENER_H
#define	SCREENER_H

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class screener {
public:
    screener();
    virtual ~screener();
    
    void readFile(string);
    void cleanFile();
    void writeFile(string);
    
private:
    vector<char> input;
    vector<char> output;
    
private:

};

#endif	/* SCREENER_H */

