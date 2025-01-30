/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:51:21 by gozon             #+#    #+#             */
/*   Updated: 2025/01/30 11:10:15 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool file_to_string(const char *filename, std::string& outstring) {

    std::ifstream ifs(filename);
    std::string line = "";


    if (!ifs.is_open()) {
        std::perror("error while opening file");
        return (false);
    }

    while (std::getline(ifs, line)) {
        outstring.append(line);
        if (!ifs.eof())
        {
            outstring.append("\n");
        }
    }
    if (ifs.bad())
    {
        std::perror("error while reading file");
        ifs.close();
        return (false);
    }

    ifs.close();
    return (true);
}

bool string_to_file(std::string instring, const char *filename)
{
    std::ofstream ofs(filename, std::fstream::out | std::fstream::trunc);

    if (!ofs.is_open()) {
        std::perror("error while opening file");
        return (false);
    }

    ofs << instring;
    if (ofs.bad())
    {
        std::perror("error while reading file");
        ofs.close();
        return (false);
    }

    ofs.close();
    return (true);
}
