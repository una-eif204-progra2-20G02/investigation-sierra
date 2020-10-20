//
// Created by Owner on 19/10/2020.
//

#ifndef INVESTIGATION_SIERRA_TOYMANAGER_H
#define INVESTIGATION_SIERRA_TOYMANAGER_H

#include <sstream>
#include <iostream>
#include "IToy.h"

class ToyManager{

public:
    std::string Quality();
    double createToy(int quantity);
    double finalPrice(IToy *type, int quantity);

};


#endif //INVESTIGATION_SIERRA_TOYMANAGER_H
