

class Solution {
public:
    array<array<char,50>,50> visited1,visited0;
    
    
    void initialize(){
        for (int i = 0; i < 50; ++i){
            for (int j = 0; j < 50; ++j){
                visited1[i][j] = -1;
                visited0[i][j] = -1;
            }
        }
    }  
    void clear_array(){
        for (int i = 0; i < 50; ++i){
            for (int j = 0; j < 50; ++j){
                if (visited1[i][j] == 1)
                    visited1[i][j] = -1;
                if (visited0[i][j] == 1)
                    visited0[i][j] = -1;
            }
        }
    }
    // cat wants to minimize outputs, mouse wants to maximize, use memoization to keep track whether a given node is a win, loss, or draw
    int minicat(vector<vector<int>> &graph, int mouse, int cat){
        if (visited1[mouse][cat] != -1)
            return visited1[mouse][cat];
        
        if (mouse == 0){
            visited1[mouse][cat] = 2;
            return 2;
        }
        if (mouse == cat){
            visited1[mouse][cat] = 0;
            return 0;
        }
		//assume its a draw until proven otherwise, any mismatching from this will be corrected during iteration
        visited1[mouse][cat] = 1;
        
        int output = 2;
        for (auto i : graph[cat]){
            if (i == 0){
                continue;
            }
            output = min(output,maximouse(graph,mouse,i));
            if (output == 0){
                break;
            }
        }
        visited1[mouse][cat] = output;
        return output;
    }
    
    //identical to above function, but checks for maximums rather than minimums, and allows mouse to enter 0 node
    int maximouse(vector<vector<int>> &graph, int mouse, int cat){
        
        if (visited0[mouse][cat] != -1){
            return visited0[mouse][cat];
        }
        
        if (mouse == 0){
            visited0[mouse][cat] = 2;
            return 2;
        }
        if (mouse == cat){
            visited0[mouse][cat] = 0;
            return 0;
        }
        visited0[mouse][cat] = 1;
        int output = 0;
        for (auto i: graph[mouse]){
            output = max(output,minicat(graph,i,cat));
            if (output == 2){
                break;
            }
        }
        visited0[mouse][cat] = output;
        return output;
    }
    
    
    
    int catMouseGame(vector<vector<int>>& graph) {
        int n = graph.size();
        initialize();
        int answer = maximouse(graph,1,2);
        //inital output is usually correct, but in some edge cases it can return a draw, to fix this we can simply reapply the function after resetting any nodes which claim to be draws
        if (answer == 1){
            array<array<char,50>,50> copy;
            do {
                copy = visited0;
                clear_array();
                answer = maximouse(graph,1,2);
            }while (answer == 1 && (copy != visited0));
        }
        
        //seems more intuitive that draws should be 1 but leetcode wants draws to be 0
        const int correct_output[3] = {2,0,1};
        return correct_output[answer];
    }
};