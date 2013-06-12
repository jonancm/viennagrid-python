#ifndef TRIANGULAR_HPP_40OZO3A3
#define TRIANGULAR_HPP_40OZO3A3

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"
#include "../segments/triangular.hpp"

////////////////////////////
// Triangle, cartesian 2D //
////////////////////////////

class TriangularCartesian2D_Domain {
	TriangularCartesian2D_Domain_t                domain;
	std::vector<TriangularCartesian2D_Segment>    segments;
	unsigned int                                  num_segments;
public:
	TriangularCartesian2D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointCartesian2D vertex);
	TriangularCartesian2D_Segment get_segment(unsigned int index);
};

////////////////////////////
// Triangle, cartesian 3D //
////////////////////////////

class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t                domain;
	std::vector<TriangularCartesian3D_Segment>    segments;
	unsigned int                                  num_segments;
public:
	TriangularCartesian3D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointCartesian3D vertex);
	TriangularCartesian3D_Segment get_segment(unsigned int index);
};

////////////////////////////////
// Triangle, cylindrical (3D) //
////////////////////////////////

class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t                domain;
	std::vector<TriangularCylindrical3D_Segment>    segments;
	unsigned int                                    num_segments;
public:
	TriangularCylindrical3D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointCylindrical3D vertex);
	TriangularCylindrical3D_Segment get_segment(unsigned int index);
};

//////////////////////////
// Triangle, polar (2D) //
//////////////////////////

class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t                domain;
	std::vector<TriangularPolar2D_Segment>    segments;
	unsigned int                              num_segments;
public:
	TriangularPolar2D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointPolar2D vertex);
	TriangularPolar2D_Segment get_segment(unsigned int index);
};

//////////////////////////////
// Triangle, spherical (3D) //
//////////////////////////////

class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t                domain;
	std::vector<TriangularSpherical3D_Segment>    segments;
	unsigned int                                  num_segments;
public:
	TriangularSpherical3D_Domain();
	unsigned int get_num_segments();
	void create_segments(unsigned int amount);
	void add_vertex(PointSpherical3D vertex);
	TriangularSpherical3D_Segment get_segment(unsigned int index);
};

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
