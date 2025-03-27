#!/bin/bash

find . -type f -name "*.exe" -exec rm -f {} \;

echo "All .exe files have been removed."
