cmake_minimum_required (VERSION 2.6)
project (ViennaGridWrapper)
set (version 0.1)
set (release 0.1.0)

# Find Python header files (Python.h)
find_package (PythonLibs REQUIRED)
include_directories (${PYTHON_INCLUDE_PATH})

# Find Boost.Python 1.53.0
find_package (Boost 1.53.0 REQUIRED COMPONENTS python)
include_directories (${Boost_INCLUDE_DIRS})

# Add include path for ViennaGrid
include_directories (../inc/viennagrid)
# Add include path for ViennaData
include_directories (../inc/viennadata)

set (VIENNAGRID_WRAPPER_POINTS_SRC
        points/types.hpp
        points/forward.hpp
        points/cartesian.hpp
        points/cartesian.cpp
        points/cylindrical.hpp
        points/cylindrical.cpp
        points/polar.hpp
        points/polar.cpp
        points/spherical.hpp
        points/spherical.cpp)

set (VIENNAGRID_WRAPPER_DOMAINS_SRC
        domains/types.hpp
        domains/forward.hpp
        domains/linear.hpp
        domains/linear.cpp
        domains/triangular.hpp
        domains/triangular.cpp
        domains/quadrilateral.hpp
        domains/quadrilateral.cpp
        domains/tetrahedral.hpp
        domains/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SEGMENTATIONS_SRC
        segmentations/types.hpp
        segmentations/linear.hpp
        segmentations/linear.cpp
        segmentations/triangular.hpp
        segmentations/triangular.cpp
        segmentations/quadrilateral.hpp
        segmentations/quadrilateral.cpp
        segmentations/tetrahedral.hpp
        segmentations/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SEGMENTS_SRC
        segments/types.hpp
        segments/linear.hpp
        segments/linear.cpp
        segments/triangular.hpp
        segments/triangular.cpp
        segments/quadrilateral.hpp
        segments/quadrilateral.cpp
        segments/tetrahedral.hpp
        segments/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_CELLS_SRC
        cells/types.hpp
        cells/linear.hpp
        cells/linear.cpp
        cells/triangular.hpp
        cells/triangular.cpp
        cells/quadrilateral.hpp
        cells/quadrilateral.cpp
        cells/tetrahedral.hpp
        cells/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_VERTICES_SRC
        vertices/types.hpp
        vertices/linear.hpp
        vertices/linear.cpp
        vertices/triangular.hpp
        vertices/triangular.cpp
        vertices/quadrilateral.hpp
        vertices/quadrilateral.cpp
        vertices/tetrahedral.hpp
        vertices/tetrahedral.cpp)

set (VIENNAGRID_WRAPPER_SRC
        wrapper.cpp
        ${VIENNAGRID_WRAPPER_POINTS_SRC}
        ${VIENNAGRID_WRAPPER_DOMAINS_SRC}
        ${VIENNAGRID_WRAPPER_SEGMENTATIONS_SRC}
        ${VIENNAGRID_WRAPPER_SEGMENTS_SRC}
        ${VIENNAGRID_WRAPPER_CELLS_SRC}
        ${VIENNAGRID_WRAPPER_VERTICES_SRC})

python_add_module (viennagrid_wrapper ${VIENNAGRID_WRAPPER_SRC})
target_link_libraries (viennagrid_wrapper ${Boost_LIBRARIES})
set_target_properties (viennagrid_wrapper PROPERTIES VERSION ${release} SOVERSION ${version})