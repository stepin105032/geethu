#include <iostream>
#include "blooddb.h"


using namespace std;

int main()
{
    std::list<Bloodgrp>grps;
    blooddb A;
    A.read_data(grps);


    return 0;
}
