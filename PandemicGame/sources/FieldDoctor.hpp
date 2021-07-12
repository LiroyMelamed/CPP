#pragma once
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{

 class FieldDoctor : public Player{

 public:
  FieldDoctor(Board &board, City c) : Player(board, c, "FieldDoctor") {}
  Player &treat(City c);
 };
}