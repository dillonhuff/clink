#pragma once

#include <vector>

#include "vec2.h"

namespace clink {

  class particle_system {
    double particle_diam;

    std::vector<vec2> positions;
    std::vector<vec2> velocities;

  public:
    particle_system(const double p_particle_diameter) :
      particle_diam(p_particle_diameter) {}

    inline double particle_diameter() const { return particle_diam; }

    inline void add_particle(const vec2 position,
			     const vec2 velocity) {
      positions.push_back(position);
      velocities.push_back(velocity);
    }

    inline vec2 particle_position(const unsigned i) { return positions[i]; }
    inline vec2 particle_velocity(const unsigned i) { return velocities[i]; }

  };

  void time_step(particle_system& s, const double dt);

}
