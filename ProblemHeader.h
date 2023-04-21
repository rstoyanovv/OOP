#ifndef PLANT_
#define PLANT_
#include <iostream>
#include <fstream>

class Plant {
private:
	char* type;
	char* location;
	int frequency;

public:
	Plant();
	Plant(const char* typeStr, const char* locationStr, const int frequencyInt);

	Plant(const Plant& other);
	Plant& operator=(const Plant& other);

	Plant(Plant&& other) noexcept;
	Plant& operator=(Plant&& other) noexcept;
	~Plant();

	const char* getType() const;
	const char* getLocation() const;
	int getFrequency() const;

};

#endif // !PLANT_
