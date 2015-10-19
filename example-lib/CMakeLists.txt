include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
)

file(GLOB sources *.cc)
file(GLOB headers *.h)

# Pay attention to the name of the dictionary...
# you want a unique name, not to pick up another .o file,
# e.g. the one of fcc-edm
ROOT_GENERATE_DICTIONARY(exampleroot-MyAnalysisDict *.h LINKDEF LinkDef.h )

add_library(exampleroot-myanalysis SHARED ${sources} ${headers} ${}exampleroot-MyAnalysisDict.cxx)

target_link_libraries(exampleroot-myanalysis utilities datamodel albers ${ROOT_LIBRARIES} ${ROOT_COMPONENT_LIBRARIES})

install(TARGETS exampleroot-myanalysis DESTINATION lib)
