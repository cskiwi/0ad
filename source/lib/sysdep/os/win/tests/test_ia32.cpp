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

#include "..\..\..\source\lib\sysdep\os\win\tests\test_ia32.h"

static TestIA32 suite_TestIA32;

static CxxTest::List Tests_TestIA32 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestIA32( "..\\..\\..\\source\\lib\\sysdep\\os\\win\\tests\\test_ia32.h", 31, "TestIA32", suite_TestIA32, Tests_TestIA32 );

static class TestDescription_TestIA32_test_rdtsc : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIA32_test_rdtsc() : CxxTest::RealTestDescription( Tests_TestIA32, suiteDescription_TestIA32, 34, "test_rdtsc" ) {}
 void runTest() { suite_TestIA32.test_rdtsc(); }
} testDescription_TestIA32_test_rdtsc;

static class TestDescription_TestIA32_test_ia32_cap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIA32_test_ia32_cap() : CxxTest::RealTestDescription( Tests_TestIA32, suiteDescription_TestIA32, 43, "test_ia32_cap" ) {}
 void runTest() { suite_TestIA32.test_ia32_cap(); }
} testDescription_TestIA32_test_ia32_cap;

