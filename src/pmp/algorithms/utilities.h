// Copyright 2022 the Polygon Mesh Processing Library developers.
// Distributed under a MIT-style license, see LICENSE.txt for details.

#pragma once

#include "pmp/bounding_box.h"
#include "pmp/surface_mesh.h"

namespace pmp {

//! Compute the bounding box of \p mesh .
//! \ingroup algorithms
BoundingBox bounds(const SurfaceMesh& mesh);

//! Flip the orientation of all faces in \p mesh .
//! \ingroup algorithms
void flip_faces(SurfaceMesh& mesh);

//! Compute the minimum area of all faces in \p mesh .
//! \ingroup algorithms
Scalar min_face_area(const SurfaceMesh& mesh);

} // namespace pmp