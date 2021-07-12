#pragma once
#include "Board.hpp"
#include "City.hpp"
#include <set>
using namespace std;

namespace pandemic{

 class Player{

 protected:
  Board &game;
  set<City> hand;
  City city;
  string pRole;

 public:
  Player(Board &b, City c, string r = "Player") : game(b), city(c), pRole(r) {}

  Player &take_card(City c);
  Player &drive(City c);
  virtual Player &fly_direct(City c);
  Player &fly_charter(City c);
  Player &fly_shuttle(City c);
  virtual Player &build();
  virtual Player &discover_cure(Color c);
  virtual Player &treat(City c);
  string role() { return pRole; }
  virtual void arrive(){};
 };

}