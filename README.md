# Unix 环境编译 4.5.0

### 环境
docker pull wireshark/wireshark-ubuntu-dev:latest

### 编译
docker run --name ubuntu_wireshark -itd -v /root/wireshark:/root wireshark/wireshark-ubuntu-dev

docker exec -it ubuntu_wireshark /bin/bash

apt update && apt install libprotobuf-c-dev -y

cd build && cmake ..

cd ../ && make clean && make -j12 && make install
 
ldconfig -p | grep libwireshark.so  # 验证

### 保存为基础镜像
docker commit ubuntu_wireshark repository/name:tag



# Win 环境编译

install msys2
参考官方文档：https://www.wireshark.org/docs/wsdg_html_chunked/ChSrcBuildFirstTime.html

### 环境
详见：[text](https://www.wireshark.org/docs/wsdg_html_chunked/ChSetupWindows.html)（win编译需要安装大量依赖包）
### 编译
打开vs developer command prompt for vs 2022控制台

mkdir C:\Development

cd C:\Development

mkdir C:\Development\wsbuild64

cd C:\Development\wsbuild64

set WIRESHARK_BASE_DIR=C:\Development

set WIRESHARK_LIB_DIR=C:\wireshark-x64-libs

set WIRESHARK_QT6_PREFIX_PATH=D:\QT\6.5.3\msvc2019_64

set WIRESHARK_VERSION_EXTRA=v4.4.4

cmake -G "Visual Studio 17 2022" -A x64 ..\wireshark

msbuild /m /p:Configuration=RelWithDebInfo Wireshark.sln

msbuild /m /p:Configuration=RelWithDebInfo Wireshark.sln /t:Clean # 若出现失败需要重置当前缓存

open to *.sln
