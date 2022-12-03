cmake_minimum_required(VERSION 3.24)
project(Tex_Rex)

set(CMAKE_CXX_STANDARD 17)

find_package( PkgConfig REQUIRED)

pkg_search_module( TESSERACT REQUIRED tesseract )

pkg_search_module( LEPTONICA REQUIRED lept )

include_directories( ${TESSERACT_INCLUDE_DIRS} )

include_directories( ${LEPTONICA_INCLUDE_DIRS} )

link_directories( ${TESSERACT_LIBRARY_DIRS} )

link_directories( ${LEPTONICA_LIBRARY_DIRS} )

add_executable(Tex_Rex main.cpp)

target_link_libraries( Tex_Rex ${TESSERACT_LIBRARIES} )

target_link_libraries( Tex_Rex ${LEPTONICA_LIBRARIES} )
