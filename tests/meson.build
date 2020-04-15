# Dependencies for testing

catch2_dep = dependency('catch2', version : '>= 2.0.0')

cpp_base_test_sources = ['test.cpp']
cpp_base_test_includes = [include_dir]
cpp_base_test_warnings = project_cpp_warnings
cpp_base_test = executable('base_test', cpp_base_test_sources, include_directories : cpp_base_test_includes, link_with : cpp_base_lib, dependencies : [catch2_dep], install : false)
test('cpp_base test', cpp_base_test)
benchmark('cpp_base benchmark', cpp_base_test)

if get_option('enable_fuzz_testing')
    subdir(fuzz)
endif

if get_option('enable_static_testing')
    subdir(static)
endif
