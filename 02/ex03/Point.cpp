/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:08:38 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/08 10:44:54 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed()) { return ; }

Point::Point(float const x, float const y) : x(Fixed(x)), y(Fixed(y)) { return ; }

Point::Point(Point const &src) : x(src.x), y(src.y) { return ; }

Point::~Point() { return ; }

Point	&Point::operator=(Point const &rhs) {
	
	this->x = rhs.x;
	this->y = rhs.y;

	return (*this);
}

float	Point::getX() const{

	return (this->x.toFloat());

}

float	Point::getY() const{

	return (this->y.toFloat());

}

std::ostream	&operator<<(std::ostream &os, Point const &point) {

	os << point.getX() << "." << point.getY();
	return os;
}