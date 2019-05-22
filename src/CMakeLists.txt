


INCLUDE_DIRECTORIES(${playground_SOURCE_DIR}/lib)
LINK_DIRECTORIES (${playground_BINARY_DIR}/lib)
ADD_EXECUTABLE (hello hello_main.cpp)
TARGET_LINK_LIBRARIES (hello hello_lib)
