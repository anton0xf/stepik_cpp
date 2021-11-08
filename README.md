# Build using [Meson](https://mesonbuild.com/)
Run `meson ./meson` to generate `build.ninja`. \
Then run `ninja -C ./meson` or `meson compile -C ./meson` to compile binaries into `./meson`. \
To test run `ninja -C ./meson test`

# Build using shell scripts
Build: `./buidl` \
Test: `./test` \
Clean: `./clean`
