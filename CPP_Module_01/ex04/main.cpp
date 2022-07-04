/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:20 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 15:35:33 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int    check_error(int argc, char **argv)
{
    if(argc != 4 || argv[2] == NULL || argv[3] == NULL)
    {
        std::cout << "error" << std::endl;
        return 1;
    }
    return (0);
}

int main (int argc, char **argv) 
{
    std::ifstream int_file;
    std::ofstream out_file;
    std::string myline;
    size_t found; 
    int_file.open(argv[1]);
    if(int_file.fail())
    {
        std::cout << "error file" << std::endl;
        return(0);
    }
    if(check_error(argc, argv))
        return(0);
    std::string file = argv[1];
    std::string up_file = file.append(".remplace");
    out_file.open(up_file, std::ofstream::trunc);
    while (getline (int_file, myline))
    {
        while (1)
        {
            found = myline.find(argv[2], 0);
            std::cout << found << std::endl;
            if(found == std::string::npos)
            {
                out_file << myline;
                break;
            }
            out_file << myline.substr(0, found) << argv[3];
            myline = myline.substr(found + strlen(argv[2]));
        }
        if (int_file.eof())
			break ;
        out_file << "\n";
    }
    return 0;
}
