#include <iostream>
#include <vector>
#include <string>
void find_words(const std::vector<std::string>& grid, const std::vector<std::string>& words, std::vector<std::string>& solution, std::vector<std::string>& not_found){
//find_row
    int i, g, k, counter, m, n;
    std::string temp;
    std::vector<std::string> found, column, temp1;
    not_found = words;
    temp.clear();
    for(g = 0; g < grid[0].size(); g++){
        temp = temp + "#";
    }
    for(i = 0; i < grid.size(); i++){
        found.push_back(temp);
    }
    for(i = 0; i < words.size(); i++){
        for(g = 0; g < grid.size(); g++){
            if(words[i].size() <= grid[0].size()){
                for(k = 0; k + words[i].size() <= grid[g].size(); k++){
                    temp.clear();
                    for(n = k; (n < (k + words[i].size())); n++){
                        temp = temp+grid[g].substr(n, 1);
                    }
                    if (words[i] == temp){
                        not_found[i].clear();
                        for(n = 0; n < words[i].size(); n++){
                        found[g][k+n] = words[i][n];
                        }
                    }
                }
            }

        }
    }
//find_column

    for(i = 0; i < grid[0].size(); i++){
        temp.clear();
        for(g = 0; g < grid.size(); g++){
            temp = temp + grid[g][i];
        }
        column.push_back(temp);
    }
     for(i = 0; i < words.size(); i++){
        for(g = 0; g < column.size(); g++){
            if(words[i].size() <= column[0].size()){
                for(k = 0; k + words[i].size()<= column[g].size(); k++){
                    temp.clear();
                    temp.clear();
                    for(n = k; n < ((k + words[i].size())); n++){
                        temp = temp+column[g].substr(n, 1);
                    }
                    if (words[i] == temp){
                        not_found[i].clear();
                        for(counter = 0, m = k; counter < words[i].size(); counter++, m++){

                            found[m][g] = words[i][counter];
                        }                      
                    }
                }
            }

        }
    }
    solution = found;
//not_found
for(i = 0; i < not_found.size(); i++){
    if(not_found[i] != ""){
        temp1.push_back(not_found[i]);
    }
}
not_found = temp1;
}


int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}