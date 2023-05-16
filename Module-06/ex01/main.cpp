#include "Serializer.hpp"

int main() {
	Data data;

	data.name = "yourFacebookData";
	data.content = 42;
	std::cout << "data name is " << data.name << " and data content is " << data.content << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);
	std::cout << "ptr is " << ptr << std::endl;
	Data *dataPtr = Serializer::deserialize(ptr);
	std::cout << "dataPtr name is " << dataPtr->name << " and dataPtr content is " << dataPtr->content << std::endl;
	return 0;
}
