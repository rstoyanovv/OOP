#ifndef CAT_
#define CAT_
#include "Animal.h"
#include <string>

class Cat:public Animal
{

public:
	Cat();
	Cat(std::string name_s, std::string type_s);
	void talk();
};

#endif // !CAT_

