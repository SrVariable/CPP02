/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:19:12 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 17:33:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <cmath>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &that);
		Fixed(const int rawBits);
		Fixed(const float rawBits);

		Fixed	&operator=(const Fixed &that);

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &that) const;
		bool	operator<(const Fixed &that) const;
		bool	operator>=(const Fixed &that) const;
		bool	operator<=(const Fixed &that) const;
		bool	operator==(const Fixed &that) const;
		bool	operator!=(const Fixed &that) const;

		Fixed	operator+(const Fixed &that) const;
		Fixed	operator-(const Fixed &that) const;
		Fixed	operator*(const Fixed &that) const;
		Fixed	operator/(const Fixed &that) const;

		Fixed	operator++(int);
		Fixed	operator--(int);

		Fixed	&operator++();
		Fixed	&operator--();

		static Fixed	min(Fixed &f1, Fixed &f2);
		static Fixed	max(Fixed &f1, Fixed &f2);
		static Fixed	min(const Fixed &f1, const Fixed &f2);
		static Fixed	max(const Fixed &f1, const Fixed &f2);

	private:
		int rawBits;
		static const int fractionalBits;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif // FIXED_HPP
