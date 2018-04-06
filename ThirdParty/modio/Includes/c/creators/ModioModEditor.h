#ifndef MODIO_MODIO_MOD_EDITOR_H
#define MODIO_MODIO_MOD_EDITOR_H

#include "Globals.h"
#include "Utility.h"
#include "c/ModioC.h"
#include "c/schemas/ModioListNode.h"

namespace modio
{
  std::multimap<std::string, std::string> getModEditorCurlFormCopyContentsParams(ModioModEditor* mod_editor);
}

#endif
