#-*- coding: utf-8 -*-

import viennagrid_wrapper as _wrapper

_SUPPORTED_NORMS = (1, 2, 'inf')

def inner_prod(point1, point2):
	# Try to get method 'inner_prod' from 'point1'. If it doesn't have the method,
	# it means it's not a cartesian point. Thus, convert to cartesian coordinates
	# and get the method. If it still doesn't have the method, raise an exception.
	try:
		inner_prod_fn = point1.__getattribute__('inner_prod')
	except AttributeError:
		casted_pnt1 = point1.to_cartesian()
		try:
			inner_prod_fn = casted_pnt1.__getattribute__('inner_prod')
		except AttributeError:
			raise TypeError('point1 has no method named inner_prod')
	else:
		casted_pnt1 = point1
	
	# If point types are equal, simply calculate the inner product. If they're not
	# equal, try to convert 'point2' to the type of 'point1'. If types are still
	# different, it means that both points are of incompatible types
	# (i.e. incompatible dimensions).
	if casted_pnt1.__class__ is point2.__class__:
		return inner_prod_fun(point2)
	else:
		casted_pnt2 = point2.to_cartesian()
		if casted_pnt1.__class__ is casted_pnt2.__class__:
			return inner_prod_fun(casted_pnt2)
		else:
			raise TypeError('incompatible point types')

def cross_prod(point1, point2):
	# Try to get method 'cross_prod' from 'point1'. If it doesn't have the method,
	# it means it's not a cartesian point. Thus, convert to cartesian coordinates
	# and get the method. If it still doesn't have the method, raise an exception.
	try:
		cross_prod_fn = point1.__getattribute__('cross_prod')
	except AttributeError:
		casted_pnt1 = point1.to_cartesian()
		try:
			cross_prod_fn = casted_pnt1.__getattribute__('cross_prod')
		except AttributeError:
			raise TypeError('point1 has no method named cross_prod')
	else:
		casted_pnt1 = point1
	
	# If point types are equal, simply calculate the cross product. If they're not
	# equal, try to convert 'point2' to the type of 'point1'. If types are still
	# different, it means that both points are of incompatible types
	# (i.e. incompatible dimensions).
	if casted_pnt1.__class__ is point2.__class__:
		return cross_prod_fn(point2)
	else:
		casted_pnt2 = point2.to_cartesian()
		if casted_pnt1.__class__ is casted_pnt2.__class__:
			return cross_prod_fn(casted_pnt2)
		else:
			raise TypeError('incompatible point types')

def norm(point, norm_type=2):
	if norm_type in _SUPPORTED_NORMS:
		norm_type = str(norm_type)
		norm_fn = _wrapper.__getattribute__('norm_%(norm_type)s' % locals())
		return norm_fn(point)
	else:
		raise ValueError('unsupported norm type: %(norm_type)s')

def apply_voronoi(dom):
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	_wrapper.apply_voronoi(dom)

def centroid(cell):
	if isinstance(cell, viennagrid.Cell):
		cell = cell._cell
	return _wrapper.centroid(cell)

def cell_refine(dom, seg, predicate):
	"""Returns a tuple containing the output domain and segmentation after the refination."""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	if isinstance(seg, viennagrid.Segmentation):
		seg = seg._segmentation
	return _wrapper.cell_refine(dom, seg, predicate)

def circumcenter(cell):
	if isinstance(cell, viennagrid.Cell):
		cell = cell._cell
	return _wrapper.circumcenter(cell)

def is_boundary(domseg, interface_elem):
	if isinstance(domseg, viennagrid.Domain):
		domseg = domseg._domain
	elif isinstance(domseg, viennagrid.Segment):
		domseg = domseg._segment
	
	if isinstance(interface_elem, viennagrid.Facet):
		interface_elem = interface_elem._facet
	elif isinstance(interface_elem, viennagrid.Edge):
		interface_elem = interface_elem._edge
	elif isinstance(interface_elem, viennagrid.Vertex):
		interface_elem = interface_elem._vertex
	
	return _wrapper.is_boundary(domseg, interface_elem)

def is_interface(seg0, seg1, boundary_elem):
	if isinstance(seg0, viennagrid.Segment):
		seg0 = seg0._segment
	
	if isinstance(seg1, viennagrid.Segment):
		seg1 = seg1._segment
	
	if isinstance(boundary_elem, viennagrid.Facet):
		boundary_elem = boundary_elem._facet
	elif isinstance(boundary_elem, viennagrid.Edge):
		boundary_elem = boundary_elem._edge
	elif isinstance(boundary_elem, viennagrid.Vertex):
		boundary_elem = boundary_elem._vertex
	
	return _wrapper.is_interface(seg0, seg1, boundary_elem)

def refine(dom, seg, predicate):
	"""Returns a tuple containing the output domain and segmentation after the refination."""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	if isinstance(seg, viennagrid.Segmentation):
		seg = seg._segmentation
	return _wrapper.refine(dom, seg, predicate)

def refine_uniformly(dom, seg):
	"""Returns a tuple containing the output domain and segmentation after the refination."""
	if isinstance(dom, viennagrid.Domain):
		dom = dom._domain
	if isinstance(seg, viennagrid.Segmentation):
		seg = seg._segmentation
	return _wrapper.refine_uniformly(dom, seg)

def surface(cell):
	if isinstance(cell, viennagrid.Cell):
		cell = cell._cell
	elif isinstance(cell, viennagrid.Domain):
		cell = cell._domain
	elif isinstance(cell, viennagrid.Segment):
		cell = cell._segment
	return _wrapper.surface(cell)

def volume(cell):
	if isinstance(cell, viennagrid.Cell):
		cell = cell._cell
	elif isinstance(cell, viennagrid.Domain):
		cell = cell._domain
	elif isinstance(cell, viennagrid.Segment):
		cell = cell._segment
	return _wrapper.volume(cell)

def spanned_volume(*args):
	point_list = []
	
	for point in args:
		# If the point is a high-level point, get the low-level point
		if isinstance(point, viennagrid.Point):
			point = point._point
		
		# If point is not cartesian, convert it
		if point.coord_system != 'cartesian':
			point = point.to_cartesian()
		
		# Append the point to the list
		point_list.append(point)
	
	return _wrapper.spanned_volume(point_list)