#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
 ariel::Board board;
 board.post(5, 5, Direction::Horizontal, "abcd");
 board.post(1, 5, Direction::Vertical, "xyz");

 board.show(); // shows the board in a reasonable way. For example:
               //    98:  _________
               //    99:  ____x____
               //    100: __abyd___
               //    101: ____z____
               //    102: _________
}