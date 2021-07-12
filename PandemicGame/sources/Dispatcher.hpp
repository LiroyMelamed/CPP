#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"

namespace pandemic{

 class Dispatcher : public Player{

 public:
  Dispatcher(Board &board, City c) : Player(board, c, "Dispatcher") {}
  Player &fly_direct(City c);
 };

}