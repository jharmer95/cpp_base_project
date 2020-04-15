conf_data = configuration_data()
conf_data.set('version', meson.project_version())
configure_file(input : 'version.hpp.in', output : 'version.hpp', configuration : conf_data)
include_dir = include_directories('.')

header_list = ['printer.hpp']

install_headers(header_list)
