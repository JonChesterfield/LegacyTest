# LegacyTest
A wrapper around a better test framework (beauty is in the eye of the beholder and all that)

Unit testing frameworks for C++ are really rather good these days. I especially like free form test names and parsing expressions like CHECK(42 >= 41) at compile time, but a command line interface is appreciated as well. They didn't all start out quite so well, resulting in a large quantity of legacy test code. That is, valuable tests written in suboptimal syntax. Preserving a single testing framework for a code base is a reasonable goal, thus new tests are written in the same framework.

Minimising the test cycle time is important for TDD-style workflows. If the existing test infrastructure is difficult or slow to spin up, a plausible alternative is to develop new (test) code in a brand new text file with a single-header-style test framework. Paste #include "catch.hpp" near the top of a file, bind compile-this-file to the save key and get coding.

As a compromise, this project proposes a paper-thin translation layer, allowing developers to write using a representative old-style syntax (CHECK_EQUAL and similar) while taking advantage of the other features of a modern test framework, such as easily running individual tests and a brutally quick compile time due to having no dependency tree whatsoever. When the code is stable, it can be pasted over into the real project, where it's already syntactically appropriate. Consider renaming LegacyTest.hpp to whatever your normal framework header is called to reduce the required patch-up to zero.

The better framework in question is catch: https://github.com/philsquared/Catch
A copy of the single header distribution is present in this repo for my convenience, pulling the latest version from philsquared directly is recommended.

I can't promise that the translation layer is quite right for your own (possibly homebrew) test framework, but there's a reasonable chance that a similar approach would work. If the macro names are wrong, change them!