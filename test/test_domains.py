#!/usr/bin/env python
#-*- coding: utf-8 -*-

import sys
sys.path += '..'

import unittest

import viennagrid_wrapper

######################
# TRIANGULAR DOMAINS #
######################

class TestTriangularCartesian2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCartesian2D(1, 2),
			viennagrid_wrapper.PointCartesian2D(2, 3),
			viennagrid_wrapper.PointCartesian2D(3, 4),
			viennagrid_wrapper.PointCartesian2D(4, 5),
			viennagrid_wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularCartesian2D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 3)

class TestTriangularCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularCartesian3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 3)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularCylindrical3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 3)

class TestTriangularPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointPolar2D(1, 2),
			viennagrid_wrapper.PointPolar2D(2, 3),
			viennagrid_wrapper.PointPolar2D(3, 4),
			viennagrid_wrapper.PointPolar2D(4, 5),
			viennagrid_wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularPolar2D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 3)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TriangularSpherical3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 3)

#########################
# QUADRILATERAL DOMAINS #
#########################

class TestQuadrilateralCartesian2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCartesian2D(1, 2),
			viennagrid_wrapper.PointCartesian2D(2, 3),
			viennagrid_wrapper.PointCartesian2D(3, 4),
			viennagrid_wrapper.PointCartesian2D(4, 5),
			viennagrid_wrapper.PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralCartesian2D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

class TestQuadrilateralCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralCartesian3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

class TestQuadrilateralCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralCylindrical3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

class TestQuadrilateralPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointPolar2D(1, 2),
			viennagrid_wrapper.PointPolar2D(2, 3),
			viennagrid_wrapper.PointPolar2D(3, 4),
			viennagrid_wrapper.PointPolar2D(4, 5),
			viennagrid_wrapper.PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralPolar2D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

class TestQuadrilateralSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.QuadrilateralSpherical3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

#######################
# TETRAHEDRAL DOMAINS #
#######################

class TestTetrahedralCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCartesian3D(1, 2, 7),
			viennagrid_wrapper.PointCartesian3D(2, 3, 7),
			viennagrid_wrapper.PointCartesian3D(3, 4, 7),
			viennagrid_wrapper.PointCartesian3D(4, 5, 7),
			viennagrid_wrapper.PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TetrahedralCartesian3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

class TestTetrahedralCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper.PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper.PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper.PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper.PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TetrahedralCylindrical3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

class TestTetrahedralSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper.PointSpherical3D(1, 2, 7),
			viennagrid_wrapper.PointSpherical3D(2, 3, 7),
			viennagrid_wrapper.PointSpherical3D(3, 4, 7),
			viennagrid_wrapper.PointSpherical3D(4, 5, 7),
			viennagrid_wrapper.PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper.TetrahedralSpherical3D_Domain()

	def test_segments(self):
		"""Test method for attribute 'segments', which returns a Python list. Also tests method 'create_segments'."""
		self.assertEqual(len(self.domain.segments), 0)
		self.assertEqual(self.domain.segments, [])
		self.domain.create_segments(self.num_segments)
		self.assertEqual(len(self.domain.segments), self.num_vertices)
		self.assertNotEqual(self.domain.segments, [])
		# Test __len__
		self.assertEqual(len(self.domain.segments), self.num_segments)
		# Test __iter__
		for segment in self.domain.segments:
			pass
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.segments)):
			self.domain.segments[i]
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.segments[2:4]), 2)

	def test_vertices(self):
		"""Test method for attribute 'vertices', which returns a Python list. Also tests method 'add_vertex'."""
		self.assertEqual(len(self.domain.vertices), 0)
		self.assertEqual(self.domain.vertices, [])
		for point in self.vertices:
			self.domain.add_vertex(point)
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		self.assertNotEqual(self.domain.vertices, [])
		# Test __len__
		self.assertEqual(len(self.domain.vertices), self.num_vertices)
		# Test __iter__
		for vertex in self.domain.vertices:
			pass
		for i, vertex in enumerate(self.domain.vertices):
			self.assertEqual(vertex, self.vertices[i])
		# Test __getitem__ with indices
		for i in range(0, len(self.domain.vertices)):
			self.assertEqual(self.domain.vertices[i], self.vertices[i])
		# Test __getitem__ with slices
		self.assertEqual(len(self.domain.vertices[2:4]), 2)

	def test_create_cell(self):
		"""Test method for 'Domain.create_cell', 'Domain.cells', and 'Cell.vertices'."""
		for point in self.vertices:
			self.domain.add_vertex(point)

		v0 = self.domain.vertices[0]
		v1 = self.domain.vertices[1]
		v2 = self.domain.vertices[2]
		v3 = self.domain.vertices[3]

		self.assertEqual(len(self.domain.cells), 0)
		self.domain.create_cell(v0, v1, v2, v3)
		self.assertEqual(len(self.domain.cells), 1)
		self.assertEqual(len(self.domain.cells[0].vertices), 4)

if __name__ == '__main__':
	unittest.main()
