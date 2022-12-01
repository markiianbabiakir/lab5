#include <iostream>
#include "Candidate.h"
#include "Elections.h"
int main() {
    using namespace E;
    Elections elections;
    elections.setCandidates();
    elections.countRates();
    elections.printAll();
    elections.whoWins();




    return 0;
}
