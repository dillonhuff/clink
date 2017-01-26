#pragma once

namespace clink {

  class particle_system {
    double particle_diam;

  public:
    particle_system(const double p_particle_diameter) :
      particle_diam(p_particle_diameter) {}

    inline double particle_diameter() const { return particle_diam; }

  };

}
