#include <stan/math/mix/scal.hpp>
#include <gtest/gtest.h>

TEST(MetaTraits, isConstant) {
  using stan::is_constant;
  using stan::math::fvar;
  using stan::math::var;

  EXPECT_FALSE(is_constant<fvar<var> >::value);
}
