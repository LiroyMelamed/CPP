#include "Player.hpp"
using namespace std;
using namespace pandemic;
const int SIZE = 5;

Player &Player::take_card(City c){
 hand.insert(c);
 return *this;
}

Player &Player::drive(City c){
 if (city == c || !Board::connected(city, c)){
  throw invalid_argument{"Illegal action"};
 }
 city = c;
 arrive();
 return *this;
}

Player &Player::fly_direct(City c){
 if (city == c || !hand.contains(c)){
  throw invalid_argument{"Illegal action"};
 }
 hand.erase(c);
 city = c;
 arrive();
 return *this;
}

Player &Player::fly_charter(City c){
 if (city == c || !hand.contains(city)){
  throw invalid_argument{"Illegal action"};
 }
 hand.erase(city);
 city = c;
 arrive();
 return *this;
}

Player &Player::fly_shuttle(City c){
 if (city == c || !game.isLab(city) || !game.isLab(c)){
  throw invalid_argument{"Illegal action"};
 }
 city = c;
 arrive();
 return *this;
}

Player &Player::build(){
 if (!hand.contains(city)){
  throw invalid_argument{"Illegal action"};
 }
 game.build(city);
 hand.erase(city);
 return *this;
}

Player &Player::discover_cure(Color c){
 int count = 0;
 for (const auto &t : hand){
  if (Board::colors(t) == c){
   count++;
  }
 }
 if (count < SIZE || !game.isLab(city)){
  throw invalid_argument{"Illegal action"};
 }
 count = 1;
 for (auto it = hand.begin(); it != hand.end(); count++){
  if (count == SIZE){
   break;
  }
  if (Board::colors(*it) == c){
   it = hand.erase(it);
  }
  else{
   ++it;
  }
 }
 game.cure(c);
 return *this;
}

Player &Player::treat(City c){
 if (city != c || game[c] == 0){
  throw invalid_argument{"illegal action"};
 }
 if (game.cureExist(c)){
  game[c] = 0;
 }
 else{
  game[c]--;
 }
 return *this;
}