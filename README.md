# Unix 环境编译 4.5.0

## 环境
docker pull ubuntu:latest

## 安装依赖
``` bash
docker run --name wireshark_ubuntu -itd -v /root/wireshark:/root ubuntu:latest
docker exec -it wireshark_ubuntu /bin/bash

apt update && apt install libprotobuf-c-dev libsystemd-dev lua5.3 liblua5.3-dev  -y
tools/debian-setup.sh --install-qt6-deps

##时区设置 5 69 上海时区
cd build && cmake -DENABLE_LUA=ON -DENABLE_PLUGINS=ON .. 
make -j12 && make install

## 验证 
ldconfig -p | grep libwireshark.so  
ldconfig -v | grep tshark
wireshark -v # 输出with需包含 +Lua x.x.x
## 保存为基础镜像
docker commit wireshark:ubuntu
docker commit docker.fengchuang.tech/menace/tshark:ubuntu
```

# Win 环境编译

install msys2
参考官方文档：https://www.wireshark.org/docs/wsdg_html_chunked/ChSrcBuildFirstTime.html

## 环境
详见：[text](https://www.wireshark.org/docs/wsdg_html_chunked/ChSetupWindows.html)

## 编译
``` bash
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
```


# 常见错误

1. Cmakefile文件已存在
rm -rf CMakeCache.txt CMakeFiles

2. 找不到到qt6包源
更换镜像源测试

3.tools/xxx-steup.sh执行出错
替换为tools-bak下同名可执行文件测试