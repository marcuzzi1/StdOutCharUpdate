﻿# CMakeList.txt : projet CMake pour StdOutCharUpdate, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

project ("StdOutCharUpdate")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (StdOutCharUpdate "StdOutCharUpdate.cpp" "StdOutCharUpdate.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET StdOutCharUpdate PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
