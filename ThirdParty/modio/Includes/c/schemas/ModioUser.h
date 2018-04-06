#ifndef MODIO_MODIOUSER_H
#define MODIO_MODIOUSER_H

#include "dependencies/json/json.hpp"
#include "Utility.h"
#include "c/ModioC.h"
#include "c/schemas/ModioAvatar.h"

using json = nlohmann::json;

extern "C"
{
  void modioInitUser(ModioUser* user, json user_json);
  void modioFreeUser(ModioUser* user);
}

#endif
