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
	private:
		Serialize();
		Serialize(const Serialize &src);
	public:
		~Serialize();

		Serialize &operator=(const Serialize &rhs);

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif