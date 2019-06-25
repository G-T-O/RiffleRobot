#include "Parameters.h"
#include "BrainCanevas.h"

int MAXPASDEJEU=900;

int pasDeJeuCourrant;

void MyBrain::activate() {
    pasDeJeuCourrant=0;
    //wait(1);
    //actionMoteur->initHeadingDeg();
    return;
}

void MyBrain::step() {

   // if (pasDeJeuCourrant>MAXPASDEJEU) {return;}
    pasDeJeuCourrant++;


    //SOME RANDOM STUFF

    if (pasDeJeuCourrant>160){
        return;
    }

    else if (pasDeJeuCourrant>62 && pasDeJeuCourrant<=160){
        stepTurn(RIGHT);
        //stepTurn(LEFT);
        //move();
        return;
    }

    else if (pasDeJeuCourrant>50 && pasDeJeuCourrant<=62 ){
            Turn(RIGHT,400,0);
            return;
        }

    // avance
    else if (pasDeJeuCourrant<=50){
            move();
            return;
        }


    return;
}
