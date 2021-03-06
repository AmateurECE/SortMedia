///////////////////////////////////////////////////////////////////////////////
// NAME:            DoNothing.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     A DoNothing Policy that does...nothing.
//
// CREATED:         09/08/2019
//
// LAST EDITED:     09/09/2019
////

#ifndef __ET_DONOTHINGPOLICY__
#define __ET_DONOTHINGPOLICY__

#include <namespaces/Interfaces.h>
#include <namespaces/Policies.h>
#include <SortMedia/Policies/OrganizationalBase.h>
#include <SortMedia/Interfaces/IFileOperation.h>

#include <list>
#include <memory>

class SortMedia::Policies::DoNothing
  : public OrganizationalBase
{
public:
  DoNothing() {}
};

#endif // __ET_DONOTHINGPOLICY__

///////////////////////////////////////////////////////////////////////////////
