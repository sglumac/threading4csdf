add_library(pthread4csdf STATIC pthread4csdf.c)

target_include_directories(pthread4csdf PUBLIC .)
target_link_libraries(pthread4csdf threading4csdf Threads::Threads)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
