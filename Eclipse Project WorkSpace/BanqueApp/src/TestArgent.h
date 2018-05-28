/*
 * TestArgent.h
 *
 *  Created on: 2015/12/01
 *      Author: Fahd
 */

#ifndef TESTARGENT_H_
#define TESTARGENT_H_


#include <cppunit/extensions/TestSuiteFactory.h>
#include <cppunit/extensions/TestFixtureFactory.h>
#include <cppunit/extensions/HelperMacros.h>


class TestArgent : public CPPUNIT_NS::TestFixture
{

  CPPUNIT_TEST_SUITE( TestArgent );
  CPPUNIT_TEST( testConstructor );
  CPPUNIT_TEST( testEqual );
  CPPUNIT_TEST( testAdd );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void testConstructor();
  void testEqual();
  void testAdd();

};


#endif /* TESTARGENT_H_ */
