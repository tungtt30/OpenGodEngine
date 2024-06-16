#include<GEngine/Core/Entry.h>
#include <iostream>


class Game : public GEngine::Application {

public:
	Game(const GEngine::ApplicationConfiguration& config) : GEngine::Application(config) {

	}

	virtual bool Init() override {
		std::cout << "Game is inited \n";
		return true;
	}

	virtual void Shutdown() override {
		std::cout << "Game is shutdowned \n";
	}
};


GEngine::Application* GEngine::CreateApplication() {


	GEngine::ApplicationConfiguration appConfig;
	appConfig.Width = 800;
	appConfig.Height = 600;
	appConfig.Title = "GEngine Open Alpha";

	return new Game(appConfig);
}