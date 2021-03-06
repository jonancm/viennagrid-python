/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "triangular.hpp"

/********************
 * VERTEX ACCESSORS *
 ********************/

///////////////////////////////////////
// TriangularCartesian2D_Vertex_Accessor //
///////////////////////////////////////

TriangularCartesian2D_Vertex_Accessor::TriangularCartesian2D_Vertex_Accessor()
{
	accessor = new TriangularCartesian2D_Vertex_Accessor_t(container);
}

TriangularCartesian2D_Vertex_Accessor::~TriangularCartesian2D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian2D_Vertex_Accessor::get_value(TriangularCartesian2D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TriangularCartesian2D_Vertex_Accessor::set_value(TriangularCartesian2D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TriangularCartesian2D_Vertex_Accessor_t & TriangularCartesian2D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// TriangularCartesian3D_Vertex_Accessor //
///////////////////////////////////////

TriangularCartesian3D_Vertex_Accessor::TriangularCartesian3D_Vertex_Accessor()
{
	accessor = new TriangularCartesian3D_Vertex_Accessor_t(container);
}

TriangularCartesian3D_Vertex_Accessor::~TriangularCartesian3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian3D_Vertex_Accessor::get_value(TriangularCartesian3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TriangularCartesian3D_Vertex_Accessor::set_value(TriangularCartesian3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TriangularCartesian3D_Vertex_Accessor_t & TriangularCartesian3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////////
// TriangularCylindrical3D_Vertex_Accessor //
/////////////////////////////////////////

TriangularCylindrical3D_Vertex_Accessor::TriangularCylindrical3D_Vertex_Accessor()
{
	accessor = new TriangularCylindrical3D_Vertex_Accessor_t(container);
}

TriangularCylindrical3D_Vertex_Accessor::~TriangularCylindrical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCylindrical3D_Vertex_Accessor::get_value(TriangularCylindrical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TriangularCylindrical3D_Vertex_Accessor::set_value(TriangularCylindrical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TriangularCylindrical3D_Vertex_Accessor_t & TriangularCylindrical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////
// TriangularPolar2D_Vertex_Accessor //
///////////////////////////////////

TriangularPolar2D_Vertex_Accessor::TriangularPolar2D_Vertex_Accessor()
{
	accessor = new TriangularPolar2D_Vertex_Accessor_t(container);
}

TriangularPolar2D_Vertex_Accessor::~TriangularPolar2D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularPolar2D_Vertex_Accessor::get_value(TriangularPolar2D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TriangularPolar2D_Vertex_Accessor::set_value(TriangularPolar2D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TriangularPolar2D_Vertex_Accessor_t & TriangularPolar2D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// TriangularSpherical3D_Vertex_Accessor //
///////////////////////////////////////

TriangularSpherical3D_Vertex_Accessor::TriangularSpherical3D_Vertex_Accessor()
{
	accessor = new TriangularSpherical3D_Vertex_Accessor_t(container);
}

TriangularSpherical3D_Vertex_Accessor::~TriangularSpherical3D_Vertex_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularSpherical3D_Vertex_Accessor::get_value(TriangularSpherical3D_Vertex &vertex)
{
	return (*accessor)(vertex.get_vertex());
}

void TriangularSpherical3D_Vertex_Accessor::set_value(TriangularSpherical3D_Vertex &vertex, double new_value)
{
	(*accessor)(vertex.get_vertex()) = new_value;
}

TriangularSpherical3D_Vertex_Accessor_t & TriangularSpherical3D_Vertex_Accessor::get_accessor()
{
	return *accessor;
}

/******************
 * CELL ACCESSORS *
 ******************/

/////////////////////////////////////
// TriangularCartesian2D_Cell_Accessor //
/////////////////////////////////////

TriangularCartesian2D_Cell_Accessor::TriangularCartesian2D_Cell_Accessor()
{
	accessor = new TriangularCartesian2D_Cell_Accessor_t(container);
}

TriangularCartesian2D_Cell_Accessor::~TriangularCartesian2D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian2D_Cell_Accessor::get_value(TriangularCartesian2D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TriangularCartesian2D_Cell_Accessor::set_value(TriangularCartesian2D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TriangularCartesian2D_Cell_Accessor_t & TriangularCartesian2D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// TriangularCartesian3D_Cell_Accessor //
/////////////////////////////////////

TriangularCartesian3D_Cell_Accessor::TriangularCartesian3D_Cell_Accessor()
{
	accessor = new TriangularCartesian3D_Cell_Accessor_t(container);
}

TriangularCartesian3D_Cell_Accessor::~TriangularCartesian3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCartesian3D_Cell_Accessor::get_value(TriangularCartesian3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TriangularCartesian3D_Cell_Accessor::set_value(TriangularCartesian3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TriangularCartesian3D_Cell_Accessor_t & TriangularCartesian3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

///////////////////////////////////////
// TriangularCylindrical3D_Cell_Accessor //
///////////////////////////////////////

TriangularCylindrical3D_Cell_Accessor::TriangularCylindrical3D_Cell_Accessor()
{
	accessor = new TriangularCylindrical3D_Cell_Accessor_t(container);
}

TriangularCylindrical3D_Cell_Accessor::~TriangularCylindrical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularCylindrical3D_Cell_Accessor::get_value(TriangularCylindrical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TriangularCylindrical3D_Cell_Accessor::set_value(TriangularCylindrical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TriangularCylindrical3D_Cell_Accessor_t & TriangularCylindrical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////
// TriangularPolar2D_Cell_Accessor //
/////////////////////////////////

TriangularPolar2D_Cell_Accessor::TriangularPolar2D_Cell_Accessor()
{
	accessor = new TriangularPolar2D_Cell_Accessor_t(container);
}

TriangularPolar2D_Cell_Accessor::~TriangularPolar2D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularPolar2D_Cell_Accessor::get_value(TriangularPolar2D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TriangularPolar2D_Cell_Accessor::set_value(TriangularPolar2D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TriangularPolar2D_Cell_Accessor_t & TriangularPolar2D_Cell_Accessor::get_accessor()
{
	return *accessor;
}

/////////////////////////////////////
// TriangularSpherical3D_Cell_Accessor //
/////////////////////////////////////

TriangularSpherical3D_Cell_Accessor::TriangularSpherical3D_Cell_Accessor()
{
	accessor = new TriangularSpherical3D_Cell_Accessor_t(container);
}

TriangularSpherical3D_Cell_Accessor::~TriangularSpherical3D_Cell_Accessor()
{
	delete accessor;
	// TODO: Is this needed or does Python handle it with the garbage collector as in the other classes?
}

double TriangularSpherical3D_Cell_Accessor::get_value(TriangularSpherical3D_Cell &cell)
{
	return (*accessor)(cell.get_cell());
}

void TriangularSpherical3D_Cell_Accessor::set_value(TriangularSpherical3D_Cell &cell, double new_value)
{
	(*accessor)(cell.get_cell()) = new_value;
}

TriangularSpherical3D_Cell_Accessor_t & TriangularSpherical3D_Cell_Accessor::get_accessor()
{
	return *accessor;
}
