cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

project(Battle-Game)

include_directories(Battle-Game
        src
        src/attacks
        src/weapons
)

set(SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/Character.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/weapons/Weapon.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/weapons/WeaponX.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/weapons/WeaponZ.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/attacks/RegularKick.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/attacks/RegularPunch.cpp"
)

add_executable(Battle-Game ${SOURCES})
