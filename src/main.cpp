#include "Parameters.h"

int main() {
    //---INSTANCIATIONS---//
    ServiceActionMoteur* hardware;
    MyBrain* brain;
    
    hardware=new Hardware();
    brain=new MyBrain();
    
    //---BINDING---//
    brain->bindServiceActionMoteur(hardware);
    
    //---CORPS PRINCIPAL---//
    brain->activate();
    
    //wait(1);
    while(1){
        hardware->stop();
        brain->step();
        wait(0.1);
    }
}
