///////////////////////////////////////////////////////////////////////////////
// NAME:            IFileLocator.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     An interface for FileLocator classes.
//
// CREATED:         08/07/2019
//
// LAST EDITED:     08/27/2019
////

#ifndef __ET_IFILELOCATOR__
#define __ET_IFILELOCATOR__

#include <namespaces/Interfaces.h>

class SortMedia::Interfaces::IFileLocator
{
public:
  virtual ~IFileLocator() {};
};

#endif // __ET_IFILELOCATOR__

///////////////////////////////////////////////////////////////////////////////
