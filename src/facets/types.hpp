#ifndef FACETS_TYPES_HPP
#define FACETS_TYPES_HPP

#include "../domains/types.hpp"

/**************
 * Triangular *
 **************/

typedef viennagrid::result_of::facet<TriangularCartesian2D_Domain_t>::type       TriangularCartesian2D_Facet_t;
typedef viennagrid::result_of::facet<TriangularCartesian3D_Domain_t>::type       TriangularCartesian3D_Facet_t;
typedef viennagrid::result_of::facet<TriangularCylindrical3D_Domain_t>::type     TriangularCylindrical3D_Facet_t;
typedef viennagrid::result_of::facet<TriangularPolar2D_Domain_t>::type           TriangularPolar2D_Facet_t;
typedef viennagrid::result_of::facet<TriangularSpherical3D_Domain_t>::type       TriangularSpherical3D_Facet_t;

#endif /* end of include guard: FACETS_TYPES_HPP */
