///////////////////////////////////////////////////////////////////////////////
// NAME:            UnknownFileType.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     This policy handles operations that occur when a file of
//                  unknown type is encountered.
//
// CREATED:         09/06/2019
//
// LAST EDITED:     09/09/2019
////

#ifndef __ET_UNKNOWNFILETYPEPOLICY__
#define __ET_UNKNOWNFILETYPEPOLICY__

#include <namespaces/Policies.h>
#include <namespaces/Interfaces.h>
#include <SortMedia/Policies/OrganizationalBase.h>

#include <FSAdaptor/namespace.h>

#include <list>
#include <memory>

class SortMedia::Policies::UnknownFileType
  : public OrganizationalBase
{
public:
  UnknownFileType(const FSAdaptor::Path& path,
                        Interfaces::ILogger& logger);

private:
  template<class T>
  using IFList = std::list<std::unique_ptr<T>>;

  virtual IFList<Interfaces::IFileOperation> getOperations()
    const final override;

  Interfaces::ILogger& m_logger;
  const FSAdaptor::Path& m_path;
};

#endif // __ET_UNKNOWNFILETYPEPOLICY__

///////////////////////////////////////////////////////////////////////////////
