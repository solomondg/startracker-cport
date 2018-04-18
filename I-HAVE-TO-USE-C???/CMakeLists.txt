cmake_minimum_required(VERSION 3.10)
project(I_HAVE_TO_USE_C___ C)

set(CMAKE_C_STANDARD 11)

find_path(BLAS_INCLUDE_DIRS cblas.h
        /usr/include
        /usr/local/include
        $ENV{BLAS_HOME}/include)
find_path(LAPACK_INCLUDE_DIRS lapacke.h
        /usr/include
        /usr/local/include
        $ENV{LAPACK_HOME}/include)

add_executable(I_HAVE_TO_USE_C___ main.c config.h utils.h)