include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
)

file(GLOB sources *.cc)
file(GLOB headers *.h)

# Pay attention to the name of the dictionary...
# you want a unique name, not to pick up another .o file,
# e.g. the one of fcc-edm
ROOT_GENERATE_DICTIONARY(exampleroot-toolsDict *.h LINKDEF LinkDef.h )
add_library(exampleroot-tools SHARED ${sources} ${headers} ${}exampleroot-toolsDict.cxx)

# add_library(exampleroot-tools SHARED ${sources} ${headers} )

target_link_libraries(exampleroot-tools ${ROOT_LIBRARIES} ${ROOT_COMPONENT_LIBRARIES})

install(TARGETS exampleroot-tools DESTINATION lib)
