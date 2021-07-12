#include "Virologist.hpp"

using namespace std;
using namespace pandemic;

Player &Virologist::treat(City c){
 if (city != c){
  if (!hand.contains(c)){
   throw invalid_argument{"illegal action"};
  }
  hand.erase(c);
 }
 else if (game[c] == 0){
  throw invalid_argument{"illegal action"};
 }
 else if (game.cureExist(c)){
  game[c] = 0;
  return *this;
 }
 game[c]--;
 return *this;
}