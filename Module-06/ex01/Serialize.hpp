#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <stdint.h>

typedef struct {
	std::string name;
	int content;
} Data;

class Serialize
{
	public:
		Serialize();
		Serialize(const Serialize &src);
		~Serialize();

		Serialize &operator=(const Serialize &rhs);

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif