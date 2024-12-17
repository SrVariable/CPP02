/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:19:26 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 22:09:04 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	calculateArea(const Point a, const Point b, const Point c)
{
	Fixed area = (a.getX() * (b.getY() - c.getY())
				+ b.getX() * (c.getY() - a.getY())
				+ c.getX() * (a.getY() - b.getY())) / 2;
	if (area < 0)
		return (area * -1);
	return (area);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed area1 = calculateArea(point, a, b);
	Fixed area2 = calculateArea(point, b, c);
	Fixed area3 = calculateArea(point, c, a);

	Fixed mainArea = calculateArea(a, b, c);
	return (mainArea == area1 + area2 + area3);
}
