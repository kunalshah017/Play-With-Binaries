#!/bin/bash

# Get the repository name and owner
repository=`basename $(git rev-parse --show-toplevel)`
owner=`basename $(dirname $(git rev-parse --show-toplevel))`

# Get the list of contributors
contributors=`curl -s https://api.github.com/repos/kunalshah017/Play-With-Binaries/contributors?per_page=1000 | grep '"login":' | awk -F'"' '{print "- @"$4}'`

# Update the README.md file with the list of contributors
sed -i -e "/<!--START_SECTION:contributors-->/, /<!--END_SECTION:contributors-->/c\\
<!--START_SECTION:contributors-->\\
$contributors\\
<!--END_SECTION:contributors-->\\
" README.md
