MyBrain::MyBrain():actionMoteur(){}
void MyBrain::move(){actionMoteur->move(); return;}
void MyBrain::moveBack(){actionMoteur->moveBack(); return;}
void MyBrain::stepTurn(int dir){actionMoteur->stepTurn(dir); return;}
void MyBrain::Turn(int dir,int left,int right){actionMoteur->Turn(dir,left,right); return;}
void MyBrain::resetCounterGauche(){actionMoteur->resetCounterGauche(); return;}
void MyBrain::resetCounterDroite(){actionMoteur->resetCounterDroite(); return;}
int MyBrain::readCounterGauche(){return actionMoteur->readCounterGauche();}
int MyBrain::readCounterDroite(){return actionMoteur->readCounterDroite();}

void MyBrain::bindServiceActionMoteur(ServiceActionMoteur* service) {
    actionMoteur=service;
    return;
}
