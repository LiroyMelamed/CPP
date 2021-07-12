#include "Dispatcher.hpp"

using namespace std;
using namespace pandemic;

Player &Dispatcher::fly_direct(City c){
 if (city == c){
  throw invalid_argument{"Illegal action"};
 }
 if (game.isLab(city)){
  city = c;
 }
 else if (!game.isLab(city)){
  return Player::fly_direct(c);
 }
 return *this;
}