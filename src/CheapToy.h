//
// Created by felip on 19/10/2020.
//

#ifndef INVESTIGATION_SIERRA_CHEAPTOY_H
#define INVESTIGATION_SIERRA_CHEAPTOY_H

#include "ExpensiveToy.h"

#include <sstream>
#include <iostream>
#include "IToy.h"

class CheapToy: public IToy {

public:

    virtual double decorate(int quantity) override;
    virtual double pack(int quantity)override;

};



#endif //INVESTIGATION_SIERRA_CHEAPTOY_H
