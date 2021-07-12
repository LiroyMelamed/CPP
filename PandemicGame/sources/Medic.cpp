#include "Medic.hpp"

using namespace std;
using namespace pandemic;

Player &Medic::treat(City c){
 if (city != c || game[c] == 0){
  throw invalid_argument{"Illegal action"};
 }
 game[c] = 0;
 return *this;
}

void Medic::arrive(){
 if (game.cureExist(city)){
  game[city] = 0;
 }
}