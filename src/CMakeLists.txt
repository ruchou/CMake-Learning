

INCLUDE_DIRECTORIES(${playground_SOURCE_DIR}/lib)
LINK_DIRECTORIES (${playground_BINARY_DIR}/lib)
ADD_EXECUTABLE (hello hello_main.cpp)
TARGET_LINK_LIBRARIES (hello hello_lib)

find_package (BZip2)
if (BZIP2_FOUND)
    INCLUDE_DIRECTORIES(${BZIP_INCLUDE_DIRS})
    TARGET_LINK_LIBRARIES (hello ${BZIP2_LIBRARIES})
    message(bzip found)
else (BZIP2_FOUND)
    message(bzip not found)
endif(BZIP2_FOUND)