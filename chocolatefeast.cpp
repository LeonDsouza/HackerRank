#include <iostream>
using namespace std;
int main() { 
    long int N,C,M; 
    int T; 
    cin >> T; 
    int *output;
    output = new int[T];
    for(int i=0;i<T;i++){ 
        cin >> N >> C >> M; 
        int chocos,newChocos,remWrappers; 
        int temp;
        chocos = N/C; 
        if(M > chocos) 
            output[i] = chocos; 
        else { 
            newChocos = chocos/M; 
            remWrappers = chocos%M; 
            chocos += newChocos; 
            while((newChocos+remWrappers) >= M) { 
                chocos += (newChocos+remWrappers)/M; 
                temp = (newChocos+remWrappers)%M; 
                newChocos = (newChocos+remWrappers)/M; 
                remWrappers = temp;
            }

            output[i] = chocos; 
        } 
    } 
    for(int i=0;i<T;i++) { 
        cout << output[i] << endl; 
    } 
    return 0; 
}
