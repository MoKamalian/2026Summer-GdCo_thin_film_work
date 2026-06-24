
/* 
author: amir Kamalian
date: 11-May-2026
*/


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


#define print(x) (std::cout << x << std::endl)


int main(int argc, char** argv) {

    /* give file name and preamble */
    std::string file_name = "/2026_MAY_27-GdCo_Lily_LELM_P8"; /* -> only change this */
    std::string directory_preamble = "/home/mokamalian/Documents/DALHOUSIE/2026 SUMMER/Ted_lab-internship/MOKE-raw-data/rawText";
    std::string ifile = file_name + ".txt";
    std::string ofile = file_name + ".csv";


    std::ifstream input_file = std::ifstream(directory_preamble + ifile);
    std::ofstream csv_output = std::ofstream(directory_preamble + ofile);

    if(!input_file.is_open()) {
        print("[cannot open file]");
        return 1; 
    }

    if(!csv_output.is_open()) {
        print("[cannot create csv file]");
        return 1;
    }

    std::string header = "time(ms),field(Oe),signal(V),angle,step\n"; 
    csv_output << header; 

    /* processing into csv */
    std::string line;
    bool data_line = false; 

    while(std::getline(input_file, line)) {

        /* detecting data line to be processed into csv */
        if(!data_line) {

            if(line.find("Time (ms)") != std::string::npos) {
                data_line = true; 
                
                std::getline(input_file, line); /* skipping path line */

                continue; 
            }

        } else {

            if(line.empty()) 
                continue; 

            std::stringstream ss(line);
            double time, field, signal, angle, step;
            if(ss >> time >> field >> signal >> angle >> step) {
                /* default extraction delimiter is empty white space */
                csv_output << time << "," << field << "," << signal << "," << angle << "," << step << "\n"; 
            } 
        }
    }

    input_file.close();
    csv_output.close();

}




