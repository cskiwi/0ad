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

#include "..\..\..\source\graphics\tests\test_LOSTexture.h"

static TestLOSTexture suite_TestLOSTexture;

static CxxTest::List Tests_TestLOSTexture = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLOSTexture( "..\\..\\..\\source\\graphics\\tests\\test_LOSTexture.h", 24, "TestLOSTexture", suite_TestLOSTexture, Tests_TestLOSTexture );

static class TestDescription_TestLOSTexture_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLOSTexture_test_basic() : CxxTest::RealTestDescription( Tests_TestLOSTexture, suiteDescription_TestLOSTexture, 27, "test_basic" ) {}
 void runTest() { suite_TestLOSTexture.test_basic(); }
} testDescription_TestLOSTexture_test_basic;

static class TestDescription_TestLOSTexture_test_perf_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLOSTexture_test_perf_DISABLED() : CxxTest::RealTestDescription( Tests_TestLOSTexture, suiteDescription_TestLOSTexture, 61, "test_perf_DISABLED" ) {}
 void runTest() { suite_TestLOSTexture.test_perf_DISABLED(); }
} testDescription_TestLOSTexture_test_perf_DISABLED;

