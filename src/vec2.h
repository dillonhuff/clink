#pragma once

#include <cmath>

namespace clink {

  class vec2 {
  protected:
    double xcoord, ycoord;

  public:
    vec2(const double p_x, const double p_y) :
      xcoord(p_x), ycoord(p_y) {}

    inline double x() const { return xcoord; }
    inline double y() const { return ycoord; }

    inline vec2 times(const double c) {
      return vec2(c*x(), c*y());
    }

    inline vec2 minus(const vec2 other) {
      return vec2(x() - other.x(), y() - other.y());
    }

    inline double len() const {
      return sqrt(x()*x() + y()*y());
    }

    inline bool within_eps(const vec2 other, const double eps) {
      double dist = (this->minus(other)).len();
      return (dist < eps) || (-1*dist < eps);
    }

  };

}
