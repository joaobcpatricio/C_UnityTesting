add_library(production STATIC
    BasePro1.c
    )

target_include_directories(production PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

