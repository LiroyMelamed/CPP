#pragma once
#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "City.hpp"

namespace pandemic{

 class GeneSplicer : public Player{

 public:
  GeneSplicer(Board &board, City c) : Player(board, c, "GeneSplicer") {}
  Player &discover_cure(Color c);
 };

}