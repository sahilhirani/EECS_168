#include <iostream>
#include "Circle.h"

int main()
{
  Circle myCircle;
  double radius = 0;
  std::cout << "Input a Radius: ";
  std::cin >> radius;
  myCircle.setRadius(radius);
  std::cout << "My circle has a radius of " << myCircle.getRadius() <<"\n";
  std::cout << "The area is: ";
  std::cout.setf(std::ios::fixed);
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(6);
  std::cout << myCircle.area() << "\n";
  std::cout << "The circumfrence is: ";
  std::cout << myCircle.circumference() << "\n";
  std::cout.setf(std::ios::fixed);
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(2);
  std::cout << "The diametr is: " << myCircle.diameter() << "\n";
  return(0);
}
