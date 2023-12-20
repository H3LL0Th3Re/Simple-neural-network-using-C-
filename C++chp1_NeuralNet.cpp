//simple fully connected neuron code in c++
#include <iostream>
#include <vector>
int main(){
    
    std::vector<double> inputs = {1.0, 2.0, 3.0, 2.5};
    std::vector<std::vector<double>> weights = {
        {0.2, 0.8, -0.5, 1},
        {0.5, -0.91, 0.26, -0.5},
        {-0.26, -0.27, 0.17, 0.87}
    };
    std::vector<double> bias = {2, 3, 0.5};

    std::vector<double> layer_outputs = {};
    
    for(int i=0; i<weights.size();i++){
        double neuron_output = 0;
        for(int j=0; j<inputs.size(); j++){
            neuron_output += inputs[j]*weights[i][j];
        }
        neuron_output = neuron_output+bias[i];
        layer_outputs.push_back(neuron_output);
    }

    for(double a:layer_outputs){
        std::cout<<a<<" ";
    }
}
