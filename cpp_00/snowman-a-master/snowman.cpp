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
        string snowman="";
        snowman.append(cloth::)
    }
}
