# Project
project('cpp_starter_project', 'cpp', version: '0.1.0.0', license: 'CC0 1.0', meson_version : '>= 0.53', default_options : ['cpp_std=c++17', 'warning_level=3', 'werror=true', 'default_library=static'])

# "Global" Dependencies

# For when pthread required on *NIX systems
thread_dep = dependency('threads')

# Compiler-dependent stuff
cpp = meson.get_compiler('cpp')

if cpp.get_id() in ['gcc', 'g++']
    project_cpp_warnings = ['-Wall', '-Wextra', '-Wpedantic', '-Wshadow', '-Wnon-virtual-dtor', '-Wold-style-cast', '-Wcast-align', '-Wunused', '-Woverloaded-virtual', '-Wconversion', '-Wsign-conversion', '-Wnull-dereference', '-Wdouble-promotion', '-Wformat=2', '-Weffc++', '-Wuseless-cast', '-Wlogical-op', '-Wduplicated-branches', '-Wduplicated-cond', '-Wmisleading-indentation', '-Wswitch-enum']
elif cpp.get_id() in ['clang', 'clang++']
    project_cpp_warnings = ['-Weverything', '-Wno-c++98-compat', '-Wno-c++98-c++11-compat', '-Wno-c++98-c++11-compat-binary-literal', '-Wno-c++98-c++11-c++14-compat', '-Wno-padded']
elif cpp.get_id() == 'msvc'
    project_cpp_warnings = ['/W4', '/w14242', '/w14254', '/w14263', '/w14265', '/w14287', '/we4289', '/w14296', '/w14311', '/w14545', '/w14546', '/w14547', '/w14549', '/w14555', '/w14619', '/w14640', '/w14826', '/w14905', '/w14906', '/w14928']
else
    error('Unsupported compiler: @0@'.format(cpp.get_id()))
endif

# OS-dependent stuff
os = host_machine.system()

if os == 'linux'
    # do linux stuff here
elif os == 'darwin'
    # do macos stuff here
elif os == 'windows'
    # do windows stuff here
else
    error('Unspported OS: @0@'.format(os))
endif

if get_option('use_cppcheck')
    cppcheck = find_program('cppcheck', 'cppcheck.exe', dirs : ['C:\\Program Files\\Cppcheck'])
    cppcheck_flags = get_option('cppcheck_flags')
    run_target('cppcheck', command : [cppcheck, cppcheck_flags, '--project=' + join_paths(meson.build_root(), 'compile_commands.json')])
endif

# Sub-directories
subdir('include')
subdir('src')
subdir('tests')
