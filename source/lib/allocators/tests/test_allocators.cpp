/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include "precompiled.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>

#include "..\..\..\source\lib\allocators\tests\test_allocators.h"

static TestAllocators suite_TestAllocators;

static CxxTest::List Tests_TestAllocators = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAllocators( "..\\..\\..\\source\\lib\\allocators\\tests\\test_allocators.h", 28, "TestAllocators", suite_TestAllocators, Tests_TestAllocators );

static class TestDescription_TestAllocators_test_da : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAllocators_test_da() : CxxTest::RealTestDescription( Tests_TestAllocators, suiteDescription_TestAllocators, 31, "test_da" ) {}
 void runTest() { suite_TestAllocators.test_da(); }
} testDescription_TestAllocators_test_da;

