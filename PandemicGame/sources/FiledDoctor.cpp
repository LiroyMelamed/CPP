#include "FieldDoctor.hpp"

using namespace std;
using namespace pandemic;

Player &FieldDoctor::treat(City c){
 if (game[c] == 0 || (city != c && !Board::connected(city, c))){
  throw invalid_argument{"Illegal action"};
 }
 if (!game.cureExist(c)){
  game[c]--;
 }
 else{
  game[c] = 0;
 }
 return *this;
}