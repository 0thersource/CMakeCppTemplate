#include <gtest/gtest.h>
#include <templ.h>

TEST(templ_class, add) {
  templ_class obj;
  EXPECT_TRUE(obj.add(1, 2) == 3);
}
