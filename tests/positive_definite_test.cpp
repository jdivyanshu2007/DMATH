#include "matrix_test.hpp"
TEST_F(MatrixTest,PositiveDefiniteWorks){
    EXPECT_TRUE(F.isPositiveDefinite());
    EXPECT_FALSE(E.isPositiveDefinite());
    EXPECT_FALSE(D.isPositiveDefinite());
}