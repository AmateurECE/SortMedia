///////////////////////////////////////////////////////////////////////////////
// NAME:            MusicTagEditorAdaptorFactory.h
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     Factory for descendants of IMusicTagEditorAdaptor.h
//
// CREATED:         03/31/2020
//
// LAST EDITED:     03/31/2020
////

#ifndef __ET_MUSICTAGEDITORADAPTORFACTORY__
#define __ET_MUSICTAGEDITORADAPTORFACTORY__

#include <FSAdaptor/Path.h>

#include <namespaces/Factories.h>
#include <SortMedia/Interfaces/IMusicTagEditorAdaptor.h>

class SortMedia::Factories::MusicTagEditorAdaptorFactory
{
public:
  MusicTagEditorAdaptorFactory();
  std::unique_ptr<Interfaces::IMusicTagEditorAdaptor>
  makeMusicTagEditorAdaptor(const FSAdaptor::Path&) const;
};

#endif // __ET_MUSICTAGEDITORADAPTORFACTORY__

///////////////////////////////////////////////////////////////////////////////
