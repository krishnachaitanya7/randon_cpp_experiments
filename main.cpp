// http://techgate.fr/boost-property-tree/
#include <iostream>
#include <cstdlib>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
namespace pt = boost::property_tree;
int main() {
    pt::ptree root;
    pt::read_json("/home/shivababa/CLionProjects/random_experiments/test.json", root);
    int height = root.get<int>("height", -1);
    if(height == -1){
        std::cout << "No height defined in JSON file" << std::endl;
    } else{
        std::cout << "Height defined in JSON file: "<< height << std::endl;
    }
    // Write JSON
    pt::ptree write_file_root;
    write_file_root.put("height", height);
    pt::write_json(std::cout, write_file_root);
}