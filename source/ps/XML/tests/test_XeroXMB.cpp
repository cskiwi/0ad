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

#include "..\..\..\source\ps\XML\tests\test_XeroXMB.h"

static TestXeroXMB suite_TestXeroXMB;

static CxxTest::List Tests_TestXeroXMB = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXeroXMB( "..\\..\\..\\source\\ps\\XML\\tests\\test_XeroXMB.h", 26, "TestXeroXMB", suite_TestXeroXMB, Tests_TestXeroXMB );

static class TestDescription_TestXeroXMB_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeroXMB_test_basic() : CxxTest::RealTestDescription( Tests_TestXeroXMB, suiteDescription_TestXeroXMB, 53, "test_basic" ) {}
 void runTest() { suite_TestXeroXMB.test_basic(); }
} testDescription_TestXeroXMB_test_basic;

static class TestDescription_TestXeroXMB_test_GetFirstNamedItem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeroXMB_test_GetFirstNamedItem() : CxxTest::RealTestDescription( Tests_TestXeroXMB, suiteDescription_TestXeroXMB, 89, "test_GetFirstNamedItem" ) {}
 void runTest() { suite_TestXeroXMB.test_GetFirstNamedItem(); }
} testDescription_TestXeroXMB_test_GetFirstNamedItem;

static class TestDescription_TestXeroXMB_test_doctype_ignored : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeroXMB_test_doctype_ignored() : CxxTest::RealTestDescription( Tests_TestXeroXMB, suiteDescription_TestXeroXMB, 113, "test_doctype_ignored" ) {}
 void runTest() { suite_TestXeroXMB.test_doctype_ignored(); }
} testDescription_TestXeroXMB_test_doctype_ignored;

static class TestDescription_TestXeroXMB_test_complex_parse : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeroXMB_test_complex_parse() : CxxTest::RealTestDescription( Tests_TestXeroXMB, suiteDescription_TestXeroXMB, 120, "test_complex_parse" ) {}
 void runTest() { suite_TestXeroXMB.test_complex_parse(); }
} testDescription_TestXeroXMB_test_complex_parse;

static class TestDescription_TestXeroXMB_test_unicode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeroXMB_test_unicode() : CxxTest::RealTestDescription( Tests_TestXeroXMB, suiteDescription_TestXeroXMB, 126, "test_unicode" ) {}
 void runTest() { suite_TestXeroXMB.test_unicode(); }
} testDescription_TestXeroXMB_test_unicode;

static class TestDescription_TestXeroXMB_test_iso88591 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeroXMB_test_iso88591() : CxxTest::RealTestDescription( Tests_TestXeroXMB, suiteDescription_TestXeroXMB, 142, "test_iso88591" ) {}
 void runTest() { suite_TestXeroXMB.test_iso88591(); }
} testDescription_TestXeroXMB_test_iso88591;

