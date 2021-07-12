#pragma once
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
 class OperationsExpert : public Player{
 public:
  OperationsExpert(Board &board, City c) : Player(board, c, "OperationsExpert") {}
  Player &build();
 };
}