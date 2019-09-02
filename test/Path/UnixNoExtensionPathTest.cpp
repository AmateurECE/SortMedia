///////////////////////////////////////////////////////////////////////////////
// NAME:            UnixNoExtensionPathTest.cpp
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     
//
// CREATED:         09/01/2019
//
// LAST EDITED:     09/02/2019
////

#include "gtest/gtest.h"
#include "UnixNoExtensionPathTest.h"

UnixNoExtensionPathTest::UnixNoExtensionPathTest()
  : filename{"test"},
    actualPath{"/this/is/a/" + filename},
    path{SortMedia::Path{actualPath}}
{}

TEST_F(UnixNoExtensionPathTest, StringEquality)
{
  ASSERT_EQ(path.string(), actualPath);
}

TEST_F(UnixNoExtensionPathTest, FilenameEquality)
{
  ASSERT_EQ(path.filename().string(), filename);
}

TEST_F(UnixNoExtensionPathTest, ExtensionEquality)
{
  ASSERT_EQ(path.extension().string(), "");
}

///////////////////////////////////////////////////////////////////////////////
