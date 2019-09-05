cmake_minimum_required(VERSION 3.14)

project(cplus_design_patterns)

set(CMAKE_CXX_STANDARD 14)

set(PATTERNS
        mediator
        command
        template)

foreach (_dir IN ITEMS ${PATTERNS})
    file(GLOB _files "${_dir}/*.cpp")

    message(STATUS "Pattern `${_dir}':")

    foreach (_file IN ITEMS ${_files})
        get_filename_component(_file_name ${_file} NAME_WLE)
        
        message(STATUS "${_file_name} will be built")

        set(_project_name "${_file_name}")

        add_executable(${_project_name} "${_dir}/${_file_name}")
    endforeach ()
endforeach ()