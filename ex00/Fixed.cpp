/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:24:58 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 17:09:18 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	rawBits = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &that)
{
	std::cout << "Copy constructor operator" << std::endl;
	if (this != &that)
		rawBits = that.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &that)
{
	std::cout << "Copy constructor called" << std::endl;
	rawBits = that.getRawBits();
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
