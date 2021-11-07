# Run 'meson ./meson' to generate build.ninja.
# Then run 'ninja -C ./meson' or 'meson compile -C ./meson'
project('stepik_cpp', 'c', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'c_std=c11', 'cpp_std=c++14'])

srcs_bins = run_command('./sh/list_src_bin').stdout().strip().split('\n')
foreach src_bin : srcs_bins
  sb = src_bin.split('\t')
  src = sb[0]
  bin = sb[1]
  ex = executable(bin, src, install: true)
  if bin.endswith('.test')
    test(src, ex)
  endif
endforeach
