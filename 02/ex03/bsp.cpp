/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:33:02 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/08 11:32:42 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	isAbove(Point const a, Point const b, Point const point);
bool	isUnder(Point const a, Point const b, Point const point);

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	
	if ((isAbove(a, b, c) && !isAbove(a, b, point)) \
	|| (isUnder(a, b, c) && !isUnder(a, b, point)))
		return (false);
	if ((isAbove(b, c, a) && !isAbove(b, c, point)) \
	|| (isUnder(b, c, a) && !isUnder(b, c, point)))
		return (false);
	if ((isAbove(c, a, b) && !isAbove(c, a, point)) \
	|| (isUnder(c, a, b) && !isUnder(c, a, point)))
		return (false);
	return (true);
}

bool	isAbove(Point const a, Point const b, Point const point) {

	float result = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (point.getX() - a.getX()) * (b.getY() - a.getY());

	if (result > 0)
		return (true);
	return (false);
	
}

bool	isUnder(Point const a, Point const b, Point const point) {
	
	float result = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (point.getX() - a.getX()) * (b.getY() - a.getY());

	if (result < 0)
		return (true);
	return (false);

}
