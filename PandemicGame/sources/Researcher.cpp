#include "Researcher.hpp"

using namespace std;
using namespace pandemic;
const int SIZE = 5;

Player &Researcher::discover_cure(Color c){
 int counter = 0;
 for (const auto &t : hand){
  if (Board::colors(t) == c){
   counter++;
  }
 }
 if (counter < SIZE){
  throw invalid_argument{"illegal action"};
 }
 game.cure(c);
 return *this;
}