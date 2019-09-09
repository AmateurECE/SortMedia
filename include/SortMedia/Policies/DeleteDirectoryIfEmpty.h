///////////////////////////////////////////////////////////////////////////////
// NAME:            DeleteDirectoryIfEmpty.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     Interface for a policy that creates operations to delete a
//                  directory if it is empty at apply-time.
//
// CREATED:         09/09/2019
//
// LAST EDITED:     09/09/2019
////

#ifndef __ET_POLICIES_DELETEDIRECTORYIFEMPTY__
#define __ET_POLICIES_DELETEDIRECTORYIFEMPTY__

#include <namespaces/Policies.h>
#include <SortMedia/Policies/OrganizationalBase.h>

#include <FSAdaptor/Path.h>

#include <list>
#include <memory>

class SortMedia::Policies::DeleteDirectoryIfEmpty
  : public OrganizationalBase
{
public:
  DeleteDirectoryIfEmpty(FSAdaptor::Path directory);

private:
  template<class T>
  using IFList = std::list<std::unique_ptr<T>>;

  virtual IFList<Interfaces::IFileOperation> getOperations()
    const final override;
  
  FSAdaptor::Path m_directory;
};

#endif // __ET_POLICIES_DELETEDIRECTORYIFEMPTY__

///////////////////////////////////////////////////////////////////////////////