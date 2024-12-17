/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:30:25 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 20:17:59 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point &that) : x(that.x), y(that.y)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point	&Point::operator=(const Point &)
{
	std::cout << "Copy assigment operator called" << std::endl;
	return (*this);
}

const Fixed	&Point::getX(void) const
{
	return (x);
}

const Fixed	&Point::getY(void) const
{
	return (y);
}

bool	Point::operator==(const Point &that) const
{
	return (x == that.getX() && y == that.getY());
}

bool	Point::operator!=(const Point &that) const
{
	return (x != that.getX() || y != that.getY());
}

std::ostream	&operator<<(std::ostream &out, const Point &p)
{
	out << "(" << p.getX() << ", " << p.getY() << ")";
	return (out);
}
