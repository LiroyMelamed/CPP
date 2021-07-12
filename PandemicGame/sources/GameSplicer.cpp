#include "GeneSplicer.hpp"

using namespace std;
using namespace pandemic;

const int SIZE = 5;

Player &GeneSplicer::discover_cure(Color c){
 if (hand.size() < SIZE || !game.isLab(city)){
  throw invalid_argument{"Illegal action"};
 }
 int counter = 1;
 for (auto a = hand.begin(); a != hand.end(); counter++){
  if (counter == SIZE){
   break;
  }
  a = hand.erase(a);
 }
 game.cure(c);
 return *this;
}