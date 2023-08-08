/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:05:12 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/07 20:09:26 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point {

	private:

	Fixed	x;
	Fixed	y;

	public:

	Point();
	Point(float const x, float const y);
	Point(Point const &src);
	~Point();

	float	getX() const;
	float	getY() const;

	Point &operator=(Point const &rhs);

};

std::ostream	&operator<<(std::ostream &os, Point const &point);

#endif