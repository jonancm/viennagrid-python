#ifndef ALGORITHMS_IS_INTERFACE_HPP
#define ALGORITHMS_IS_INTERFACE_HPP

#include "../segments/linear.hpp"
#include "../segments/triangular.hpp"
#include "../segments/quadrilateral.hpp"
#include "../segments/tetrahedral.hpp"

#include "../facets/linear.hpp"
#include "../facets/triangular.hpp"
#include "../facets/quadrilateral.hpp"
#include "../facets/tetrahedral.hpp"

/******************************
 * IS_INTERFACE (with facets) *
 ******************************/

bool LinearCartesian1D_Facet_is_interface(LinearCartesian1D_Segment seg0, LinearCartesian1D_Segment seg1, LinearCartesian1D_Facet facet);
bool LinearCartesian2D_Facet_is_interface(LinearCartesian2D_Segment seg0, LinearCartesian2D_Segment seg1, LinearCartesian2D_Facet facet);
bool LinearCartesian3D_Facet_is_interface(LinearCartesian3D_Segment seg0, LinearCartesian3D_Segment seg1, LinearCartesian3D_Facet facet);
bool LinearCylindrical3D_Facet_is_interface(LinearCylindrical3D_Segment seg0, LinearCylindrical3D_Segment seg1, LinearCylindrical3D_Facet facet);
bool LinearPolar2D_Facet_is_interface(LinearPolar2D_Segment seg0, LinearPolar2D_Segment seg1, LinearPolar2D_Facet facet);
bool LinearSpherical3D_Facet_is_interface(LinearSpherical3D_Segment seg0, LinearSpherical3D_Segment seg1, LinearSpherical3D_Facet facet);

bool TriangularCartesian2D_Facet_is_interface(TriangularCartesian2D_Segment seg0, TriangularCartesian2D_Segment seg1, TriangularCartesian2D_Facet facet);
bool TriangularCartesian3D_Facet_is_interface(TriangularCartesian3D_Segment seg0, TriangularCartesian3D_Segment seg1, TriangularCartesian3D_Facet facet);
bool TriangularCylindrical3D_Facet_is_interface(TriangularCylindrical3D_Segment seg0, TriangularCylindrical3D_Segment seg1, TriangularCylindrical3D_Facet facet);
bool TriangularPolar2D_Facet_is_interface(TriangularPolar2D_Segment seg0, TriangularPolar2D_Segment seg1, TriangularPolar2D_Facet facet);
bool TriangularSpherical3D_Facet_is_interface(TriangularSpherical3D_Segment seg0, TriangularSpherical3D_Segment seg1, TriangularSpherical3D_Facet facet);

bool QuadrilateralCartesian2D_Facet_is_interface(QuadrilateralCartesian2D_Segment seg0, QuadrilateralCartesian2D_Segment seg1, QuadrilateralCartesian2D_Facet facet);
bool QuadrilateralCartesian3D_Facet_is_interface(QuadrilateralCartesian3D_Segment seg0, QuadrilateralCartesian3D_Segment seg1, QuadrilateralCartesian3D_Facet facet);
bool QuadrilateralCylindrical3D_Facet_is_interface(QuadrilateralCylindrical3D_Segment seg0, QuadrilateralCylindrical3D_Segment seg1, QuadrilateralCylindrical3D_Facet facet);
bool QuadrilateralPolar2D_Facet_is_interface(QuadrilateralPolar2D_Segment seg0, QuadrilateralPolar2D_Segment seg1, QuadrilateralPolar2D_Facet facet);
bool QuadrilateralSpherical3D_Facet_is_interface(QuadrilateralSpherical3D_Segment seg0, QuadrilateralSpherical3D_Segment seg1, QuadrilateralSpherical3D_Facet facet);

bool TetrahedralCartesian3D_Facet_is_interface(TetrahedralCartesian3D_Segment seg0, TetrahedralCartesian3D_Segment seg1, TetrahedralCartesian3D_Facet facet);
bool TetrahedralCylindrical3D_Facet_is_interface(TetrahedralCylindrical3D_Segment seg0, TetrahedralCylindrical3D_Segment seg1, TetrahedralCylindrical3D_Facet facet);
bool TetrahedralSpherical3D_Facet_is_interface(TetrahedralSpherical3D_Segment seg0, TetrahedralSpherical3D_Segment seg1, TetrahedralSpherical3D_Facet facet);

#endif /* end of include guard: ALGORITHMS_IS_INTERFACE_HPP */
