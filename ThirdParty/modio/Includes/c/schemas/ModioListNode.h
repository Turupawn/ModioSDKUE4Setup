#ifndef MODIO_MODIOLISTNODE_H
#define MODIO_MODIOLISTNODE_H

#include "dependencies/json/json.hpp"
#include "Utility.h"
#include "c/ModioC.h"

using json = nlohmann::json;

extern "C"
{
  void modioInitNode(ModioListNode* node);
  void modioFreeNodeList(ModioListNode* node_list);
}

#endif
