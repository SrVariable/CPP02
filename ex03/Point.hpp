/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:22:07 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 22:03:34 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include "Fixed.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Point
{
	public:
		Point();
		~Point();
		Point(const Point &that);
		Point(const float x, const float y);

		Point	&operator=(const Point &that);

		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;

		bool	operator==(const Point &that) const;
		bool	operator!=(const Point &that) const;

	private:
		Fixed const x;
		Fixed const y;
};

bool			bsp(const Point a, const Point b, const Point c, const Point p);
std::ostream	&operator<<(std::ostream &out, const Point &p);

#endif // POINT_HPP
