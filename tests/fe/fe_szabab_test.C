
#include "libmesh_config.h"

#ifdef LIBMESH_ENABLE_HIGHER_ORDER_SHAPES

#include "fe_test.h"

INSTANTIATE_FETEST(FIRST, SZABAB, EDGE2);
INSTANTIATE_FETEST(FIRST, SZABAB, TRI3);
INSTANTIATE_FETEST(FIRST, SZABAB, QUAD4);

INSTANTIATE_FETEST(SECOND, SZABAB, EDGE3);
INSTANTIATE_FETEST(SECOND, SZABAB, TRI6);
INSTANTIATE_FETEST(SECOND, SZABAB, QUAD9);

INSTANTIATE_FETEST(THIRD, SZABAB, EDGE3);
INSTANTIATE_FETEST(THIRD, SZABAB, TRI6);
INSTANTIATE_FETEST(THIRD, SZABAB, QUAD9);

#endif // LIBMESH_ENABLE_HIGHER_ORDER_SHAPES
