#include <iostream>

using namespace std;

class VideoConverter {
public:
    void convertToAVI(const string& filename) {
        cout << "Converting video to AVI format: " << filename << ".avi" << endl;
    }

    void convertToMP4(const string& filename) {
        cout << "Converting video to MP4 format: " << filename << ".mp4" << endl;
    }

    void convertToMKV(const string& filename) {
        cout << "Converting video to MKV format: " << filename << ".mkv" << endl;
    }
};

class VideoConversionFacade {
    VideoConverter* videoConverter;
public:
    VideoConversionFacade() {
        videoConverter = new VideoConverter();
    }

    ~VideoConversionFacade() {
        delete videoConverter;
    }

    void convertToAVI(const string& filename) {
        videoConverter->convertToAVI(filename);
    }

    void convertToMP4(const string& filename) {
        videoConverter->convertToMP4(filename);
    }

    void convertToMKV(const string& filename) {
        videoConverter->convertToMKV(filename);
    }
};

int main() {
    VideoConversionFacade videoConversionFacade;

    string videoFile = "example_video";

    videoConversionFacade.convertToAVI(videoFile);
    videoConversionFacade.convertToMP4(videoFile);
    videoConversionFacade.convertToMKV(videoFile);

    return 0;
}