#ifndef MODIO_MODIOMODFILE_H
#define MODIO_MODIOMODFILE_H

#include "dependencies/json/json.hpp"
#include "Utility.h"
#include "c/ModioC.h"
#include "c/schemas/ModioFilehash.h"
#include "c/schemas/ModioDownload.h"

using json = nlohmann::json;

extern "C"
{
  void modioInitModfile(ModioModfile* modfile, json modfile_json);
  void modioFreeModfile(ModioModfile* modfile);
}

#endif
