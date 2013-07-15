#ifndef CELLS_TETRAHEDRAL_HPP
#define CELLS_TETRAHEDRAL_HPP

#include "types.hpp"

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include <boost/python.hpp>
using namespace boost::python;

///////////////////////////////
// Tetrahedral, cartesian 3D //
///////////////////////////////

class TetrahedralCartesian3D_Cell {
	TetrahedralCartesian3D_Cell_t *cell;
public:
	TetrahedralCartesian3D_Cell(TetrahedralCartesian3D_Cell_t &initial_cell);
	list get_vertices();
};

///////////////////////////////////
// Tetrahedral, cylindrical (3D) //
///////////////////////////////////

class TetrahedralCylindrical3D_Cell {
	TetrahedralCylindrical3D_Cell_t *cell;
public:
	TetrahedralCylindrical3D_Cell(TetrahedralCylindrical3D_Cell_t &initial_cell);
	list get_vertices();
};

/////////////////////////////////
// Tetrahedral, spherical (3D) //
/////////////////////////////////

class TetrahedralSpherical3D_Cell {
	TetrahedralSpherical3D_Cell_t *cell;
public:
	TetrahedralSpherical3D_Cell(TetrahedralSpherical3D_Cell_t &initial_cell);
	list get_vertices();
};

#endif
