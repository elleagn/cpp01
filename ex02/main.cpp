/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:03:49 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 09:13:15 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    
    std::string     string = "HI THIS IS BRAIN";
    std::string*    stringPTR = &string;
    std::string&    stringREF = string;

    std::cout << "Address of the string: " << &string << std::endl
              << "Address held by ptr: " << stringPTR << std::endl
              << "Address held by ref: " << &stringREF << std::endl
              << std::endl;

    std::cout << "String value: " << string << std::endl
              << "Value pointed to by ptr: " << *stringPTR << std::endl
              << "Value pointed to by ref: " << stringREF << std::endl;

    return (0);
}
