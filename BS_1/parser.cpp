/* 
 * File:   parser.cpp
 * Author: Vinay
 * 
 * Created on April 24, 2014, 6:26 PM
 */

#include "parser.h"

parser::parser() {
}

parser::parser(const parser& orig) {
}

parser::~parser() {
}

int parser::add(int x, int y){
    return x + y;
}

int parser::sub(int x, int y){
    return x - y;
}

int parser::mul(int x, int y){
    return x * y;
}

int parser::div(int x, int y){
    return x / y;
}