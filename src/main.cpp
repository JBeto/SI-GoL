#include <iostream>
#include "cxxopts.hpp"
#include "gameOfLife.hpp"

int main(int argc, char* argv[])
{
    try
    {
        cxxopts::Options options(argv[0], " - example command line options");
        options
            .positional_help("[optional args]")
            .show_positional_help();

        options.add_options()
            ("h,help", "Print help")
            ("f,fps", "Game FPS", cxxopts::value<size_t>(), "N")
        ;

        options.parse_positional({"fps"});

        auto result = options.parse(argc, argv);

        if (result.count("help"))
        {
            std::cout << options.help({""}) << std::endl;
            exit(0);
        }

        if (result.count("fps"))
        {
            size_t fps = result["fps"].as<size_t>();
            // Put in code to play the game fps here
            std::cout << fps << std::endl;
        }
    } 
    catch (const cxxopts::OptionException& e) {
        std::cout << "error parsing options: " << e.what() << std::endl;
        exit(1);
    }

    return 0;
}