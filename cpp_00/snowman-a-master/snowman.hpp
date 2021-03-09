#pragma once
#include <iostream>
using namespace std;

namespace cloth{
    const std::array<string,4> hat {"_===_"," ___\n.....","  _\n /_\\"," ___\n(_*_)"};
    const std::array<string,4> nose {",",".","_"," "};
    const std::array<string,4> eye {".","o","O","-"};
    const std::array<string,4> leftArm {"<","\\","/",""};
    const std::array<string,4> rightArm {">","/","\\",""};
    const std::array<string,4> torso {" : ","] [","> <","   "};
    const std::array<string,4> base {" : ","\" \"","___","   "};
};

namespace ariel{
    string snowman(int num);
};