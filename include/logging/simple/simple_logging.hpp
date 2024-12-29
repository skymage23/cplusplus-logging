#ifndef CPLUSPLUS_LOGGING_INCLUDE_SIMPLE_SIMPLE_LOGGING
#define CPLUSPLUS_LOGGING_INCLUDE_SIMPLE_SIMPLE_LOGGING
#include <string>

namespace logging {
   namespace simple {
       void log(std::string input);
       void warn(std::string input);
       void debug(std::string input);
       void fatal(std::string input);
   };
};
#endif