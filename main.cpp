#include <iostream>
#include "lib/mutilator/StringMutilator.h"
#include "lib/mutilator/MutilatorFactory.h"
#include <string>
using namespace std;

int main() {
    string content = "hi";
    MutilatorFactory n;

    unique_ptr<Mutilator> x = n.createMutil(MutilatorFactory::StringType, content);


    x -> next();
    x -> next();
    x -> next();


    cout << x -> depth() << endl;
    return 0;
}