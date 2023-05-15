#include "Serialize.hpp"

Serialize::Serialize() {}

Serialize::Serialize(const Serialize &src) {
	*this = src;
}

Serialize::~Serialize() {}

Serialize &Serialize::operator=(const Serialize &rhs) {
	(void) rhs;
	return *this;
}

uintptr_t Serialize::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serialize::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
