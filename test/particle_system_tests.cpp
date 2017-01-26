#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "particle_system.h"

namespace clink {

  TEST_CASE("Basic particle model") {
    particle_system sys(4.0);
    sys.add_particle(vec2(0.0, 0.0), vec2(1.0, 2.0));

    double dt = 0.0;
    time_step(sys, dt);

    REQUIRE(sys.particle_position(0).within_eps(vec2(1.0, 2.0).times(dt), 0.00001));
  }

  

}
