class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int insert = 0;
        stack<int>st; //open 
        int count = 0; //close braket count
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                if(count == 1){
                    if(st.empty()){
                        insert += 2; //insert open and close bracket
                    }
                    else{
                        insert += 1; // insert only one close braket
                        st.pop();
                    }
                    count = 0;
                }
                st.push(1);
            }
            else{
                count++;
                if(count == 2){
                    if(st.empty()){ //no open braket
                        insert  += 1; 
                    }
                    else{ //open braket present 
                        st.pop();
                    }
                    count = 0;
                }
            }
        }
        if(count != 0){ //if not zero then always will 1
            if(st.empty()){
                insert += 2; // insert open and close bracket 
            }
            else{
                insert += 1; // insert only one close braaket
                st.pop();
            }
        }
        while(!st.empty()){
            insert += 2;
            st.pop();
        }

        return insert;
    }
};