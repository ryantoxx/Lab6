cmake_minimum_required(VERSION 3.23)
project(Lab6)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab6
        "Source files/Restaurant.cpp" "Header files/Restaurant.h"
        "Source files/Customer.cpp" "Header files/Customer.h"
        "Source files/People.cpp" "Header files/People.h"
        "Source files/Staff.cpp" "Header files/Staff.h"
        "Source files/Hostess.cpp" "Header files/Hostess.h"
        "Source files/Waiter.cpp" "Header files/Waiter.h"
        "Source files/Menu.cpp" "Header files/Menu.h"
        "Source files/BaseMenu.cpp" "Header files/BaseMenu.h"
        "Source files/HardMenu.cpp" "Header files/HardMenu.h"
        "Source files/Sommelier.cpp" "Header files/Sommelier.h"
        "Source files/Chef.cpp" "Header files/Chef.h"
        "Source files/Payment.cpp" "Header files/Payment.h"
        "Model.h" "Controller.cpp" "View.h")
