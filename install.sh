#!/bin/bash - 
#===============================================================================
#
#          FILE: install.sh
# 
#         USAGE: ./install.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: zzz.Mraz (), zzz.Mraz@grandstream.com
#  ORGANIZATION: 
#       CREATED: 12/12/2012 04:25:45 PM CST
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error
adb push ~/android2.2/out/target/product/generic/system/lib/libservice.so /system/lib/
adb push ~/android2.2/out/target/product/generic/system/bin/TestServer /data/
adb push ~/android2.2/out/target/product/generic/system/bin/TestClient /data/
