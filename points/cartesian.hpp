#ifndef CARTESIAN_HPP_40UV2UQE
#define CARTESIAN_HPP_40UV2UQE

#include "types.hpp"

class PointCartesian2D {
	PointCartesian2D_t point;
public:
	PointCartesian2D();
	PointCartesian2D(double x, double y);
	PointCartesian2D(PointCartesian2D_t initial_point);
	size_t get_dimension();
	const char * get_coord_system();
	PointCartesian2D_t & get_point();
	bool operator==(const PointCartesian2D &other);
};

class PointCartesian3D {
	PointCartesian3D_t point;
public:
	PointCartesian3D();
	PointCartesian3D(double x, double y, double z);
	PointCartesian3D(PointCartesian3D_t initial_point);
	size_t get_dimension();
	const char * get_coord_system();
	PointCartesian3D_t & get_point();
	bool operator==(const PointCartesian3D &other);
};

#endif /* end of include guard: CARTESIAN_HPP_40UV2UQE */
