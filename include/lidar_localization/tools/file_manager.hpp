/**
 * @file file_manager.hpp
 * @brief 文件读写的函数声明
 * @author GWH
 * @version 0.1
 * @date 2020-03-06
 */
#ifndef LIDAR_LOCALIZATION_TOOLS_FILE_MANAGER_HPP_
#define LIDAR_LOCALIZATION_TOOLS_FILE_MANAGER_HPP_

#include <Eigen/Dense>
#include <boost/filesystem.hpp>
#include <fstream>
#include <vector>

namespace lidar_localization {
namespace filemanager {

bool CreateFile(std::ofstream& ofs, const std::string& file_path);

bool CreateDirectory(const std::string& directory_path);

// 删除已经有的目录中的所有内容。
bool InitDirectory(std::string directory_path, std::string use_for);

bool CreateDirectory(std::string directory_path, std::string use_for);

bool ReadTrajectory(std::string data_path, std::vector<Eigen::Matrix4f>& trajecroty);
}  // namespace filemanager
}  // namespace lidar_localization

#endif
