# LegacyTest
A wrapper around a better test framework

Unit testing frameworks for C++ are really rather good these days. They didn't all start out quite so well, resulting in a large quantity of legacy test code. Preserving a single testing framework for a code base is a reasonable goal.

As a compromise, this project proposes a paper-thin translation layer, allowing developers to write using a representative old-style syntax (CHECK_EQUAL and similar) while taking advantage of the features of a modern test framework.