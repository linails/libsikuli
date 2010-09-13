/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>

#include "CoreTestSuite.h"

static CoreTestSuite suite_CoreTestSuite;

static CxxTest::List Tests_CoreTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CoreTestSuite( "CoreTestSuite.h", 18, "CoreTestSuite", suite_CoreTestSuite, Tests_CoreTestSuite );

static class TestDescription_CoreTestSuite_testFindInterfaces : public CxxTest::RealTestDescription {
public:
 TestDescription_CoreTestSuite_testFindInterfaces() : CxxTest::RealTestDescription( Tests_CoreTestSuite, suiteDescription_CoreTestSuite, 30, "testFindInterfaces" ) {}
 void runTest() { suite_CoreTestSuite.testFindInterfaces(); }
} testDescription_CoreTestSuite_testFindInterfaces;

static class TestDescription_CoreTestSuite_testReadImageFromURL : public CxxTest::RealTestDescription {
public:
 TestDescription_CoreTestSuite_testReadImageFromURL() : CxxTest::RealTestDescription( Tests_CoreTestSuite, suiteDescription_CoreTestSuite, 42, "testReadImageFromURL" ) {}
 void runTest() { suite_CoreTestSuite.testReadImageFromURL(); }
} testDescription_CoreTestSuite_testReadImageFromURL;

static class TestDescription_CoreTestSuite_testPageUpDown : public CxxTest::RealTestDescription {
public:
 TestDescription_CoreTestSuite_testPageUpDown() : CxxTest::RealTestDescription( Tests_CoreTestSuite, suiteDescription_CoreTestSuite, 53, "testPageUpDown" ) {}
 void runTest() { suite_CoreTestSuite.testPageUpDown(); }
} testDescription_CoreTestSuite_testPageUpDown;

static class TestDescription_CoreTestSuite_testAXAPI : public CxxTest::RealTestDescription {
public:
 TestDescription_CoreTestSuite_testAXAPI() : CxxTest::RealTestDescription( Tests_CoreTestSuite, suiteDescription_CoreTestSuite, 88, "testAXAPI" ) {}
 void runTest() { suite_CoreTestSuite.testAXAPI(); }
} testDescription_CoreTestSuite_testAXAPI;

static class TestDescription_CoreTestSuite_testGetMouseLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_CoreTestSuite_testGetMouseLocation() : CxxTest::RealTestDescription( Tests_CoreTestSuite, suiteDescription_CoreTestSuite, 94, "testGetMouseLocation" ) {}
 void runTest() { suite_CoreTestSuite.testGetMouseLocation(); }
} testDescription_CoreTestSuite_testGetMouseLocation;

static class TestDescription_CoreTestSuite_testCapture : public CxxTest::RealTestDescription {
public:
 TestDescription_CoreTestSuite_testCapture() : CxxTest::RealTestDescription( Tests_CoreTestSuite, suiteDescription_CoreTestSuite, 114, "testCapture" ) {}
 void runTest() { suite_CoreTestSuite.testCapture(); }
} testDescription_CoreTestSuite_testCapture;

