///////////////////////////////////////////////////////////////////////////////
// NAME:            AnyFileLocator.cpp
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     Method definitions for the AnyFileLocator class.
//
// CREATED:         09/05/2019
//
// LAST EDITED:     09/05/2019
////

#include <SortMedia/FileLocators/AnyFileLocator.h>

#include <FSAdaptor/Path.h>
#include <FSAdaptor/PathWalker.h>

SortMedia::FileLocators::AnyFileLocator
::AnyFileLocator(const FSAdaptor::IFilesystemAdaptor& adaptor)
  : m_adaptor(adaptor)
{}

std::list<FSAdaptor::Path>
SortMedia::FileLocators::AnyFileLocator
::recursivelyListFilesInDirectory(const FSAdaptor::Path& directory) const
{
  FSAdaptor::PathWalker<std::list> pathWalker;
  m_adaptor.walk(pathWalker, directory);

  return std::list<FSAdaptor::Path>{pathWalker.getContainer()};
}

///////////////////////////////////////////////////////////////////////////////