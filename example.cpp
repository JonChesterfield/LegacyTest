#include "LegacyTest.hpp"

#include <stdexcept>

SUITE(my_first_suite)
{
  struct fixture
  {
    fixture() : truth(42) {/*setup*/}
    ~fixture() {/*teardown*/}

    int truth;
  };

  TEST(two_squared_is_four)
  {
    CHECK_EQUAL(2*2,4);
  }

  TEST_FIXTURE(fixture,using_a_fixture)
  {
    CHECK_EQUAL(truth,42);
  }

  void blowup()
  {
    throw std::invalid_argument("oh woe");
  }

  TEST(notice_when_we_throw)
  {
    CHECK_THROW(blowup(),std::invalid_argument);
  }

}
