#ifndef INCLUDED_LEGACY_TEST_HPP
#define INCLUDED_LEGACY_TEST_HPP

// If you want to link multiple files, this define needs to go.
// Or if you don't want to compile the 10k or so lines of catch every time.
#define CATCH_CONFIG_MAIN

#include "catch.hpp"

// Convert a valid_c89_identifier used as a test name into a string literal
// for TEST() and TEST_FIXTURE() macros.

#ifdef TEST
#undef TEST
#endif
#define TEST(Name) TEST_CASE(#Name)

#ifdef TEST_FIXTURE
#undef TEST_FIXTURE
#endif
#define TEST_FIXTURE(class,Name) TEST_CASE_METHOD(class,#Name)

// A suite can be approximated by a namespace

#ifdef SUITE
#undef SUITE
#endif
#define SUITE(Name) namespace Suite##Name

// Wrap CHECK macros

#ifdef CHECK_EQUAL
#undef CHECK_EQUAL
#endif
#define CHECK_EQUAL(LHS,RHS) CHECK((LHS) == (RHS))

#ifdef CHECK_THROW
#undef CHECK_THROW
#endif
#define CHECK_THROW(Expr, Exception) CHECK_THROWS_AS((Expr), Exception)

#endif // INCLUDED_LEGACY_TEST_HPP
