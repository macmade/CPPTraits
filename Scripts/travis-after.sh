#!/bin/bash

# Reports code coverage to coveralls.io
source Scripts/xcenv-tests.sh
declare -r DIR_BUILD_TESTS="${OBJECT_FILE_DIR_normal}/${CURRENT_ARCH}/"
xcode-coveralls --include CPPTraits --project CPPTraits.xcodeproj "${DIR_BUILD_TESTS}"
