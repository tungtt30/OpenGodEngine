#include "Application.h"

int main() {
	GEngine::Application* app = GEngine::CreateApplication();


	if (app->Init()) {
		app->Run();
	}

	app->Shutdown();
	delete app;


	return 0;
}