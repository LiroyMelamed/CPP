#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <set>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

namespace pandemic{

 class Board{
  map<City, int> diseases;
  static map<City, set<City> > cities;
  set<City> labs;
  set<Color> cured;

 public:
  static bool connected(City &city1, City &city2);
  static Color colors(City city);

  Board() {}
  int &operator[](City city);
  friend ostream &operator<<(ostream &out, const Board &board);
  bool is_clean();
  void remove_cures();
  void remove_stations();
  void build(City city);
  bool cureExist(City city);
  bool isLab(City city);
  void cure(Color city);
 };
}