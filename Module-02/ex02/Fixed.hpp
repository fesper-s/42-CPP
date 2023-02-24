/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:33:07 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/24 20:07:48 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		Fixed(int const fixedPointValue);
		Fixed(float const fixedPointValue);
		~Fixed(void);
	
		Fixed &operator=(Fixed const &fixed);
		bool operator>(Fixed const &fixed);
		bool operator<(Fixed const &fixed);
		bool operator>=(Fixed const &fixed);
		bool operator<=(Fixed const &fixed);
		bool operator==(Fixed const &fixed);
		bool operator!=(Fixed const &fixed);
		Fixed operator+(Fixed const &fixed);
		Fixed operator-(Fixed const &fixed);
		Fixed operator*(Fixed const &fixed);
		Fixed operator/(Fixed const &fixed);
		Fixed operator++(int);
		Fixed &operator++(void);
		Fixed operator--(int);
		Fixed &operator--(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
