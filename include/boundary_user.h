/*
 * MicroHH
 * Copyright (c) 2011-2015 Chiel van Heerwaarden
 * Copyright (c) 2011-2015 Thijs Heus
 * Copyright (c) 2014-2015 Bart van Stratum
 *
 * This file is part of MicroHH
 *
 * MicroHH is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * MicroHH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with MicroHH.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BOUNDARY_USER
#define BOUNDARY_USER

#include "boundary.h"

class Model;
class Input;

class Boundary_user : public Boundary
{
  public:
    Boundary_user(Model*, Input*);

    void init(Input*);

    void set_values();

  private:
    void set_bc_patch(double*, double*, double*, int, double, double, double,
                      double*, double, double); ///< Set the values for the boundary fields.

    // Patch properties.
    int    patch_dim;
    double patch_xh;
    double patch_xr;
    double patch_xi;
    double patch_facr;
    double patch_facl;
};
#endif
