#include "read_vtk.hpp"

#include "../accessors/linear.hpp"
#include "../accessors/triangular.hpp"
#include "../accessors/quadrilateral.hpp"
#include "../accessors/tetrahedral.hpp"

#include "../fields/linear.hpp"
#include "../fields/triangular.hpp"
#include "../fields/quadrilateral.hpp"
#include "../fields/tetrahedral.hpp"

#include <viennagrid/io/vtk_reader.hpp>

////////////
// LINEAR //
////////////

void LinearCartesian1D_Domain_read_vtk(std::string const &filename,
                                       LinearCartesian1D_Domain *domain,
                                       LinearCartesian1D_Segmentation *segmentation,
                                       dict accessors)
{
	viennagrid::io::vtk_reader<LinearCartesian1D_Domain_t, LinearCartesian1D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCartesian1D_Vertex_Accessor")
		{
			LinearCartesian1D_Vertex_Accessor my_accessor = extract<LinearCartesian1D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian1D_Cell_Accessor")
		{
			LinearCartesian1D_Cell_Accessor my_accessor = extract<LinearCartesian1D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian1D_Vertex_Field")
		{
			LinearCartesian1D_Vertex_Field my_field = extract<LinearCartesian1D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian1D_Cell_Field")
		{
			LinearCartesian1D_Cell_Field my_field = extract<LinearCartesian1D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearCartesian2D_Domain_read_vtk(std::string const &filename,
                                       LinearCartesian2D_Domain *domain,
                                       LinearCartesian2D_Segmentation *segmentation,
                                       dict accessors)
{
	viennagrid::io::vtk_reader<LinearCartesian2D_Domain_t, LinearCartesian2D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCartesian2D_Vertex_Accessor")
		{
			LinearCartesian2D_Vertex_Accessor my_accessor = extract<LinearCartesian2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian2D_Cell_Accessor")
		{
			LinearCartesian2D_Cell_Accessor my_accessor = extract<LinearCartesian2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian2D_Vertex_Field")
		{
			LinearCartesian2D_Vertex_Field my_field = extract<LinearCartesian2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian2D_Cell_Field")
		{
			LinearCartesian2D_Cell_Field my_field = extract<LinearCartesian2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearCartesian3D_Domain_read_vtk(std::string const &filename,
                                       LinearCartesian3D_Domain *domain,
                                       LinearCartesian3D_Segmentation *segmentation,
                                       dict accessors)
{
	viennagrid::io::vtk_reader<LinearCartesian3D_Domain_t, LinearCartesian3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCartesian3D_Vertex_Accessor")
		{
			LinearCartesian3D_Vertex_Accessor my_accessor = extract<LinearCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian3D_Cell_Accessor")
		{
			LinearCartesian3D_Cell_Accessor my_accessor = extract<LinearCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian3D_Vertex_Field")
		{
			LinearCartesian3D_Vertex_Field my_field = extract<LinearCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCartesian3D_Cell_Field")
		{
			LinearCartesian3D_Cell_Field my_field = extract<LinearCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearCylindrical3D_Domain_read_vtk(std::string const &filename,
                                         LinearCylindrical3D_Domain *domain,
                                         LinearCylindrical3D_Segmentation *segmentation,
                                         dict accessors)
{
	viennagrid::io::vtk_reader<LinearCylindrical3D_Domain_t, LinearCylindrical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearCylindrical3D_Vertex_Accessor")
		{
			LinearCylindrical3D_Vertex_Accessor my_accessor = extract<LinearCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCylindrical3D_Cell_Accessor")
		{
			LinearCylindrical3D_Cell_Accessor my_accessor = extract<LinearCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCylindrical3D_Vertex_Field")
		{
			LinearCylindrical3D_Vertex_Field my_field = extract<LinearCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearCylindrical3D_Cell_Field")
		{
			LinearCylindrical3D_Cell_Field my_field = extract<LinearCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearPolar2D_Domain_read_vtk(std::string const &filename,
                                   LinearPolar2D_Domain *domain,
                                   LinearPolar2D_Segmentation *segmentation,
                                   dict accessors)
{
	viennagrid::io::vtk_reader<LinearPolar2D_Domain_t, LinearPolar2D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearPolar2D_Vertex_Accessor")
		{
			LinearPolar2D_Vertex_Accessor my_accessor = extract<LinearPolar2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearPolar2D_Cell_Accessor")
		{
			LinearPolar2D_Cell_Accessor my_accessor = extract<LinearPolar2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearPolar2D_Vertex_Field")
		{
			LinearPolar2D_Vertex_Field my_field = extract<LinearPolar2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearPolar2D_Cell_Field")
		{
			LinearPolar2D_Cell_Field my_field = extract<LinearPolar2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void LinearSpherical3D_Domain_read_vtk(std::string const &filename,
                                       LinearSpherical3D_Domain *domain,
                                       LinearSpherical3D_Segmentation *segmentation,
                                       dict accessors)
{
	viennagrid::io::vtk_reader<LinearSpherical3D_Domain_t, LinearSpherical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "LinearSpherical3D_Vertex_Accessor")
		{
			LinearSpherical3D_Vertex_Accessor my_accessor = extract<LinearSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearSpherical3D_Cell_Accessor")
		{
			LinearSpherical3D_Cell_Accessor my_accessor = extract<LinearSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "LinearSpherical3D_Vertex_Field")
		{
			LinearSpherical3D_Vertex_Field my_field = extract<LinearSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "LinearSpherical3D_Cell_Field")
		{
			LinearSpherical3D_Cell_Field my_field = extract<LinearSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

////////////////
// TRIANGULAR //
////////////////

void TriangularCartesian2D_Domain_read_vtk(std::string const &filename,
                                           TriangularCartesian2D_Domain *domain,
                                           TriangularCartesian2D_Segmentation *segmentation,
                                           dict accessors)
{
	viennagrid::io::vtk_reader<TriangularCartesian2D_Domain_t, TriangularCartesian2D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularCartesian2D_Vertex_Accessor")
		{
			TriangularCartesian2D_Vertex_Accessor my_accessor = extract<TriangularCartesian2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian2D_Cell_Accessor")
		{
			TriangularCartesian2D_Cell_Accessor my_accessor = extract<TriangularCartesian2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian2D_Vertex_Field")
		{
			TriangularCartesian2D_Vertex_Field my_field = extract<TriangularCartesian2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian2D_Cell_Field")
		{
			TriangularCartesian2D_Cell_Field my_field = extract<TriangularCartesian2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularCartesian3D_Domain_read_vtk(std::string const &filename,
                                           TriangularCartesian3D_Domain *domain,
                                           TriangularCartesian3D_Segmentation *segmentation,
                                           dict accessors)
{
	viennagrid::io::vtk_reader<TriangularCartesian3D_Domain_t, TriangularCartesian3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularCartesian3D_Vertex_Accessor")
		{
			TriangularCartesian3D_Vertex_Accessor my_accessor = extract<TriangularCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian3D_Cell_Accessor")
		{
			TriangularCartesian3D_Cell_Accessor my_accessor = extract<TriangularCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian3D_Vertex_Field")
		{
			TriangularCartesian3D_Vertex_Field my_field = extract<TriangularCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCartesian3D_Cell_Field")
		{
			TriangularCartesian3D_Cell_Field my_field = extract<TriangularCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularCylindrical3D_Domain_read_vtk(std::string const &filename,
                                             TriangularCylindrical3D_Domain *domain,
                                             TriangularCylindrical3D_Segmentation *segmentation,
                                             dict accessors)
{
	viennagrid::io::vtk_reader<TriangularCylindrical3D_Domain_t, TriangularCylindrical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularCylindrical3D_Vertex_Accessor")
		{
			TriangularCylindrical3D_Vertex_Accessor my_accessor = extract<TriangularCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCylindrical3D_Cell_Accessor")
		{
			TriangularCylindrical3D_Cell_Accessor my_accessor = extract<TriangularCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCylindrical3D_Vertex_Field")
		{
			TriangularCylindrical3D_Vertex_Field my_field = extract<TriangularCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularCylindrical3D_Cell_Field")
		{
			TriangularCylindrical3D_Cell_Field my_field = extract<TriangularCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularPolar2D_Domain_read_vtk(std::string const &filename,
                                       TriangularPolar2D_Domain *domain,
                                       TriangularPolar2D_Segmentation *segmentation,
                                       dict accessors)
{
	viennagrid::io::vtk_reader<TriangularPolar2D_Domain_t, TriangularPolar2D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularPolar2D_Vertex_Accessor")
		{
			TriangularPolar2D_Vertex_Accessor my_accessor = extract<TriangularPolar2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularPolar2D_Cell_Accessor")
		{
			TriangularPolar2D_Cell_Accessor my_accessor = extract<TriangularPolar2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularPolar2D_Vertex_Field")
		{
			TriangularPolar2D_Vertex_Field my_field = extract<TriangularPolar2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularPolar2D_Cell_Field")
		{
			TriangularPolar2D_Cell_Field my_field = extract<TriangularPolar2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TriangularSpherical3D_Domain_read_vtk(std::string const &filename,
                                           TriangularSpherical3D_Domain *domain,
                                           TriangularSpherical3D_Segmentation *segmentation,
                                           dict accessors)
{
	viennagrid::io::vtk_reader<TriangularSpherical3D_Domain_t, TriangularSpherical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TriangularSpherical3D_Vertex_Accessor")
		{
			TriangularSpherical3D_Vertex_Accessor my_accessor = extract<TriangularSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularSpherical3D_Cell_Accessor")
		{
			TriangularSpherical3D_Cell_Accessor my_accessor = extract<TriangularSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularSpherical3D_Vertex_Field")
		{
			TriangularSpherical3D_Vertex_Field my_field = extract<TriangularSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TriangularSpherical3D_Cell_Field")
		{
			TriangularSpherical3D_Cell_Field my_field = extract<TriangularSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

///////////////////
// QUADRILATERAL //
///////////////////

void QuadrilateralCartesian2D_Domain_read_vtk(std::string const &filename,
                                              QuadrilateralCartesian2D_Domain *domain,
                                              QuadrilateralCartesian2D_Segmentation *segmentation,
                                              dict accessors)
{
	viennagrid::io::vtk_reader<QuadrilateralCartesian2D_Domain_t, QuadrilateralCartesian2D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralCartesian2D_Vertex_Accessor")
		{
			QuadrilateralCartesian2D_Vertex_Accessor my_accessor = extract<QuadrilateralCartesian2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian2D_Cell_Accessor")
		{
			QuadrilateralCartesian2D_Cell_Accessor my_accessor = extract<QuadrilateralCartesian2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian2D_Vertex_Field")
		{
			QuadrilateralCartesian2D_Vertex_Field my_field = extract<QuadrilateralCartesian2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian2D_Cell_Field")
		{
			QuadrilateralCartesian2D_Cell_Field my_field = extract<QuadrilateralCartesian2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralCartesian3D_Domain_read_vtk(std::string const &filename,
                                              QuadrilateralCartesian3D_Domain *domain,
                                              QuadrilateralCartesian3D_Segmentation *segmentation,
                                              dict accessors)
{
	viennagrid::io::vtk_reader<QuadrilateralCartesian3D_Domain_t, QuadrilateralCartesian3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralCartesian3D_Vertex_Accessor")
		{
			QuadrilateralCartesian3D_Vertex_Accessor my_accessor = extract<QuadrilateralCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian3D_Cell_Accessor")
		{
			QuadrilateralCartesian3D_Cell_Accessor my_accessor = extract<QuadrilateralCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian3D_Vertex_Field")
		{
			QuadrilateralCartesian3D_Vertex_Field my_field = extract<QuadrilateralCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCartesian3D_Cell_Field")
		{
			QuadrilateralCartesian3D_Cell_Field my_field = extract<QuadrilateralCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralCylindrical3D_Domain_read_vtk(std::string const &filename,
                                                QuadrilateralCylindrical3D_Domain *domain,
                                                QuadrilateralCylindrical3D_Segmentation *segmentation,
                                                dict accessors)
{
	viennagrid::io::vtk_reader<QuadrilateralCylindrical3D_Domain_t, QuadrilateralCylindrical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralCylindrical3D_Vertex_Accessor")
		{
			QuadrilateralCylindrical3D_Vertex_Accessor my_accessor = extract<QuadrilateralCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCylindrical3D_Cell_Accessor")
		{
			QuadrilateralCylindrical3D_Cell_Accessor my_accessor = extract<QuadrilateralCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCylindrical3D_Vertex_Field")
		{
			QuadrilateralCylindrical3D_Vertex_Field my_field = extract<QuadrilateralCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralCylindrical3D_Cell_Field")
		{
			QuadrilateralCylindrical3D_Cell_Field my_field = extract<QuadrilateralCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralPolar2D_Domain_read_vtk(std::string const &filename,
                                          QuadrilateralPolar2D_Domain *domain,
                                          QuadrilateralPolar2D_Segmentation *segmentation,
                                          dict accessors)
{
	viennagrid::io::vtk_reader<QuadrilateralPolar2D_Domain_t, QuadrilateralPolar2D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralPolar2D_Vertex_Accessor")
		{
			QuadrilateralPolar2D_Vertex_Accessor my_accessor = extract<QuadrilateralPolar2D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralPolar2D_Cell_Accessor")
		{
			QuadrilateralPolar2D_Cell_Accessor my_accessor = extract<QuadrilateralPolar2D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralPolar2D_Vertex_Field")
		{
			QuadrilateralPolar2D_Vertex_Field my_field = extract<QuadrilateralPolar2D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralPolar2D_Cell_Field")
		{
			QuadrilateralPolar2D_Cell_Field my_field = extract<QuadrilateralPolar2D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void QuadrilateralSpherical3D_Domain_read_vtk(std::string const &filename,
                                              QuadrilateralSpherical3D_Domain *domain,
                                              QuadrilateralSpherical3D_Segmentation *segmentation,
                                              dict accessors)
{
	viennagrid::io::vtk_reader<QuadrilateralSpherical3D_Domain_t, QuadrilateralSpherical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "QuadrilateralSpherical3D_Vertex_Accessor")
		{
			QuadrilateralSpherical3D_Vertex_Accessor my_accessor = extract<QuadrilateralSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralSpherical3D_Cell_Accessor")
		{
			QuadrilateralSpherical3D_Cell_Accessor my_accessor = extract<QuadrilateralSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralSpherical3D_Vertex_Field")
		{
			QuadrilateralSpherical3D_Vertex_Field my_field = extract<QuadrilateralSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "QuadrilateralSpherical3D_Cell_Field")
		{
			QuadrilateralSpherical3D_Cell_Field my_field = extract<QuadrilateralSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

/////////////////
// TETRAHEDRAL //
/////////////////

void TetrahedralCartesian3D_Domain_read_vtk(std::string const &filename,
                                            TetrahedralCartesian3D_Domain *domain,
                                            TetrahedralCartesian3D_Segmentation *segmentation,
                                            dict accessors)
{
	viennagrid::io::vtk_reader<TetrahedralCartesian3D_Domain_t, TetrahedralCartesian3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TetrahedralCartesian3D_Vertex_Accessor")
		{
			TetrahedralCartesian3D_Vertex_Accessor my_accessor = extract<TetrahedralCartesian3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCartesian3D_Cell_Accessor")
		{
			TetrahedralCartesian3D_Cell_Accessor my_accessor = extract<TetrahedralCartesian3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCartesian3D_Vertex_Field")
		{
			TetrahedralCartesian3D_Vertex_Field my_field = extract<TetrahedralCartesian3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCartesian3D_Cell_Field")
		{
			TetrahedralCartesian3D_Cell_Field my_field = extract<TetrahedralCartesian3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TetrahedralCylindrical3D_Domain_read_vtk(std::string const &filename,
                                              TetrahedralCylindrical3D_Domain *domain,
                                              TetrahedralCylindrical3D_Segmentation *segmentation,
                                              dict accessors)
{
	viennagrid::io::vtk_reader<TetrahedralCylindrical3D_Domain_t, TetrahedralCylindrical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TetrahedralCylindrical3D_Vertex_Accessor")
		{
			TetrahedralCylindrical3D_Vertex_Accessor my_accessor = extract<TetrahedralCylindrical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCylindrical3D_Cell_Accessor")
		{
			TetrahedralCylindrical3D_Cell_Accessor my_accessor = extract<TetrahedralCylindrical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCylindrical3D_Vertex_Field")
		{
			TetrahedralCylindrical3D_Vertex_Field my_field = extract<TetrahedralCylindrical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralCylindrical3D_Cell_Field")
		{
			TetrahedralCylindrical3D_Cell_Field my_field = extract<TetrahedralCylindrical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}

void TetrahedralSpherical3D_Domain_read_vtk(std::string const &filename,
                                            TetrahedralSpherical3D_Domain *domain,
                                            TetrahedralSpherical3D_Segmentation *segmentation,
                                            dict accessors)
{
	viennagrid::io::vtk_reader<TetrahedralSpherical3D_Domain_t, TetrahedralSpherical3D_Segmentation_t>    my_vtk_reader;
	
	list keys = accessors.keys();
	list values = accessors.values();
	for (int i = 0; i < len(keys); ++i)
	{
		std::string quantity_name = extract<std::string>(keys[i]);
		object accessor = values[i];
		object accessor_cls_name = accessor.attr("__class__").attr("__name__");
		if (accessor_cls_name == "TetrahedralSpherical3D_Vertex_Accessor")
		{
			TetrahedralSpherical3D_Vertex_Accessor my_accessor = extract<TetrahedralSpherical3D_Vertex_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralSpherical3D_Cell_Accessor")
		{
			TetrahedralSpherical3D_Cell_Accessor my_accessor = extract<TetrahedralSpherical3D_Cell_Accessor>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_accessor.get_accessor(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralSpherical3D_Vertex_Field")
		{
			TetrahedralSpherical3D_Vertex_Field my_field = extract<TetrahedralSpherical3D_Vertex_Field>(accessor);
			viennagrid::io::add_scalar_data_on_vertices(my_vtk_reader, my_field.get_field(), quantity_name);
		}
		else if (accessor_cls_name == "TetrahedralSpherical3D_Cell_Field")
		{
			TetrahedralSpherical3D_Cell_Field my_field = extract<TetrahedralSpherical3D_Cell_Field>(accessor);
			viennagrid::io::add_scalar_data_on_cells(my_vtk_reader, my_field.get_field(), quantity_name);
		}
	}
	
	if (segmentation == NULL)
		my_vtk_reader(domain->get_domain(), filename);
	else
		my_vtk_reader(domain->get_domain(), segmentation->get_segmentation(), filename);
}
