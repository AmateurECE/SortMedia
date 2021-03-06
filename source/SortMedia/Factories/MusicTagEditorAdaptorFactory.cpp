///////////////////////////////////////////////////////////////////////////////
// NAME:            MusicTagEditorAdaptorFactory.cpp
//
// AUTHOR:          Ethan D. Twardy <edtwardy@mtu.edu>
//
// DESCRIPTION:     Factory for descendants of IMusicTagEditorAdaptor.h
//
// CREATED:         03/31/2020
//
// LAST EDITED:     03/31/2020
////

#include <SortMedia/Factories/MusicTagEditorAdaptorFactory.h>

#include <SortMedia/Adaptors/TagLibAdaptor.h>
#include <SortMedia/Adaptors/TagLibFLACAdaptor.h>

SortMedia::Factories::MusicTagEditorAdaptorFactory
::MusicTagEditorAdaptorFactory()
{}

std::unique_ptr<SortMedia::Interfaces::IMusicTagEditorAdaptor>
SortMedia::Factories::MusicTagEditorAdaptorFactory
::makeMusicTagEditorAdaptor(const FSAdaptor::Path& path) const
{
  if (path.extension() == ".flac")
    {
      return std::make_unique<Adaptors::TagLibFLACAdaptor>(path);
    }
  return std::make_unique<Adaptors::TagLibAdaptor>(path);
}

///////////////////////////////////////////////////////////////////////////////
