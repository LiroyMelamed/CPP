#include "Scientist.hpp"

using namespace std;
using namespace pandemic;

Player &Scientist::discover_cure(Color c){
 int counter = 0;
 for (const auto &a : hand){
  if (Board::colors(a) == c){
   counter++;
  }
 }
 if (!game.isLab(city) || counter < num){
  throw invalid_argument{"illegal action"};
 }
 game.cure(c);
 return *this;
}