//
// Created by felip on 19/10/2020.
//
#include <iostream>
#include "ToyManager.h"
#include "CheapToy.h"
#include "ExpensiveToy.h"

int main(){


    //creacion de la produccion
    ToyManager *toyProduction= new ToyManager();

    //Juguete Barato
    CheapToy *cheapToy=new CheapToy();

    //Juguete Caro
    ExpensiveToy *expensiveToy=new ExpensiveToy();

    //cantidad
    int quantity=30;

    std::cout<<"JUGUETE BARATO-> "<<toyProduction->finalPrice(cheapToy,quantity) << std::endl;
    std::cout<<"JUGUETE CARO  -> "<<toyProduction->finalPrice(expensiveToy,quantity);

}

