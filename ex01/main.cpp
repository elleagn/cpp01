/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:57:12 by gozon             #+#    #+#             */
/*   Updated: 2025/02/03 10:32:54 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "sstream"

int main(int ac, char **av) {

    std::stringstream   nstring;
    int                 N;
    Zombie              *horde;

    if (ac != 3) {
        std::cout << "Usage ./horde number name\n";
        return (1);
    }
    nstring << av[1];
    nstring >> N;

    horde = zombieHorde(N, av[2]);
    if (!horde)
        return (1);
    for (int i = 0; i < N; i++) {
        std::cout << "Zombie number " << i << ": ";
        horde[i].announce();
    }

    delete[] horde;
    return (0);
}
