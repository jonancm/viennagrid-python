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
			viennagrid_wrapper._PointCartesian2D(1, 2),
			viennagrid_wrapper._PointCartesian2D(2, 3),
			viennagrid_wrapper._PointCartesian2D(3, 4),
			viennagrid_wrapper._PointCartesian2D(4, 5),
			viennagrid_wrapper._PointCartesian2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper._TriangularCartesian2D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularCartesian2D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])
	
	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

class TestTriangularCartesian3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointCartesian3D(1, 2, 7),
			viennagrid_wrapper._PointCartesian3D(2, 3, 7),
			viennagrid_wrapper._PointCartesian3D(3, 4, 7),
			viennagrid_wrapper._PointCartesian3D(4, 5, 7),
			viennagrid_wrapper._PointCartesian3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper._TriangularCartesian3D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularCartesian3D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

class TestTriangularCylindrical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointCylindrical3D(1, 2, 7),
			viennagrid_wrapper._PointCylindrical3D(2, 3, 7),
			viennagrid_wrapper._PointCylindrical3D(3, 4, 7),
			viennagrid_wrapper._PointCylindrical3D(4, 5, 7),
			viennagrid_wrapper._PointCylindrical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper._TriangularCylindrical3D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularCylindrical3D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

class TestTriangularPolar2D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointPolar2D(1, 2),
			viennagrid_wrapper._PointPolar2D(2, 3),
			viennagrid_wrapper._PointPolar2D(3, 4),
			viennagrid_wrapper._PointPolar2D(4, 5),
			viennagrid_wrapper._PointPolar2D(5, 6),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper._TriangularPolar2D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularPolar2D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

class TestTriangularSpherical3D_Domain(unittest.TestCase):
	def setUp(self):
		self.num_segments = 5
		self.vertices = [
			viennagrid_wrapper._PointSpherical3D(1, 2, 7),
			viennagrid_wrapper._PointSpherical3D(2, 3, 7),
			viennagrid_wrapper._PointSpherical3D(3, 4, 7),
			viennagrid_wrapper._PointSpherical3D(4, 5, 7),
			viennagrid_wrapper._PointSpherical3D(5, 6, 7),
		]
		self.num_vertices = len(self.vertices)
		self.domain = viennagrid_wrapper._TriangularSpherical3D_Domain()
	
	def test_create_segments(self):
		"""Test methods 'create_segments' and 'get_segment'."""
		self.domain.create_segments(self.num_segments)
		self.assertEqual(self.domain.num_segments, self.num_segments)
		
		segments = []
		for i in range(0, self.domain.num_segments):
			segments.append(self.domain.get_segment(i))
			self.assertTrue(isinstance(segments[i], viennagrid_wrapper._TriangularSpherical3D_Segment))
	
	def test_add_vertex(self):
		"""Test methods 'add_vertex' and 'get_vertex'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		for i in range(0, self.num_vertices):
			self.assertEqual(self.domain.get_vertex(i), self.vertices[i])

	def test_iter_segments(self):
		"""Test method for 'iter_segments'."""
		self.domain.create_segments(self.num_segments)
		segments = [s for s in self.domain.iter_segments]
		self.assertEqual(len(segments), self.num_segments)

	def test_iter_vertices(self):
		"""Test method for 'iter_vertices'."""
		for vertex in self.vertices:
			self.domain.add_vertex(vertex)
		self.assertEqual(self.domain.num_vertices, self.num_vertices)
		vertices = [v for v in self.domain.iter_vertices]
		self.assertEqual(len(vertices), self.num_vertices)

if __name__ == '__main__':
	unittest.main()
