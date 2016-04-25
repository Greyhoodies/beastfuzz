//
// Created by adam on 25/04/16.
//

#include "StringMutilator.h"

StringMutilator::StringMutilator(std::string s) : butchered{s} {}


void StringMutilator::next() {
    d++;
};

int StringMutilator::depth() {
    return d;
};

