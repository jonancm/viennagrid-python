/**
 * @file
 * @brief Class definitions for wrapped domains of triangles.
 */

#ifndef TRIANGULAR_HPP_40OZO3A3
#define TRIANGULAR_HPP_40OZO3A3

#include "types.hpp"
#include "../points/cartesian.hpp"
#include "../points/cylindrical.hpp"
#include "../points/polar.hpp"
#include "../points/spherical.hpp"

#include "../vertices/triangular.hpp"

#include <boost/python.hpp>
using namespace boost::python;

#include <string>

/**
 * Domain of lines in the cartesian 2D space.
 */
class TriangularCartesian2D_Domain {
	TriangularCartesian2D_Domain_t    domain;
public:
	TriangularCartesian2D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointCartesian2D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TriangularCartesian2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularCartesian2D_Domain_t & get_domain();
};

/**
 * Domain of lines in the cartesian 3D space.
 */
class TriangularCartesian3D_Domain {
	TriangularCartesian3D_Domain_t    domain;
public:
	TriangularCartesian3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointCartesian3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TriangularCartesian3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularCartesian3D_Domain_t & get_domain();
};

/**
 * Domain of lines in the cylindrical space.
 */
class TriangularCylindrical3D_Domain {
	TriangularCylindrical3D_Domain_t    domain;
public:
	TriangularCylindrical3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointCylindrical3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TriangularCylindrical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularCylindrical3D_Domain_t & get_domain();
};

/**
 * Domain of lines in the polar space.
 */
class TriangularPolar2D_Domain {
	TriangularPolar2D_Domain_t    domain;
public:
	TriangularPolar2D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointPolar2D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TriangularPolar2D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularPolar2D_Domain_t & get_domain();
};

/**
 * Domain of lines in the spherical space.
 */
class TriangularSpherical3D_Domain {
	TriangularSpherical3D_Domain_t    domain;
public:
	TriangularSpherical3D_Domain() {};
	
	/**
	 * Return the number of vertices contained in the domain.
	 * 
	 * @return unsigned integer
	 */
	unsigned int num_vertices();
	
	/**
	 * Create a new vertex in the domain based on the given point.
	 * 
	 * @param point Point that represents the vertex. The point object will be copied.
	 */
	void make_vertex(PointSpherical3D point);
	
	/**
	 * Return the vertex identified by the given index.
	 * 
	 * @param index Numerical vertex ID as assigned by ViennaGrid on vertex creation.
	 */
	TriangularSpherical3D_Vertex get_vertex(unsigned int index);
	
	/**
	 * Return a Python list containing all the vertices of the domain.
	 * 
	 * @return Python list
	 */
	list get_vertices();
	
	void read_netgen(std::string const &filename);
	void read_vtk(std::string const &filename);
	
	void write_opendx(std::string const &filename);
	void write_vtk(std::string const &filename);

	TriangularSpherical3D_Domain_t & get_domain();
};

#endif /* end of include guard: TRIANGULAR_HPP_40OZO3A3 */
