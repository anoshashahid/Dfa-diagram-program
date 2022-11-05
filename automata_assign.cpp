                                                    #QUESTION#01
def start(c):  
    if (c == '0'):  
        dfa = 1
    elif (c == 'b1'):  
        dfa = 3
          
   
    # invalid symbol   
    else:  
        dfa = -1
    return dfa  
      
                                          #first   
 
def state1(c):   
    if (c == '0'):  
        dfa = 2
    elif (c == '1'):  
        dfa = 4
    else:  
        dfa = -1
    return dfa  
      
                                         #second   
  
def state2(c):  
    if (c == '1'):  
        dfa = 3
    elif (c == '0'):  
        dfa = 1
    else:  
        dfa = -1
    return dfa  
      
#                                      #third   
# dfa = state of DFA   
def state3(c):  
    if (c == '1'):  
        dfa = 3
    elif (c == '0'):  
        dfa = 4
    else:  
        dfa = -1
    return dfa  
      
                                      #fourth  
  
def state4(c):  
    dfa = -1
    return dfa  
      
def isAccepted(String):  
          
    l = len(String)  
          
   
    dfa = 0
    for i in range(l):   
        if (dfa == 0):   
            dfa = start(String[i])   
      
        elif (dfa == 1):   
            dfa = state1(String[i])   
      
        elif (dfa == 2) :  
            dfa = state2(String[i])   
      
        elif (dfa == 3) :  
            dfa = state3(String[i])   
      
        elif (dfa == 4) :  
            dfa = state4(String[i])   
        else:  
            return 0
    if(dfa == 3) :  
        return 1
    else:  
        return 0
      
# Driver code   
if __name__ == "__main__" :  
    String = "0101"
    if (isAccepted(String)) :  
        print("ACCEPTED")   
    else:  
        print("NOT ACCEPTED")                                            




                                                    #QUESTION#02
def start(c):  
    if (c == '0'):  
        dfa = 1
    elif (c == '1'):  
        dfa = 3
          
  
           # invalid symbol   
    else:  
        dfa = -1
    return dfa  
      
                                         #first  

def state1(c):   
    if (c == '0'):  
        dfa = 2
    elif (c == '1'):  
        dfa = 4
    else:  
        dfa = -1
    return dfa  
                                       #second  
def state2(c):  
    if (c == '1'):  
        dfa = 3
    elif (c == '0'):  
        dfa = 1
    else:  
        dfa = -1
    return dfa  
      
def isAccepted(String):  
          
      
    l = len(String)  
          
 
    dfa = 0
    for i in range(l):   
        if (dfa == 0):   
            dfa = start(String[i])   
      
        elif (dfa == 1):   
            dfa = state1(String[i])   
      
        elif (dfa == 2) :  
            dfa = state2(String[i])   
      
        elif (dfa == 3) :  
            dfa = state3(String[i])   
      
        elif (dfa == 4) :  
            dfa = state4(String[i])   
        else:  
            return 0
    if(dfa == 3) :  
        return 1
    else:  
        return 0
      
 
if __name__ == "__main__" :  
    String = "0101"
    if (isAccepted(String)) :  
        print("ACCEPTED")   
    else:  
        print("NOT ACCEPTED") 
                                             #QUESTION#03
#include <stdio.h>
#include <string.h>
  
int dfa = 0;
 
void start(char c)
{
    if (c == 'a') {
        dfa = 1;
    }
    else if (c == 'b') {
        dfa = 3;
    }
  {
    else if (c == 'c') {
        dfa = 5;
    }
    
    // -1 is used to check for any invalid symbol
    else {
        dfa = -1;
    }
}
  
                                     #first
void state1(char c)
{
    if (c == 'a') {
        dfa = 2;
    }
    else if (c == 'b') {
        dfa = 4;
    }
else if(c == 'c'){
        dfa = 6;
    else {
        dfa = -1;
    }
}
  
                                    #second
void state2(char c)
{
    if (c == 'b') {
        dfa = 3;
    }
    else if (c == 'a') {
        dfa = 1;
    }
    else {
        dfa = -1;
    }
}
                                       #third
{
    dfa = -1;
}
  
int isAccepted(char str[])
{
    // store length of string
    int i, len = strlen(str);
  
    for (i = 0; i < len; i++) {
        if (dfa == 0)
            start(str[i]);
  
        else if (dfa == 1)
            state1(str[i]);
  
        else if (dfa == 2)
            state2(str[i]);
  
        else if (dfa == 3)
            state3(str[i]);
  
        else if (dfa == 4)
            state4(str[i]);
        else
            return 0;
    }
    if (dfa == 3)
        return 1;
    else
        return 0;
}
  
// driver code
int main()
{
    char str[] = "cabbcc";
    if (isAccepted(str))
        printf("ACCEPTED");
    else
        printf("NOT ACCEPTED");
    return 0;
}