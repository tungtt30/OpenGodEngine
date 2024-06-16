#include "Application.h"
#include <iostream>

namespace GEngine {
	Application::Application(const ApplicationConfiguration& config) : mConfig(config) {

	}

	void Application::Run() {
		std::cout << "App is running: " << mConfig.Width << ", " << mConfig.Height << ", " << mConfig.Title << std::endl;
	}
}