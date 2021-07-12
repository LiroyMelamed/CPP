#pragma once
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{

 class Researcher : public Player{

 public:
  Researcher(Board &board, City c) : Player(board, c, "Researcher") {}
  Player &discover_cure(Color c);
 };

}