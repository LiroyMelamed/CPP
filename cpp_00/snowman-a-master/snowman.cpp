#include <stdlib.h>
#include <iostream>
#include "snowman.hpp"

namespace ariel{
    string snowman(int num){
        string number = to_string(num);
        if(number.length() != 8)throw invalid_argument("Illegal Input!");
        if(num<11111111 || num>44444444)throw std::out_of_range("Not in range!");
        for (int i = number.length(); i >= 0; i--){
            if (number[i]>4 || number[i]<1) throw invalid_argument("Illegal Input!");
        }
        const int H = 0; //Hat
        const int N = 1; //Nose
        const int L = 2; //Left eye
        const int R = 3; //Right eye
        const int X = 4; //Left arm
        const int Y = 5; //Right arm
        const int T = 6; //Torso
        const int B = 7; //Base
        string snowman="";
        snowman.insert(cloth::hats[number[H]);
        snowman.insert("\n");
        snowman.insert(cloth::leftArm[number[X]]);
        snowman.insert("(");
        snowman.insert(cloth::eyes[number[L]);
        snowman.insert(cloth::nose[number[N]);
        snowman.insert(cloth::eyes[number[R]);
        snowman.insert(")");
        snowman.insert(cloth::rightArm[number[Y]]);
        snowman.insert("\n");
        answer.append(clothing::leftArm[number[X]]);
        snowman.insert("(");
        answer.append(clothing::belly[number[T]]);
        snowman.insert(")");
        snowman.insert(cloth::rightArm[number[Y]]);
        answer.append(clothing::Base[number[B]]);

        return snowman;



    }
}
