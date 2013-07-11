#include "linear.hpp"

#include "../domains/linear.hpp"
#include "../cells/types.hpp"
#include "../vertices/types.hpp"

///////////////////////////////
// LinearCartesian1D_Segment //
///////////////////////////////

LinearCartesian1D_Segment::LinearCartesian1D_Segment(LinearCartesian1D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void LinearCartesian1D_Segment::create_cell(PointCartesian1D vertex1, PointCartesian1D vertex2)
{
	/*
	viennagrid::storage::static_array<LinearCartesian1D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	viennagrid::create_element<LinearCartesian1D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<LinearCartesian1D_Cell>(LinearCartesian1D_Cell(vertex1, vertex2));
}

list LinearCartesian1D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian1D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian1D_Cell>(LinearCartesian1D_Cell(*it));
	return cells;
}

///////////////////////////////
// LinearCartesian2D_Segment //
///////////////////////////////

LinearCartesian2D_Segment::LinearCartesian2D_Segment(LinearCartesian2D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void LinearCartesian2D_Segment::create_cell(PointCartesian2D vertex1, PointCartesian2D vertex2)
{
	/*
	viennagrid::storage::static_array<LinearCartesian2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	viennagrid::create_element<LinearCartesian2D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<LinearCartesian2D_Cell>(LinearCartesian2D_Cell(vertex1, vertex2));
}

list LinearCartesian2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian2D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian2D_Cell>(LinearCartesian2D_Cell(*it));
	return cells;
}

///////////////////////////////
// LinearCartesian3D_Segment //
///////////////////////////////

LinearCartesian3D_Segment::LinearCartesian3D_Segment(LinearCartesian3D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void LinearCartesian3D_Segment::create_cell(PointCartesian3D vertex1, PointCartesian3D vertex2)
{
	/*
	viennagrid::storage::static_array<LinearCartesian3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	viennagrid::create_element<LinearCartesian3D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<LinearCartesian3D_Cell>(LinearCartesian3D_Cell(vertex1, vertex2));
}

list LinearCartesian3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCartesian3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCartesian3D_Cell>(LinearCartesian3D_Cell(*it));
	return cells;
}

/////////////////////////////////
// LinearCylindrical3D_Segment //
/////////////////////////////////

LinearCylindrical3D_Segment::LinearCylindrical3D_Segment(LinearCylindrical3D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void LinearCylindrical3D_Segment::create_cell(PointCylindrical3D vertex1, PointCylindrical3D vertex2)
{
	/*
	viennagrid::storage::static_array<LinearCylindrical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	viennagrid::create_element<LinearCylindrical3D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<LinearCylindrical3D_Cell>(LinearCylindrical3D_Cell(vertex1, vertex2));
}

list LinearCylindrical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearCylindrical3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearCylindrical3D_Cell>(LinearCylindrical3D_Cell(*it));
	return cells;
}

///////////////////////////
// LinearPolar2D_Segment //
///////////////////////////

LinearPolar2D_Segment::LinearPolar2D_Segment(LinearPolar2D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void LinearPolar2D_Segment::create_cell(PointPolar2D vertex1, PointPolar2D vertex2)
{
	/*
	viennagrid::storage::static_array<LinearPolar2D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	viennagrid::create_element<LinearPolar2D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<LinearPolar2D_Cell>(LinearPolar2D_Cell(vertex1, vertex2));
}

list LinearPolar2D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearPolar2D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearPolar2D_Cell>(LinearPolar2D_Cell(*it));
	return cells;
}

///////////////////////////////
// LinearSpherical3D_Segment //
///////////////////////////////

LinearSpherical3D_Segment::LinearSpherical3D_Segment(LinearSpherical3D_Segment_t &initial_segment) : segment(initial_segment)
{
	//segment = initial_segment;
}

void LinearSpherical3D_Segment::create_cell(PointSpherical3D vertex1, PointSpherical3D vertex2)
{
	/*
	viennagrid::storage::static_array<LinearSpherical3D_VertexHandle_t, 2> vertices;
	vertices[0] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex1.get_id());
	vertices[1] = viennagrid::elements<viennagrid::vertex_tag>(domain->get_domain()).handle_at(vertex2.get_id());
	viennagrid::create_element<LinearSpherical3D_Cell_t>(segment, vertices.begin(), vertices.end());
	*/
	
	//cells.append<LinearSpherical3D_Cell>(LinearSpherical3D_Cell(vertex1, vertex2));
}

list LinearSpherical3D_Segment::get_cells()
{
	typedef viennagrid::result_of::element_range<LinearSpherical3D_Segment_t, viennagrid::line_tag>::type    range_type;
	
	list cells;
	range_type range = viennagrid::elements(segment);
	for (range_type::iterator it = range.begin(); it != range.end(); ++it)
		cells.append<LinearSpherical3D_Cell>(LinearSpherical3D_Cell(*it));
	return cells;
}
