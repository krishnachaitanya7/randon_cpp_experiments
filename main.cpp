// http://techgate.fr/boost-property-tree/
#include <iostream>
#include <cstdlib>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
namespace pt = boost::property_tree;


static std::map<std::string, std::string> airports_codes_map;
static std::string arrival_port_default {"Select Arrival Airport"};
static std::string departure_port_default {"Select Departure Airport"};
// End Global Static Variables
// Start Constant Declaration. Only edit here
static int duration_ld {20};
static int rain_ld {0};
static int wind_ld {0};
static std::string day_night_ld = "Day";
static int duration_md {20};
static int rain_md {50};
static int wind_md {50};
static std::string day_night_md = "Day";
static int duration_hd {20};
static int rain_hd {99};
static int wind_hd {99};
static std::string day_night_hd = "Day";
static int rest_seconds {15};
static std::string low_difficulty {"Low Difficulty"};
static std::string moderate_difficulty {"Moderate Difficulty"};
static std::string high_difficulty {"High Difficulty"};
static std::string insert_tlx {"Fill Out Survey"};

void read_airport_conf_file(){
    pt::ptree root;
    pt::read_json("/home/shine/CLionProjects/randon_cpp_experiments/airports.json", root);
    for (pt::ptree::value_type &airport : root){
        std::string airport_name = airport.first;
        for(pt::ptree::value_type &airport_contents : root.get_child(airport_name)){
            std::string airport_code {"Airport_Code"};
            if(airport_contents.first == airport_code){
                std::string airport_code = airport_contents.second.data();
                std::cout << "Airport Code = " << airport_code << std::endl;
            }
        }
    }
}

void read_conf_file(){
    pt::ptree root;
    pt::read_json("/home/shine/CLionProjects/randon_cpp_experiments/xplane.json", root);
    for (pt::ptree::value_type &each_element : root) {
        std::string element_name = each_element.first;
        if(element_name == low_difficulty){

        }

    }
}
int main() {
//    pt::ptree root;
//    pt::read_json("/home/shivababa/CLionProjects/random_experiments/test.json", root);
//    int height = root.get<int>("height", -1);
//    if(height == -1){
//        std::cout << "No height defined in JSON file" << std::endl;
//    } else{
//        std::cout << "Height defined in JSON file: "<< height << std::endl;
//    }
//    // Write JSON
//    pt::ptree write_file_root;
//    write_file_root.put("height", height);
//    pt::write_json(std::cout, write_file_root);


}