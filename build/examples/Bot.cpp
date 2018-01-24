#include "Bot.h"
using namespace sc2;

void Bot::OnGameStart(){
	std::cout << "Hello, World!" << std::endl;
}
void Bot::OnStep() {
	std::cout << Observation()->GetGameLoop() << std::endl;
}