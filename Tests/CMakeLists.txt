

add_library(test1 STATIC
    TestDumbExample.c
    )

target_include_directories(test1 PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)



