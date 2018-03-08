if(BUILD_TESTING)
    add_executable(test-lo-wang-say Test.cpp)
    target_include_directories(test-lo-wang-say PRIVATE ${PROJECT_SOURCE_DIR}/src)
    target_compile_definitions(test-lo-wang-say PRIVATE ENABLE_LO_WANG_SAY)
endif()

