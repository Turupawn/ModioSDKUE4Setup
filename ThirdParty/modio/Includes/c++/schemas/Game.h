#ifndef MODIO_GAME_H
#define MODIO_GAME_H

#include "c/schemas/ModioGame.h"
#include "Globals.h"
#include "c++/schemas/User.h"
#include "c++/schemas/Icon.h"
#include "c++/schemas/Logo.h"
#include "c++/schemas/Header.h"
#include "c++/schemas/GameTagOption.h"

namespace modio
{
  class Game
  {
  public:
    u32 id;
    u32 status;
    u32 date_added;
    u32 date_updated;
    u32 date_live;
    u32 presentation_option;
    u32 community_options;
    u32 submission_option;
    u32 curation_option;
    u32 revenue_options;
    u32 api_access_options;
    std::string ugc_name;
    std::string homepage;
    std::string name;
    std::string name_id;
    std::string summary;
    std::string instructions;
    std::string profile_url;
    User submitted_by;
    Icon icon;
    Logo logo;
    Header header;
    std::vector<GameTagOption> game_tag_options;

    void initialize(ModioGame game);
    json toJson();
  };
}

#endif
