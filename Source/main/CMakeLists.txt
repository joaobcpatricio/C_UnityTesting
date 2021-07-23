add_library(main STATIC
    TutorialConfig.cpp
    )

target_include_directories(main PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)


# add the executable
add_executable(Tutorial TutorialConfig.cpp)