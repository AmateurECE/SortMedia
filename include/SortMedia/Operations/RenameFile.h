///////////////////////////////////////////////////////////////////////////////
// NAME:            RenameFile.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     Renames a file.
//
// CREATED:         09/11/2019
//
// LAST EDITED:     09/11/2019
////

#ifndef __ET_RENAMEFILE__
#define __ET_RENAMEFILE__

#include <namespaces/Operations.h>
#include <SortMedia/FileTypes/LibraryFile.h>
#include <SortMedia/Interfaces/IFileOperation.h>

#include <FSAdaptor/namespace.h>
#include <FSAdaptor/Path.h>

class SortMedia::Operations::RenameFile
  : public Interfaces::IFileOperation
{
public:
  RenameFile(FileTypes::LibraryFile file, FSAdaptor::Path newName,
             const FSAdaptor::IFilesystemAdaptor& adaptor = s_stdAdaptor);

  virtual void apply() final override;
  virtual void revert() final override;

private:
  FileTypes::LibraryFile m_file;
  FSAdaptor::Path m_newName;
  FSAdaptor::Path m_oldName;
  const FSAdaptor::IFilesystemAdaptor& m_adaptor;
  static const FSAdaptor::IFilesystemAdaptor& s_stdAdaptor;
};

#endif // __ET_RENAMEFILE__

///////////////////////////////////////////////////////////////////////////////
