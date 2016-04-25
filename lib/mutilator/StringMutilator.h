//
// Created by adam on 25/04/16.
//

#ifndef BEASTFUZZ_STRINGMUTILATOR_H
#define BEASTFUZZ_STRINGMUTILATOR_H


#include "Mutilator.h"
#include <string>

class StringMutilator : public Mutilator {
public:
    StringMutilator(std::string s);
    void next();
    int depth();
    ~StringMutilator() {};
private:
    std::string butchered;
    int d = 0;
};



#endif //BEASTFUZZ_STRINGMUTILATOR_H
