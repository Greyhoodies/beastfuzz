//
// Created by Adam on 25/04/16.
//

#ifndef BEASTFUZZ_MUTILATOR_H
#define BEASTFUZZ_MUTILATOR_H
class Mutilator {
    public:
        Mutilator() {};
        virtual void next() = 0;
        virtual int depth() = 0;
        ~Mutilator() { };
    };


#endif //BEASTFUZZ_MUTILATOR_H

