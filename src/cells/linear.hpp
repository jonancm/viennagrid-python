#ifndef CELLS_LINEAR_HPP
#define CELLS_LINEAR_HPP

#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "types.hpp"

#include "../vertices/linear.hpp"

#include <boost/python.hpp>
using namespace boost::python;

////////////////////////
// Line, cartesian 1D //
////////////////////////

class LinearCartesian1D_Cell {
	LinearCartesian1D_Cell_t    *cell;
public:
	LinearCartesian1D_Cell(LinearCartesian1D_Cell_t &initial_cell);
	list get_vertices();
};

////////////////////////
// Line, cartesian 2D //
////////////////////////

class LinearCartesian2D_Cell {
	LinearCartesian2D_Cell_t    *cell;
public:
	LinearCartesian2D_Cell(LinearCartesian2D_Cell_t &initial_cell);
	list get_vertices();
};

////////////////////////
// Line, cartesian 3D //
////////////////////////

class LinearCartesian3D_Cell {
	LinearCartesian3D_Cell_t    *cell;
public:
	LinearCartesian3D_Cell(LinearCartesian3D_Cell_t &initial_cell);
	list get_vertices();
};

////////////////////////////
// Line, cylindrical (3D) //
////////////////////////////

class LinearCylindrical3D_Cell {
	LinearCylindrical3D_Cell_t    *cell;
public:
	LinearCylindrical3D_Cell(LinearCylindrical3D_Cell_t &initial_cell);
	list get_vertices();
};

//////////////////////
// Line, polar (2D) //
//////////////////////

class LinearPolar2D_Cell {
	LinearPolar2D_Cell_t    *cell;
public:
	LinearPolar2D_Cell(LinearPolar2D_Cell_t &initial_cell);
	list get_vertices();
};

//////////////////////////
// Line, spherical (3D) //
//////////////////////////

class LinearSpherical3D_Cell {
	LinearSpherical3D_Cell_t    *cell;
public:
	LinearSpherical3D_Cell(LinearSpherical3D_Cell_t &initial_cell);
	list get_vertices();
};

#endif