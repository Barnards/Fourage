#pragma once

#include "core.h"

// namespace is an object literal helping with grouping of code

// ~ symbol: In C++, the tilde ~ is used to indicate a destructor for a class.

// virtual keyword: When a destructor is declared as virtual, it is typically 
// part of a base class in a class hierarchy.It allows for proper cleanup 
// when an object of a derived class is destroyed through a pointer to the 
// base class.This enables the correct derived class's destructor to be 
// called if the object is deleted through a base class pointer.

namespace Fourage {

	class FOURAGE_API Application {
		
		public:
			Application();
			virtual ~Application();

			void run();

	};

	// to be defined in a client

	Application* createApplication();
	    


}


                                                                               