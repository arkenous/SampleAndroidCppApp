cmake_minimum_required(VERSION 3.6)

find_library ( log-lib log )

add_library ( calculate SHARED calculate.cpp jni_main.cpp )
target_link_libraries ( calculate ${log-lib} )