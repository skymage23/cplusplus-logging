#include <cstdlib>
#include <format>
#include <iostream>
#include <string>

#include <logging/common.hpp>
namespace common = logging::common;

#include <logging/simple/simple_logging.hpp>

namespace logging {
    namespace simple {
        void write(std::string prefix, std::string message){
            std::cout << std::format(
                common::log_template,
                prefix,
                message
            );
        }

        void write_err(
            bool flush,
            std::string prefix,
            std::string message
        ){
            std::cerr << std::format(
                common::log_template,
                prefix,
                message
            );

            if (flush){
                std::cerr.flush();
            }
        }

        void log(std::string input){
           write("LOG", input); 
        }

        void warn(std::string input) {
            write_err(false, "WARN", input);
        }

        void debug(std::string input) {
            write_err(false, "DEBUG", input);
        }

        void fatal(std::string input) noreturn {
            write_err(true, "FATAL", input);
            exit(EXIT_SUCCESS);
        }
    };
};