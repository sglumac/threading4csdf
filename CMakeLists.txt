cmake_minimum_required(VERSION 3.16)
project(threading4csdf)

if(MSVC)
  add_compile_options(/W4 /WX)
else()
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

add_subdirectory(threading4csdf)

if(BUILD_CSDF_PTHREAD_SUPPORT)
  add_subdirectory(pthread4csdf)
endif()
