/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:24:27 by gozon             #+#    #+#             */
/*   Updated: 2025/01/30 11:09:36 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {

    Harl harl;

    std::cout << "DEBUG:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nINFO:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nWARNING:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nERROR:" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\nRANDOM:" << std::endl;
    harl.complain("RANDOM");
    
    return (0);
}
