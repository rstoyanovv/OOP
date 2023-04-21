PlantsBook::PlantsBook() {
	bookName = new char[1];
	bookName[0] = '\0';
	plantsList = nullptr;
	//plantsList[0] = '\0';
	cntOfPlants = 0;
	capacity = 10;

}

PlantsBook::PlantsBook(const char* bookNameStr) {
    size_t bookNameStrLength = strlen(bookNameStr);
	
	if (bookNameStrLength > MAX_SIZE) {
		throw std::exception("Book name is invalid. More than 128 chars!");
	}

	bookName = new char[bookNameStrLength + 1];
	strcpy(bookName, bookNameStr);

	cntOfPlants = 0;
	capacity = 10;
	plantsList = new Plant[capacity];
}

PlantsBook::PlantsBook(std::fstream& file) {
        char* typeStr = new char[256]{};
		char* locationStr = new char[16];
		int frequencyInt;

		
		cntOfPlants = 0;
		capacity = 10;
		plantsList = new Plant[capacity];

	    while (!file.eof()) {
		file >> typeStr >> locationStr >> frequencyInt;
		Plant newPlant(typeStr, locationStr, frequencyInt);
		addPlant(newPlant);
	    }
}

void PlantsBook::addPlant(const Plant& newPlant) {
	
	for (size_t i = 0; i < cntOfPlants; i++) {
		if (strcmp(plantsList[i].getType(), newPlant.getType()) == 0) {
			throw std::exception("This type of Plant already exists!");
		}
	}

	if (cntOfPlants >= capacity) {
		resize();
	}

	plantsList[cntOfPlants++] = Plant(newPlant);

}

PlantsBook::PlantsBook(const PlantsBook& other) {

	size_t bookNameStrLength = strlen(other.bookName);
	bookName = new char[bookNameStrLength + 1];
	strcpy(bookName, other.bookName);

	cntOfPlants = other.cntOfPlants;
	capacity = other.capacity;

	plantsList = new Plant[capacity];
	for (size_t i = 0; i < cntOfPlants; i++) {
		plantsList[i] = other.plantsList[i];
	}
	delete[]plantsList;
}

PlantsBook& PlantsBook::operator=(const PlantsBook& other) {
	if (this != &other) {
		delete[] bookName;
		delete[] plantsList;

		size_t bookNameStrLength = strlen(other.bookName);
		bookName = new char[bookNameStrLength + 1];
		strcpy(bookName, other.bookName);

		cntOfPlants = other.cntOfPlants;
		capacity = other.capacity;

		plantsList = new Plant[capacity];
		for (size_t i = 0; i < cntOfPlants; i++) {
			plantsList[i] = other.plantsList[i];
		}
		delete[]plantsList;

	}
	return *this;
}
