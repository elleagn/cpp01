/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:24:27 by gozon             #+#    #+#             */
/*   Updated: 2025/01/29 16:57:50 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

    Harl harl;

    if (ac != 2) {
        std::cout << "Wrong number of arguments." << std::endl;
        return (1);
    }

    harl.filter(av[1]);

    return (0);
}
