#include <stdlib.h>
#include <iostream>
#include "snowman.hpp"

namespace ariel{
    string snowman(int num){
        string number = to_string(num);

        const std::array<string,4> hats {"_===_"," ___\n.....","  _\n /_\\"," ___\n(_*_)"};
        const std::array<string,4> nose {",",".","_"," "};
        const std::array<string,4> eyes {".","o","O","-"};
        const std::array<string,4> leftArm {"<","\\","/",""};
        const std::array<string,4> rightArm {">","/","\\",""};
        const std::array<string,4> belly {" : ","] [","> <","   "};
        const std::array<string,4> base {" : ","\" \"","___","   "};

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
        snowman.insert(hats[number[H]);
        snowman.insert("\n");
        snowman.insert(leftArm[number[X]]);
        snowman.insert("(");
        snowman.insert(eyes[number[L]);
        snowman.insert(nose[number[N]);
        snowman.insert(eyes[number[R]);
        snowman.insert(")");
        snowman.insert(rightArm[number[Y]]);
        snowman.insert("\n");
        snowman.insert(leftArm[number[X]]);
        snowman.insert("(");
        snowman.insert(belly[number[T]]);
        snowman.insert(")");
        snowman.insert(rightArm[number[Y]]);
        snowman.insert(Base[number[B]]);

        return snowman;



    }
}
