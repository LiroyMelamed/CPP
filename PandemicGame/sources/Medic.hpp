#pragma once

#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{

 class Medic : public Player{

 public:
  Medic(Board &board, City c) : Player(board, c, "Medic") {}
  Player &treat(City c) override;
  void arrive() override;
 };

}