#ifndef INCLUDED_LEGACY_TEST_HPP
#define INCLUDED_LEGACY_TEST_HPP

#include "catch.hpp"

#ifdef TEST
#undef TEST
#endif
#define TEST(X) TEST_CASE(#X)

#ifdef TEST_FIXTURE
#undef TEST_FIXTURE
#endif
#define TEST_FIXTURE(class,X) TEST_CASE_METHOD(class,#X)

#ifdef CHECK_EQUAL
#undef CHECK_EQUAL
#endif
#define CHECK_EQUAL(LHS,RHS) CHECK(LHS == RHS)

#endif // INCLUDED_LEGACY_TEST_HPP
