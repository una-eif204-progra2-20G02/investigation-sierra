//
// Created by Owner on 19/10/2020.
//

#include "ToyManager.h"

std::string ToyManager:: Quality(){
    return "Pasa control de calidad";
}

double ToyManager:: finalPrice(IToy *type, int quantity){
    double total=0;
    //create the toy
    total+= createToy(quantity);
    //decorate the toy
    total+= type->decorate(quantity);
    //pack the toy
    total+=type->pack(quantity);
    return total;
}

double ToyManager::createToy(int quantity){
    return 10*quantity;
}

