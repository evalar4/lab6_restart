cmake_minimum_required(VERSION 3.10)
project(solver VERSION 0.1.0 LANGUAGES CXX)

# Override version from environment variable
if(DEFINED ENV{VERSION_OVERRIDE})
    set(PROJECT_VERSION $ENV{VERSION_OVERRIDE})
endif()

# Set installation paths
include(GNUInstallDirs)
set(CMAKE_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX}/solver)

# Create executable
add_executable(solver app/main.cpp src/solver.cpp)
target_include_directories(solver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Installation rules
install(TARGETS solver DESTINATION ${CMAKE_INSTALL_BINDIR})

# CPack configuration
set(CPACK_PACKAGE_NAME "solver")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_VENDOR "Your Name")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Quadratic equation solver")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Your Name")
set(CPACK_RPM_PACKAGE_RELEASE 1)
set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}")

# Include CPack module
include(CPack)
