/*
author: amir kamalian
date:   11 june 2026
*/


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define print(x) std::cout << x << std::endl 

int main(int args, char** argv) {

    std::string directory_preamble = std::string("/home/mokamalian/Documents/DALHOUSIE/2026 SUMMER/Ted_lab-internship/ellipsometry");
    std::ifstream data_file = std::ifstream(directory_preamble + "/LL3S-scans/LELM/scan_site_l/11_june_2026-LELM_scanSite-l_oddPolarity.dat"); /* <---- change the directory here */
    std::ofstream csv_file = std::ofstream(directory_preamble + "/LL3S-all_CSVs/11_june_2026-LELM_scanSite-l_oddPolarity.csv"); /* <---- change output directory here */

    /* file checks */
    if(!data_file.is_open()) {
        print("[could not open data file]");
        return 1;  
    }

    if(!csv_file.is_open()) {
        print("[could not open csv file]");
        return 1; 
    }

    std::string headers = "label,wavelength,angle,psi,delta,error1,error2,x,y\n"; 
    csv_file << headers; 

    /* reading the data file lines */
    std::string line; 
    bool valid = false;  
    while(std::getline(data_file, line)) {

        /* checking for first line of valid data */ 
        if(!valid) {
            valid = line.find("nm") == std::string::npos ? false : true; /* <---- "nm" is line right before valid data begins */
            continue;  
        
        } else if(valid) {
            
            if(line.empty()) 
                continue; 
            
            std::string label, wavelength, angle, psi, delta, error1, error2, x, y;
            std::stringstream ss = std::stringstream(line);
            if(ss >> label >> wavelength >> angle >> psi >> delta >> error1 >> error2 >> x >> y) {
                csv_file << label << "," << wavelength << "," << angle << "," << psi << "," << delta << "," << error1 << "," << error2 << "," << x << "," << y << "\n";
            } 

        }

    }
    
    print("File conversion complete!"); 

    data_file.close();
    csv_file.close(); 

    return 0; 
}



