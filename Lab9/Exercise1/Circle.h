#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

class Circle
{
public:
  double diameter();
  double area();
  double circumference();
  double getRadius();
  void setRadius(double r);
private:
  double m_radius;
};

#endif
