add_library(Human
    src/Human.hpp
    src/Human.cpp
)

target_include_directories(Human PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")