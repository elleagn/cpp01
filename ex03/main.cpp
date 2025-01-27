/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:07:00 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 11:19:57 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void test(int& blbl)
{
	std::cout << &blbl << std::endl;
}

int	main(void)
{
	int blbl;
	int& ref = blbl;

	std::cout << &blbl << std::endl;
	test(blbl);
}
