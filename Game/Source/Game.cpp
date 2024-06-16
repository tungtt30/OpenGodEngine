#include<GEngine/Core/Entry.h>
#include <iostream>
#include <Core/Logger/Logger.h>


class Game : public GEngine::Application {

public:
	Game(const GEngine::ApplicationConfiguration& config) : GEngine::Application(config) {
		LOG_INFO("infor");
		LOG_TRACE("trace");
		LOG_WARN("warn");
		LOG_ERROR("error");
		LOG_CRITICAL("Critical");
		LOG_DEBUG("debug");
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