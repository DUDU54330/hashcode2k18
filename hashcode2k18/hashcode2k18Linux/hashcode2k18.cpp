// hashcode2k18.cpp : Defines the entry point for the console application.
//
#include "Header.h"
#include "ParseFile.cpp"

void algor(std::shared_ptr<SDR>, std::string);

int main(int ac, char **av)
{
	std::shared_ptr<SDR> sdr = std::make_shared<SDR>();
	ParseFile p(av[1], sdr);
	p.readFile();
	algor(sdr, av[1]);
    return 0;
}