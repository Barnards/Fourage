#include "log.h"

namespace Fourage {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	// inspect the wiki's custom formatting section for pattern options
	// Colour, timestamp, name of logger(core/client), logmessage
	void Log::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("FOURAGE");
		s_CoreLogger->set_level();
		s_ClientLogger = spdlog::stdout_color_mt("APP");
	}
}


