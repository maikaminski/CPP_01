#include <iostream>
#include <fstream>
#include <string>

std::string replaceString(const std::string& line,
                          const std::string& s1,
                          const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos) {
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line, pos, line.length() - pos);
    return result;
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0]
                  << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }
    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: couldn't open file " << filename << std::endl;;
        return 1;
    }
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std:: cerr << "Error: couldn't create file" << filename + ".replace" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(inFile, line)) {
        outFile << replaceString(line, s1, s2) << std::endl;
    }
    inFile.close();
    outFile.close();
    return 0;
}