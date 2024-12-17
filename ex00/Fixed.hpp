/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:19:12 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/12/17 17:09:26 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &that);

		Fixed	&operator=(const Fixed &that);

		int		getRawBits() const;
		void	setRawBits(int const raw);

	private:
		int rawBits;
		static const int fractionalBits;
};

#endif // FIXED_HPP
