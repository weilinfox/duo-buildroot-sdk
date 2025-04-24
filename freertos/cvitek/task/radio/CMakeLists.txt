file(GLOB _SOURCES "*.c")

include_directories(src)
include_directories(include)
include_directories(${CMAKE_INSTALL_INC_PREFIX}/arch)
include_directories(${CMAKE_INSTALL_INC_PREFIX}/common)
include_directories(${CMAKE_INSTALL_INC_PREFIX}/hal/config)
include_directories(${CMAKE_INSTALL_INC_PREFIX}/kernel)

add_library(radio STATIC ${_SOURCES})
install(TARGETS radio DESTINATION lib)

