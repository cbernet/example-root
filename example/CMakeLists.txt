
add_executable(exampleroot-read read.cc)

target_link_libraries(exampleroot-read utilities datamodel albers)

install(TARGETS exampleroot-read DESTINATION bin)
