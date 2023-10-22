#pragma once

#ifdef FOURAGE_PLATFORM_WINDOWS
	// a function we define elsewhere that returns an application

	extern Fourage::Application* Fourage::createApplication();

	// want this to be WINMAIN on windows because we may want to retain certain
	// info on HOW the program was run, for WIN32 API purposes
	int main(int argc, char** argv) {
		// Allocate on heap for now, sandbox could be very large and we want to 
		// control the lifetime explicitly 

		auto app = Fourage::createApplication();
		app->run();
		delete app;
	}

#endif
