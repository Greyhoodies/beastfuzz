//
// Created by adam on 25/04/16.
//

#ifndef BEASTFUZZ_MUTILATORFACTORY_H
#define BEASTFUZZ_MUTILATORFACTORY_H

#include "Mutilator.h"
#include "StringMutilator.h"

#include <stdexcept>
#include <memory>

class MutilatorFactory {
public:
    enum MutilType {
        StringType
    };

    static std::unique_ptr<Mutilator> createMutil(MutilType mutilType, auto content) {
        switch (mutilType) {
            case StringType: return std::make_unique<StringMutilator>(content);
        }
        throw "invalid pizza type.";
    }
};


#endif //BEASTFUZZ_MUTILATORFACTORY_H
