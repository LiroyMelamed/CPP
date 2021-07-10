#include <cstdlib>
#include <iostream>
#include <cstring>
#include <exception>
#include <string>
#include <cassert>
#include <stdexcept>
#include <array>
#include "snowman.hpp"
using namespace std;
const int head = 0;
const int nose = 1;
const int left_eye = 2;
const int right_eye = 3;
const int left_arm = 4;
const int right_arm = 5;
const int torso = 6;
const int bot = 7;

namespace ariel{

    string snowman(int in)
    {
        /*Checks if the number is in our range */
        if (in > 44444444 || in < 11111111){
            throw std::out_of_range("Not in Range");
        }
        /*New array that will store the input*/
        array<int, 8> arr = {0};
        /*We make a loop to get the last number each time*/
        for (int i = 0; i < 8; i++){
            int temp = in % 10;
            /* Checks if the last number is between 1 to 4 and then we put it in the end of the array */
            if (temp < 1 || temp > 4){
                throw std::out_of_range("Invalid Input");
            }
            arr.at(7 - i) = temp;
            in = in / 10;
        }
        
        //HHHHH
        //HHHHH
        //XU(LNR)YU
        //XD(TTT)YD
        //(BBB)

        const array<string, 5> H = {"", "      \n _===_", " ___ \n .....", "   _  \n  /_\\", "  ___  \n (_*_)"};
        const array<string, 5> N = {"", ",", ".", "_", " "};
        const array<string, 5> L = {"", ".", "o", "O", "-"};
        const array<string, 5> R = {"", ".", "o", "O", "-"};
        const array<string, 5> XU = {"", " ", "\\", " ", " "};
        const array<string, 5> XD = {"", "<", "", "/", " "};
        const array<string, 5> YU = {"", " ", "/", "", " "};
        const array<string, 5> YD = {"", ">", " ", "\\", " "};
        const array<string, 5> T = {"", " : ", "] [", "> <", "   "};
        const array<string, 5> B = {"", " : ", "\" \"", "___", "   "};
        /* Building the snowman with the array of our input and the arrays of our clothes */
        string top = H.at(arr.at(head));
        string up = XU.at(arr.at(left_arm)) + "(" + L.at(arr.at(left_eye)) + N.at(arr.at(nose)) + R.at(arr.at(right_eye)) + ")" + YU.at(arr.at(right_arm));
        string down = XD.at(arr.at(left_arm)) + "(" + T.at(arr.at(torso)) + ")" + YD.at(arr.at(right_arm));
        string buttom = " (" + B.at(arr.at(bot)) + ")";
        string out = top + "\n" + up + "\n" + down + "\n" + buttom;
        return out;
    }
};
int main(){
    std::cout << ariel::snowman(11111111) << endl;
}