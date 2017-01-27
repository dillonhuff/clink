#include "particle_system.h"

namespace clink {

  void time_step(particle_system& sys, const double dt) {
    for (unsigned i = 0; i < sys.num_particles(); i++) {
      vec2 pi = sys.particle_position(i);
      vec2 vi = sys.particle_velocity(i);

      vec2 pnext = pi.plus( vi.times( dt ) );

      sys.set_position(i, pnext);
    }
  }

}
