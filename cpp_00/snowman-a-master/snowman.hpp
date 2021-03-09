#pragma once
#include <iostream>
using namespace std;

namespace cloth{
    const string hats[4] = {"_===_"," ___\n.....","  _\n /_\\"," ___\n(_*_)"};
    const string nose[4] = {",",".","_"," "};
    const string eyes[4] = {".","o","O","-"};
    const string leftArm[4] = {"<","\\","/",""};
    const string rightArm[4] = {">","/","\\",""};
    const string torso[4] = {" : ","] [","> <","   "};
    const string base[4] = {" : ","\" \"","___","   "};
};

namespace ariel{
    string snowman(int num);
};