CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT(data_structures)

SET(SRCS "heap/heap.cpp")
ADD_LIBRARY(data_structures SHARED ${SRCS})