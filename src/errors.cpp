#include <errors.hpp>

namespace mlopen {

const char* Exception::what() const noexcept
{
    return message.c_str();
}

}