#-*- coding: utf-8 -*-

import viennagrid_wrapper

##########################
# COORDINATE SYSTEM TAGS #
##########################

CARTESIAN   = 'cartesian'
POLAR       = 'polar'
SPHERICAL   = 'spherical'
CYLINDRICAL = 'cylindrical'

COORD_SYSTEM_TAGS = (CARTESIAN, POLAR, SPHERICAL, CYLINDRICAL)

########################
# SUPPORTED DIMENSIONS #
########################

SUPPORTED_DIMENSIONS = {
	CARTESIAN:      (2, 3),
	CYLINDRICAL:    (3,),
	POLAR:          (2,),
	SPHERICAL:      (3,),
}

#############
# CELL TAGS #
#############

LINE_TAG          = 'linear'
TRIANGLE_TAG      = 'triangular'
TETRAHEDRON_TAG   = 'tetrahedral'
QUADRILATERAL_TAG = 'quadrilateral'
HEXAHEDRON_TAG    = 'hexahedral'

CELL_TAGS = (LINE_TAG, TRIANGLE_TAG, TETRAHEDRON_TAG, QUADRILATERAL_TAG, HEXAHEDRON_TAG)

#######################
# CONFIGURATION CLASS #
#######################

class Configuration(object):
	def __init__(self, cell_tag, coord_system_tag, dim=None):
		super(Configuration, self).__init__()
		
		# Set numeric_type to double
		self._numeric_type = 'double'
		
		# Set cell_tag
		if cell_tag not in CELL_TAGS:
			raise ValueError('Unsupported cell tag')
		else:
			self._cell_tag = cell_tag
		
		# Set coord_system_tag
		if coord_system_tag not in COORD_SYSTEM_TAGS:
			raise ValueError('Unsupported coordinate system tag')
		else:
			self._coord_system_tag = coord_system_tag
		
		# Set dim
		if dim is not None:
			if not isinstance(dim, int):
				raise TypeError('Dimension must be an integer')
			
			if dim not in SUPPORTED_DIMENSIONS[coord_system_tag]:
				raise ValueError('Unsupported dimension: %(dim)s' % locals())
			
			self._dim = dim
		else:
			if len(SUPPORTED_DIMENSIONS[coord_system_tag]) == 1:
				self._dim = SUPPORTED_DIMENSIONS[coord_system_tag][0]
			else:
				raise TypeError('Dimension has not been specified')
	
	@property
	def numeric_type(self):
		return self._numeric_type
	
	@property
	def coord_system_tag(self):
		return self._coord_system_tag
	
	@property
	def cell_tag(self):
		return self._cell_tag
	
	@property
	def dim(self):
		return self._dim
	
	@property
	def point_type(self):
		"""Return appropriate point type based in this configuration"""
		classname = ''.join(['Point', self.coord_system_tag.title(), str(self.dim), 'D'])
		return viennagrid_wrapper.__getattribute__(classname)
	
	@property
	def domain_type(self):
		"""Return appropriate domain type based in this configuration"""
		classname = ''.join([self.cell_tag.title(), self.coord_system_tag.title(), str(self.dim), 'D_Domain'])
		return viennagrid_wrapper.__getattribute__(classname)
	
	def create_point(self, *args, **kwargs):
		"""Create a new point based in this configuration"""
		PointType = self.point_type
		return PointType(*args, **kwargs)
	
	def create_domain(self, *args, **kwargs):
		"""Create a new domain based in this configuration"""
		DomainType = self.domain_type
		return DomainType(*args, **kwargs)

#########################
# COMMON CONFIGURATIONS #
#########################

linear_2d        = Configuration(LINE_TAG, CARTESIAN, 2)
linear_3d        = Configuration(LINE_TAG, CARTESIAN, 3)
triangular_2d    = Configuration(TRIANGLE_TAG, CARTESIAN, 2)
triangular_3d    = Configuration(TRIANGLE_TAG, CARTESIAN, 3)
tetrahedral_3d   = Configuration(TETRAHEDRON_TAG, CARTESIAN, 3)
quadrilateral_2d = Configuration(QUADRILATERAL_TAG, CARTESIAN, 2)
quadrilateral_3d = Configuration(QUADRILATERAL_TAG, CARTESIAN, 3)
hexahedral_3d    = Configuration(HEXAHEDRON_TAG, CARTESIAN, 3)
