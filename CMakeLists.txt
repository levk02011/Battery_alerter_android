cmake_minimum_required(VERSION 3.4.1)

add_library( # Sets the name of the library.
             your-jni-library

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/BatInfo.cpp)

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )
target_link_libraries( # Specifies the target library.
                       your-jni-library

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )
