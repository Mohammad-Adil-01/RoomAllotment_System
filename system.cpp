#include<iostream>
#include<string.h>
using namespace std ;
class room{
        int availroom[5]={201,202,203,204,205};
            int roomNumber;
            string hostname; 
            int contactnumber;
            int chair ;
            float time1;
            float time2;
        public:
            room(){ 
                roomNumber = roomNumber;
                contactnumber=contactnumber;
                chair = chair;
                time1 = time1;
                time2 = time2;
            }
            void Avaialableroom(void);
            void totakeinfo(void);
            void Toprint(void);
            void UserManual(void);
        };
        
void room ::  Avaialableroom(){ 
                cout<<"Availabe Room is "<<endl;
                for (int i = 0; i < 5; i++)
                {
                    cout<<"Room no - "<<availroom[i] <<"\t"<<endl;
                } 
                for(int j = 0 ; j < 5 ; j++){ 

                        if(roomNumber==availroom[0]){
                                cout<<"\n"<<availroom[0]<<" - Is Already Booked :"<<endl;
                                break;
                        }
                        else if(roomNumber==availroom[1]){

                                cout<<"\n"<<availroom[1]<<" - Is Already Booked :"<<endl;
                                break;
                        }
                        else if(roomNumber==availroom[2]){

                                cout<<"\n"<<availroom[2]<<" - Is Already Booked :"<<endl;
                                break;
                        }
                        else if(roomNumber==availroom[3]){

                                cout<<"\n"<<availroom[3]<<" - Is Already Booked :"<<endl;
                                break;
                        }
                        else if(roomNumber==availroom[4]){

                                cout<<"\n"<<availroom[4]<<" - Is Already Booked :"<<endl;
                                break;
                        }
                        else{   break; }
        }
}
          
void room :: totakeinfo(){ 
    cout<<"\nFor Booking Purpose :- Enter Detail below :-"<<endl;
    cout<<"\nEnter Room Number : ";
    cin>>roomNumber;
    for(int i=0 ; i<5;i++){
        if(roomNumber==availroom[0]){ 
                cout<<"Enter Host Name (Only FirstName): ";
                cin>>hostname;
                cout<<"Enter Host Contact Number : ";
                cin>>contactnumber;
                cout<<"Enter Starting Time (eg : 12.00) : ";
                cin>>time1;
                cout<<"Enter Ending Time (eg : 12.00 ) : ";
                cin>>time2;
                cout<<"Enter Required Chair :";
                cin>>chair;
                system("cls");
                cout<<"\n\n CONGRATULATION : Your Slot Is Booked Successfully:- "<<endl;
                break;
                }
        else if(roomNumber==availroom[1]){ 
                cout<<"Enter Host Name(only FirstName): ";
                cin>>hostname;
                cout<<"Enter Host Contact Number : ";
                cin>>contactnumber;
                cout<<"Enter Starting Time (Only Hour) (eg : 12.00) : ";
                cin>>time1;
                cout<<"Enter Ending Time (Only Hour) (eg : 12.00 ) : ";
                cin>>time2;
                cout<<"Enter Required Chair :";
                cin>>chair;
                system("cls");
                cout<<"\n\n CONGRATULATION : Your Slot Is Booked Successfully:- "<<endl;
                break;
                
                }
        else if(roomNumber==availroom[2]){ 
                cout<<"Enter Host Name(only FirstName): ";
                cin>>hostname;
                cout<<"Enter Host Contact Number : ";
                cin>>contactnumber;
                cout<<"Enter Starting Time (Only Hour) (eg : 12.00) : ";
                cin>>time1;
                cout<<"Enter Ending Time (Only Hour) (eg : 12.00 ) : ";
                cin>>time2;
                cout<<"Enter Required Chair :";
                cin>>chair;
                system("cls");
                cout<<"\n\n CONGRATULATION : Your Slot Is Booked Successfully:- "<<endl;
                break;
                
                }
        else if(roomNumber==availroom[3]){ 
                cout<<"Enter Host Name(only FirstName): ";
                cin>>hostname;
                cout<<"Enter Host Contact Number : ";
                cin>>contactnumber;
                cout<<"Enter Starting Time (Only Hour) (eg : 12.00) : ";
                cin>>time1;
                cout<<"Enter Ending Time (Only Hour) (eg : 12.00 ) : ";
                cin>>time2;
                cout<<"Enter Required Chair :";
                cin>>chair;
                system("cls");
                cout<<"\n\n CONGRATULATION : Your Slot Is Booked Successfully:- "<<endl;
                break;
                
                }
        else if(roomNumber==availroom[4]){ 
                cout<<"Enter Host Name(only FirstName): ";
                cout<<"Enter Host Contact Number : ";
                cin>>contactnumber;
                cout<<"Enter Starting Time (Only Hour) (eg : 12.00) : ";
                cin>>time1;
                cout<<"Enter Ending Time (Only Hour) (eg : 12.00 ) : ";
                cin>>time2;
                cout<<"Enter Required Chair :";
                cin>>chair;
                system("cls");
                cout<<"\n\n CONGRATULATION : Your Slot Is Booked Successfully:- "<<endl;
                break;
                
                }
        else{   system("cls");
                cout<<"\nOOPS ! Wrong Room Number Entered: "<<endl;
                cout<<"\nPlease - Enter Room Number From Above Available Room :) "<<endl;

                }
        break;
       
        
    }
    
}    
void room :: Toprint(){
        cout<<"\n************ BOOKING CONFIRMED OF CUSTOMER ************\n";
        cout<<"Room - No : "<<roomNumber<<endl;
        cout<<"Name of Host : "<<hostname<<endl;
        cout<<"Contact Number :"<<contactnumber<<endl;
        cout<<"Timing From : "<<time1<<endl;
        cout<<"Timing TO : "<<time2<<endl;
        cout<<"Number of Chair Booked : "<<chair<<endl;
        cout<<"\n\n"<<endl;
        
}  
void room ::  UserManual(){
        
        int choice ;
        while (choice!=4)
        {
            cout<<"\n\t\t\t******************** HOTEL TRIVAGO  ********************\n"<<endl;

            cout<<"\t\t\t\tServices We Provide Are As Follow :-\n"<<endl;
            cout<<"\t\4 1 - To Book A Room \t\t\t\t";
            cout<<"\t\4 2 - To Check Availibility of Room\n\n"<<endl;
            cout<<"\t\4 3 - To Show Booked Information Of Customer\t";
            cout<<"\t\4 4 - To EXIT Hotel"<<endl;
            cout<<"\n"<<endl;
        
            cout<<"Enter Your Choice : ";
            cin>>choice;
        
        switch (choice){

        case 1:
                cout<<"Processing Booking Section :-";
                system("cls");
                Avaialableroom();
                totakeinfo();               
                break;
        case 2:
                cout<<"Proccesing Availability Section :- ";
                system("cls");
                Avaialableroom();
                break;
        case 3:
                system("cls");
                cout<<"Wait loading....\n";
                Toprint();   
                break;
        case 4:
                system("cls");
                cout<<"Terminated Program :-";
                break;
        default:
                cout<<"Wrong information Detected :-";
                    break;
        }
        
    }
}

int main(){
        room r1;  
        r1.UserManual();     
        return 0;
}