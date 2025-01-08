## 项目介绍
1. 基于C++/FFmpeg6.0开发的视频播放器，支持RTSP/RTMP/HTTPFLV/HLS/文件 等多种协议和格式的视频
2. 跨平台支持Windows/Linux/Mac
3. 相比于网上很多视频播放器demo，本项目功能比较完善稳定，比较具有参考学习意义
### windows系统编译运行
~~~
visual studio 打开 BXC_VideoPlayer.sln （作者使用的是vs2019）

选择 x64/Debug 或 x64/Release都能够直接运行，项目依赖的第三方库ffmpeg 已经配置好相对路径

~~~

### linux系统编译运行
~~~
依赖的第三方库ffmpeg，需要自行编译安装，我用的版本是：ffmpeg-6.0

//编译
mkdir build
cd build
cmake ..
make

//运行
./BXC_VideoPlayer
~~~



