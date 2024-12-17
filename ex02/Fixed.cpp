/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:24:58 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 20:02:12 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &that)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &that)
		rawBits = that.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &that)
{
	std::cout << "Copy constructor called" << std::endl;
	rawBits = that.getRawBits();
}

Fixed::Fixed(const float rawBits)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = rawBits * (1 << fractionalBits);
}

Fixed::Fixed(const int rawBits)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = rawBits << fractionalBits;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (rawBits);
}

void	Fixed::setRawBits(const int rawBits)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBits;
}

float	Fixed::toFloat(void) const
{
	return (roundf(rawBits) / (1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (rawBits >> fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &that) const
{
	return (rawBits > that.getRawBits());
}

bool	Fixed::operator<(const Fixed &that) const
{
	return (rawBits < that.getRawBits());
}

bool	Fixed::operator>=(const Fixed &that) const
{
	return (rawBits >= that.getRawBits());
}

bool	Fixed::operator<=(const Fixed &that) const
{
	return (rawBits <= that.getRawBits());
}

bool	Fixed::operator==(const Fixed &that) const
{
	return (rawBits == that.getRawBits());
}

bool	Fixed::operator!=(const Fixed &that) const
{
	return (rawBits != that.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &that) const
{
	return (Fixed(toFloat() + that.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &that) const
{
	return (Fixed(toFloat() - that.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &that) const
{
	return (Fixed(toFloat() * that.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &that) const
{
	if (that.toFloat() == 0)
		return (Fixed(0));
	return (Fixed(toFloat() / that.toFloat()));
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	++rawBits;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--rawBits;
	return (*this);
}

Fixed	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}
