#include "ProgramSystem.h"

bool ProgramSystem::loginUser(std::string username, std::string password)
{
    for (size_t i = 0; i < arrayOfUsers.size(); i++) {
        if (!(arrayOfUsers[i].compare(username, password))) {
            return false;
        }
    }
}
