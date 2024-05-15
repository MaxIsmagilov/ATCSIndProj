
SET(AirfoilTools_HEADERS
    defs.hpp
    point_maker.hpp
    joukowsky.hpp
    karman_trefftz.hpp
    )

SET(AirfoilTools_IMPL
    defs.cpp
    point_maker.cpp
    joukowsky.cpp
    karman_trefftz.cpp
    )

ADD_LIBRARY(AirfoilTools_OBJECTS OBJECT 
    ${AirfoilTools_HEADERS}  
    ${AirfoilTools_IMPL}
    )

TARGET_COMPILE_OPTIONS(
    AirfoilTools_OBJECTS PUBLIC "-std=c++20"
    )

target_include_directories(AirfoilTools_OBJECTS
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

ADD_LIBRARY(AirfoilTools $<TARGET_OBJECTS:AirfoilTools_OBJECTS>)

ADD_LIBRARY(AirfoilTools::AirfoilTools ALIAS AirfoilTools)

SET_TARGET_PROPERTIES( AirfoilTools
    PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
    COMPILE_OPTIONS "-Wall -Wextra -Wpedantic -Werror -std=c++20"
    PUBLIC_HEADER "${AirfoilTools_HEADERS}")

INCLUDE(GNUInstallDirs)

INSTALL(TARGETS AirfoilTools AirfoilTools_OBJECTS
    EXPORT AirfoilTools_TARGETS
    RUNTIME DESTINATION ${CMAKE_INSTAL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTAL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTAL_LIBDIR}
    INCLUDES DESTINATION ${CMAKE_INSTAL_INCLUDEDIR}/ThirdParty
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTAL_INCLUDEDIR}/AirfoilTools
    )

INSTALL( EXPORT AirfoilTools_TARGETS
    FILE AirfoilTools_TARGETS.cmake
    NAMESPACE AirfoilTools::
    DESTINATION ${CMAKE_INSTAL_LIBDIR}/cmake/AirfoilTools)
  
# Add all tests
enable_testing()
include(GoogleTest)
include(CTest)
