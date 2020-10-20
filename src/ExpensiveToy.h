//
// Created by felip on 19/10/2020.
//

#ifndef INVESTIGATION_SIERRA_EXPENSIVETOY_H
#define INVESTIGATION_SIERRA_EXPENSIVETOY_H

#include<sstream>
#include <iostream>
#include "IToy.h"

class ExpensiveToy : public IToy {

public:

virtual double decorate(int quantity) override;
virtual double pack(int quantity)override;

};


#endif //INVESTIGATION_SIERRA_EXPENSIVETOY_H
