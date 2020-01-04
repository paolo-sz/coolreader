
project(zlib)

set(ZLIB_SRC_DIR ${PROJECT_SOURCE_DIR}/../../../../thirdparty/zlib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(ZLIB_SRC_FILES
    ${ZLIB_SRC_DIR}/adler32.c  ${ZLIB_SRC_DIR}/crc32.c    
${ZLIB_SRC_DIR}/infback.c  ${ZLIB_SRC_DIR}/inflate.c   
${ZLIB_SRC_DIR}/uncompr.c
${ZLIB_SRC_DIR}/compress.c  
${ZLIB_SRC_DIR}/deflate.c  ${ZLIB_SRC_DIR}/gzio.c     
${ZLIB_SRC_DIR}/inffast.c  ${ZLIB_SRC_DIR}/inftrees.c  
${ZLIB_SRC_DIR}/trees.c    ${ZLIB_SRC_DIR}/zutil.c

)

add_library(z STATIC ${ZLIB_SRC_FILES})
