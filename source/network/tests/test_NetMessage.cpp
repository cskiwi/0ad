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

#include "..\..\..\source\network\tests\test_NetMessage.h"

static TestNetMessage suite_TestNetMessage;

static CxxTest::List Tests_TestNetMessage = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNetMessage( "..\\..\\..\\source\\network\\tests\\test_NetMessage.h", 24, "TestNetMessage", suite_TestNetMessage, Tests_TestNetMessage );

static class TestDescription_TestNetMessage_test_sim : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNetMessage_test_sim() : CxxTest::RealTestDescription( Tests_TestNetMessage, suiteDescription_TestNetMessage, 27, "test_sim" ) {}
 void runTest() { suite_TestNetMessage.test_sim(); }
} testDescription_TestNetMessage_test_sim;

