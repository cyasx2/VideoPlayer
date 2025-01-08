#include "VideoPlayer.h"
#include <iostream>
#include <string>
//int main(int argc, char* argv[]) {
//    //播放一个RTSP视频流地址
//    //const char* input = "http://127.0.0.1:8080/test.flv";
//
//    //播放一个本地视频文件
//    const char* input = "C:Users/xm/Videos/xuan.mp4";
//
//    VideoPlayer player;
//    player.start(input);
//
//    return 0;
//}

int main() {
    std::string filePath;

    std::cout << "Please enter the path to the video file: ";
    std::getline(std::cin, filePath); // 读取包含空格的完整路径

    if (!filePath.empty()) {
        VideoPlayer player;
        player.start(filePath.c_str()); // 使用用户输入的文件路径开始播放
    }
    else {
        std::cerr << "No file path entered." << std::endl;
        return 1; // 返回错误代码
    }

    return 0;
}