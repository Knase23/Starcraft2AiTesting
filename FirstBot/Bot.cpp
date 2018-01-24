
#include "Bot.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include <iterator>

#include "sc2api/sc2_api.h"
#include "sc2lib/sc2_lib.h"

namespace sc2 {

	void Bot::OnGameStart()
	{
		std::cout << "Hello, World!" << std::endl;
	}
	void Bot::OnStep()
	{
		std::cout << Observation()->GetGameLoop() << std::endl;
	}
}
