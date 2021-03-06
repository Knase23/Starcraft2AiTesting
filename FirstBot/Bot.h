#pragma once
#include "sc2api/sc2_interfaces.h"
#include "sc2api/sc2_agent.h"
#include "sc2api/sc2_map_info.h"

namespace sc2 {

    class Bot : public Agent {
    public:
        virtual void OnGameStart() final;
        virtual void OnStep() final;
    };
}
