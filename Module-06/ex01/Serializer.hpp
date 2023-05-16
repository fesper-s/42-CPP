#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct {
	std::string name;
	int content;
} Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &src);
	public:
		~Serializer();

		Serializer &operator=(const Serializer &rhs);

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif