#-*- coding: utf-8 -*-

import viennagrid_wrapper as wrapper

import config

class Point(object):
	"""docstring for Point"""
	def __init__(self, *args, **kwargs):
		super(Point, self).__init__()
		
		_coords = None
		_coord_system = None
		_dim = None
		
		# Extract coordinate system tag from keyword arguments or use default (cartesian)
		try:
			_coord_system = kwargs['coord_system']
		except KeyError:
			_coord_system = config.CARTESIAN
		else:
			if not isinstance(_coord_system, str):
				raise TypeError('Coordinate system tag must be a string.')
			if _coord_system not in config.COORD_SYSTEM_TAGS:
				raise ValueError('Unknown coordinate system tag.')
		
		# If point coordinates (2 or 3 positional arguments) have been specified, store coordinates
		# and imply dimension of the space.
		if len(args) in config.SUPPORTED_DIMENSIONS[_coord_system]:
			for i, elem in enumerate(args):
				if not isinstance(elem, (int, long, float, complex)):
					raise TypeError('Coordinate %(i)d is non-numeric. Point coordinates must be numeric.' % locals())
			_coords = args
			_dim = len(args)
			
			# Check if keyword argument 'dim' matches number of positional arguments (point coordinates).
			# If it matches or has not been specified, ignore. If it does not match, raise an exception.
			try:
				dim = kwargs['dim']
			except KeyError:
				pass
			else:
				if not isinstance(dim, int):
					raise TypeError('Dimension must be an integer.')
				if dim != _dim:
					raise ValueError('Keyword argument "dim" does not match number of positional arguments.')
				_dim = dim
		# If no positional arguments have been specified, initialize coordinates to zero and extract
		# dimension from keyword arguments. If no dimension has been specified, raise an exception.
		elif not args:
			try:
				dim = kwargs['dim']
			except KeyError:
				if len(config.SUPPORTED_DIMENSIONS[_coord_system]) == 1:
					_dim = config.SUPPORTED_DIMENSIONS[_coord_system][0]
				else:
					raise TypeError('Space dimension has not been specified. You must either specify the dimension or the point coordinates.')
			else:
				if not isinstance(dim, int):
					raise TypeError('Dimension must be an integer.')
				if dim not in config.SUPPORTED_DIMENSIONS[_coord_system]:
					coord_system_name = _coord_system
					supported_dims = ', '.join(str(x) for x in config.SUPPORTED_DIMENSIONS[_coord_system])
					raise ValueError('Unsupported dimension. Only the following dimensions are supported for %(coord_system_name)s points: %(supported_dims)s.' % locals())
				_dim = dim
			_coords = [0 for i in range(0, _dim)]
		# If an invalid number of positional arguments has been provided, raise an exception
		else:
			coord_system_name = _coord_system
			supported_dims = ', '.join(['0'] + [str(x) for x in config.SUPPORTED_DIMENSIONS[_coord_system]])
			raise TypeError('Point() for %(coord_system_name)s points must take any of the following numbers of positional arguments: %(supported_dims)s.' % locals())
		
		if _coord_system == config.CARTESIAN:
			if _dim == 2:
				self._point = wrapper.PointCartesian2D(*_coords)
			elif _dim == 3:
				self._point = wrapper.PointCartesian3D(*_coords)
		elif _coord_system == config.POLAR:
			self._point = wrapper.PointPolar2D(*_coords)
		elif _coord_system == config.CYLINDRICAL:
			self._point = wrapper.PointCylindrical3D(*_coords)
		elif _coord_system == config.SPHERICAL:
			self._point = wrapper.PointSpherical3D(*_coords)
	
	@property
	def coords(self):
		return self._point.coords
	
	@property
	def coord_system(self):
		return self._point.coord_system
	
	@property
	def dim(self):
		return self._point.dim

class Domain(object):
	"""docstring for Domain"""
	def __init__(self, cfg):
		super(Domain, self).__init__()
		self._config = cfg
		self._obj = cfg.create_domain()
	
	@property
	def config(self):
		return self._config
	
	@property
	def vertices(self):
		return [vertex for vertex in self._obj.iter_vertices()]
		# TODO: this should fail, because iter_vertices is not yet implemented
	
	def add_vertex(self, vertex):
		self._obj.add_vertex(vertex)
	
	def __iter__(self):
		return self._obj.iter_vertices()
		# TODO: this should fail, because iter_vertices is not yet implemented
