#include "Application.h"
#include <iostream>


#include"Core/Logger/Logger.h"

namespace GEngine {
	Application::Application(const ApplicationConfiguration& config) : mConfig(config) {
		Logger::Init();
		CORE_LOG_TRACE("trace");
		CORE_LOG_INFO("infor");
		CORE_LOG_DEBUG("DEBUG");
		CORE_LOG_ERROR("Error");
		CORE_LOG_CRITICAL("Crittical");
		CORE_LOG_WARN("warn");
	}

	void Application::Run() {
		std::cout << "App is running: " << mConfig.Width << ", " << mConfig.Height << ", " << mConfig.Title << std::endl;
	}
}