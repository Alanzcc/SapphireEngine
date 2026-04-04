project(
  'SapphireEngine',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : ['warning_level=3', 'cpp_std=c++23'],
)

dependencies = [
  dependency('vulkan', required : true),
  dependency('glfw3', modules: ['glfw']), 
]


sources = [
  'src/SapphireEngine.cpp',
  'src/engine_window/engine_window.cpp',
  'src/engine_window/first_app.cpp',
]

exe = executable(
  'SapphireEngine',
  sources,
  install : true,
  dependencies : dependencies,
)



