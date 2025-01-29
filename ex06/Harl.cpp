/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:03:23 by gozon             #+#    #+#             */
/*   Updated: 2025/01/29 16:24:21 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {

    std::cout << "[ DEBUG ] I love having extra bacon for my "
              <<  "7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do!" << std::endl;
}

void    Harl::info(void) {

    std::cout << "[ INFO ] I cannot believe adding extra bacon costs more "
              << "money. You didn’t put enough bacon in my burger! If you did,"
              << " I wouldn’t be asking for more!" << std::endl;

}

void    Harl::warning(void) {

    std::cout << "[ WARNING ] I think I deserve to have some extra bacon for "
              << "free. I’ve been coming for years whereas you started working"
              << " here since last month." << std::endl;

}

void    Harl::error(void) {

    std::cout << "[ ERROR ] This is unacceptable! I want to speak to the "
              << "manager now." << std::endl;

}

void    Harl::complain(std::string level) {

    typedef void (Harl::*mfptr)(void);

    mfptr   fptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*fptr[i])();
            return ;
        }
    }
    std::cout << "Unknown log level." << std::endl;

}
