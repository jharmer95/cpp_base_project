# Static library, to be used internally
cpp_base_lib_warnings = project_cpp_warnings
cpp_base_lib_sources = ['lib.cpp']
cpp_base_lib_includes = [include_dir]
cpp_base_lib = static_library('cpp_base', cpp_base_lib_sources, include_directories : cpp_base_lib_includes, install : false)

# Executable
cpp_base_exe_warnings = project_cpp_warnings
cpp_base_exe_sources = ['main.cpp']
cpp_base_exe_includes = [include_dir]
cpp_base_exe = executable('cpp_base', cpp_base_exe_sources, include_directories : cpp_base_exe_includes, link_with : cpp_base_lib, install : true)
