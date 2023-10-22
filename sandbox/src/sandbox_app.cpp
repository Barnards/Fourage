
// this include is possible thanks to adding "$(SolutionDir)fourage/src;" to
// additional include directories in c++ properties
#include <fourage.h>

class Sandbox : public Fourage::Application {

	public:
		Sandbox() {

		}
		~Sandbox() {

		}
};

Fourage::Application* Fourage::createApplication() {
	return new Sandbox();
}