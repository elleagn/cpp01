/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:27:32 by gozon             #+#    #+#             */
/*   Updated: 2025/01/30 10:24:01 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int ac, char **av) {

    std::string fstring = "";
    std::string outfile;

    if (ac != 4) {
        std::cout << "Usage ./replace filename s1 s2" << std::endl;
        return (0);
    }

    if (!file_to_string(av[1], fstring))
    {
        return (1);
    }
    replace_all(fstring, av[2], av[3]);
    outfile = (std::string)av[1] + ".replace";
    if (!string_to_file(fstring, outfile.c_str()))
    {
        return (1);
    }

    return (0);
}
