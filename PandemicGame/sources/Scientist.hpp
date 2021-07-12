#pragma once
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
 class Scientist : public Player{
  int num;

 public:
  Scientist(Board &board, City c, int number) : Player(board, c, "Scientist"), num(number) {}
  Player &discover_cure(Color c);
 };
}