#include "Board.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

namespace ariel{
  typedef unsigned int uint;
  typedef unsigned long ulong;
  /**
 * this method is a setter for a givem position, 
 * Its not a reference due to the fact that i dont wish accidently creating an empty space,
 * hence i must put a character in each and every place i create.
 * */
  void Board::setCharAt(uint x, uint y, char c){
    board[x][y] = c;
  }

  /**
 * this method returns the actuall character on x,y but if its empty it will return "_";
 * */
  char Board::charAt(uint x, uint y){
    return board[x][y];
  }

  void Board::post(uint row, uint col, Direction direction, string message){
    uint length = message.length();
    if (length == 0) {
      // do nothing
      return;
    }
    if (direction == Direction::Horizontal){
      for (uint i = 0; i < length; i++){
        uint x = col + i;
        //charAt(x, row) = message.at(i);
        setCharAt(x, row, message.at(i));
      }
    }
    else{
      for (uint i = 0; i < length; i++){
        uint y = row + i;
        setCharAt(col, y, message.at(i));
        //charAt(column, y) = message.at(i);
      }
    }
  }

  string Board::read(uint row, uint col, Direction direction, uint length){
    if (length == 0){
      return "";
    }
    // if (length == 0) {
    //     throw invalid_argument{"Cannot read message of length : 0"};
    // }

    string message;
    if (direction == Direction::Horizontal){
      for (uint i = 0; i < length; i++){
        uint x = col + i;
        message += charAt(x, row);
      }
    }
    else{
      for (uint i = 0; i < length; i++){
        uint y = row + i;
        message += charAt(col, y);
      }
    }
    return message;
  }

  void Board::show(){
    for (uint row = 0; row < 10; row++)
    {
      for (uint col = 0; col < 10; col++)
      {
        this->board[row][col] << "_ ";
      }
    }
    for (uint row = 0; row < 10; row++){
      for (uint col = 0; col < 10; col++){
        cout << this->board[row][col] << " ";
      }
      cout << "\n";
    }
  }

} // namespace ariel