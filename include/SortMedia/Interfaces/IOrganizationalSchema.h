///////////////////////////////////////////////////////////////////////////////
// NAME:            IOrganizationalSchema.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     An interface for Organizational Schema classes.
//
// CREATED:         08/07/2019
//
// LAST EDITED:     09/12/2019
////

#ifndef __ET_IORGANIZATIONALSCHEMA__
#define __ET_IORGANIZATIONALSCHEMA__

#include <namespaces/Interfaces.h>

#include <FSAdaptor/namespace.h>

class SortMedia::Interfaces::IOrganizationalSchema
{
public:
  virtual ~IOrganizationalSchema() {}
  virtual void applyToFile(const FSAdaptor::Path& file,
                           const FSAdaptor::Path& rootOfLibrary) const = 0;
};

#endif // __ET_IORGANIZATIONALSCHEMA__

///////////////////////////////////////////////////////////////////////////////
