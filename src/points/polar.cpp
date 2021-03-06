/*
 * Copyright (c) 2013 Jonan Cruz-Martin
 * 
 * Distributed under the terms of the MIT license, see the accompanying
 * file COPYING or http://opensource.org/licenses/MIT.
 */

#include "polar.hpp"
#include "cartesian.hpp"

PointPolar2D::PointPolar2D()
{
	point = new PointPolar_t(0, 0);
	id = -1;
}

PointPolar2D::PointPolar2D(double x, double y)
{
	point = new PointPolar_t(x, y);
	id = -1;
}

PointPolar2D::PointPolar2D(PointPolar_t *initial_point, unsigned int initial_id)
{
	point = initial_point;
	id = initial_id;
}

PointPolar2D::PointPolar2D(PointPolar_t &initial_point, unsigned int initial_id)
{
	point = new PointPolar_t(initial_point);
	id = initial_id;
}

size_t PointPolar2D::get_dimension()
{
	return 2;
}

const char * PointPolar2D::get_coord_system()
{
	return "polar";
}

PointPolar_t & PointPolar2D::get_point()
{
	return *point;
}

unsigned int PointPolar2D::get_id()
{
	return id;
}

void PointPolar2D::set_id(unsigned int new_id)
{
	id = new_id;
}

double PointPolar2D::get_coord(unsigned int index)
{
	return point->at(index);
}

void PointPolar2D::set_coord(unsigned int index, double new_value)
{
	point->at(index) = new_value;
}

list PointPolar2D::get_coord_list()
{
	list coord_list;
	coord_list.append<double>(point->at(0));
	coord_list.append<double>(point->at(1));
	return coord_list;
}

PointPolar2D & PointPolar2D::operator=(const PointPolar2D &other)
{
	*(this->point) = *(other.point);
	return *this;
}

PointPolar2D PointPolar2D::operator+(const PointPolar2D &other)
{
	PointPolar_t result = *(this->point) + *(other.point);
	return PointPolar2D(result.at(0), result.at(1));
}

PointPolar2D PointPolar2D::operator-(const PointPolar2D &other)
{
	PointPolar_t result = *(this->point) - *(other.point);
	return PointPolar2D(result.at(0), result.at(1));
}

PointPolar2D PointPolar2D::operator*(const double factor)
{
	PointPolar_t result = *(this->point) * factor;
	return PointPolar2D(result.at(0), result.at(1));
}

PointPolar2D PointPolar2D::operator/(const double factor)
{
	PointPolar_t result = *(this->point) / factor;
	return PointPolar2D(result.at(0), result.at(1));
}

PointPolar2D PointPolar2D::operator-()
{
	PointPolar_t result = -(*point);
	return PointPolar2D(result.at(0), result.at(1));
}

PointCartesian2D PointPolar2D::to_cartesian()
{
	PointCartesian2D_t new_point = get_point();
	return PointCartesian2D(new_point.at(0), new_point.at(1));
}

double PointPolar2D::norm_1()
{
	return viennagrid::norm_1(get_point());
}

double PointPolar2D::norm_2()
{
	return viennagrid::norm_2(get_point());
}

double PointPolar2D::norm_inf()
{
	return viennagrid::norm_inf(get_point());
}
