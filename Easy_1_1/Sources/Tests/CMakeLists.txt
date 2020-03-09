set(SOURCES
        Tests.cpp
        )

add_executable(simple_test ${SOURCES})

target_link_libraries(simple_test PUBLIC Queue)
target_link_libraries(simple_test PUBLIC gtest_main)

set_property(TARGET simple_test PROPERTY FOLDER "Tests/Easy_1_1")