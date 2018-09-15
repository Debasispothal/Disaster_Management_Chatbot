#include <iostream>
#include<windows.h>

using namespace std;
string quo[5]={"Don't worry everything gonna be alright\n",
"Don't worry somebody is coming to help you and your loved ones\n",
"Pray to GOD, it will give you strength\n",
"Don't worry I am always with you we together deal with this situation\n",
"We will fight the darkness sun will rise again\n"};
void medical(){
    COORD coord;
	coord.X = 10;
	coord.Y = 25;

	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    cout<<"General guidelines are :-\n";
    cout<<"-------------------------\n";
    cout<<"KEEP CALM AND TRY TO ANALYSE THE SITUATION, FIND OUT HOW MANY ARE INJURED AND TRY TO HELP THEM WITH BASIC FIRST AID KIT\n";
    cout<<"MAKE SURE THE PLACE IS SAFE. CHECK FOR GAS LEAKAGE, FIRE AND FALLING OBJECTS\n";
    cout<<"TRY TO 911 OR LOCAL EMERGENCY SRVICES\n";
    cout<<"BE CAREFUL TO DO MORE HARM TO THE VICTIMS. CHECK THE VICTIM AIRWAYS, BREATHING AND HEARTBEATS.\n";
    cout<<"IF THE PERSON IS NOT BREATHING, PERFORM CHEST COMPRESSION\n";
    cout<<"REMAIN FOCUSED AND CALM, BEFORE ACTING THINK PROPERLY. DON'T PANIC TAKE DEEP BREATHS AND PLAN T DEAL WITH THE SITUATION\n";
    cout<<"\nCRP(cardiopulmonary resuscitation):\n";
    cout<<"-------------------------------------\n";
    cout<<">>POSITION YOUR HANDS IN THE CENTER OF VICTIMS CHEST ONE OVER ANOTHER\n";
    cout<<">>INTERLOCK YOUR FINGERS AND LEAN TOWARD THE PATIENT SO THAT YOUR SHOULDERS ARE DIRECTLY OVER THE VICTIM CHEST\n";
    cout<<">>PRESS DOWN TWO INCHES AND RELEASE THE PRESSURE AND LET THE CHEST COME BACK UP\n";
    cout<<">>TILT THE PATIENT HEAD AND LIFT HIS/HER CHINTO OPEN THEAIRWAY AGAIN. LET HIS/HER MOUTH OPEN SLIGHTLY\n";
    cout<<">>GIVE RESUCE BREATHS CLOSE THE NOSTRIL WITH ON HAND AND WITH OTHER HAND LIFT THE CHIN THEN PUT YOUR MOUTH IN PATIENT MOUTH AND BLOW AIR\n";
    cout<<">>REMOVE YOUR MOUTH AND LOOK ALONG THE CHEST, WATCH THE CHEST FALL\n";
    cout<<">>FOLLOW THESE STEPS. REPEAT THE CYCLE DO 30 CHEST COMPRASION FOLLOWED WITH 2 RESCUE BREATHS\n";
    cout<<"\nBasic first aid kit\n";
    cout<<"----------------------\n";
    cout<<"ASPIRIN, acetaminophen, and ibuprofen\n";
    cout<<"ANTIBIOTIC ONIMENT\n";
    cout<<"BENADRYL\n";
    cout<<"BANDAGES\n";
    cout<<"COLD PACKS\n";
    cout<<"HYDROGEN PEROXIDE\n";
    cout<<"LATEX GLOVES\n";
    cout<<"REHYDRATING FLUIDS\n";
    cout<<"SAFETY PINS\n";
    cout<<"SCISSORS\n";
    cout<<"SOAP\n";
    cout<<"THERMOMETER\n";
    cout<<"TWEEZERS\n";
    cout<<"\nIs anyone is suffering from any of the following\n";
    cout<<"--------------------------------------------------\n";
    cout<<"1. Fracture\n2. Excessive blood loss\n3. Fainting\n4. Wounds\n";
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    int f;
    cin>>f;
    switch(f){
case 1:
    cout<<"Steps to be taken are as follows\n";
    cout<<"--------------------------------\n";
    cout<<"STOP ANY TYPE OF BLEEDING, APPLY PRESSURE TO THE WOUND WITH A CLEAN CLOTH\n";
    cout<<"IMMOBILIZE THE AFFECTED AREA WITH THE HELP OF SPLINT AND SLING\n";
    cout<<"APPLY COLD TO THE AFFECTED AREA\n";
    cout<<"HELP THE PATIENT TO GET TO A COMFORTABLE POSITION, ENCOURAGE THEM TO TAKE REST AND REASSURE THEM\n";
    break;
case 2:
    cout<<"Steps to be taken are as follows\n";
    cout<<"--------------------------------\n";
    cout<<"CLEAN THE AFFECTED AREA IF POSSIBLE CLEAN YOUR HAND OR WEAR GLOVES BEFORE TREAING THE AFFECTED AREA\n";
    cout<<"WARP THE WOUNDED AREA WITH A CLEAN CLOTH OR BANDAGE\n";
    cout<<"MAKE SURE THE WOUND IS TIGHTLY BOUND\n";
    cout<<"IF IT IS NOT POSSIBLE TO WARP THE AREA PUT PRESSURE ON THE AREA WITH A CLEAN CLOTH\n";
    cout<<"IF BLEEDING SEEP THROUGH THE BANDAGE, TRY TO APPLYSOME PRESSURE ON THE BANDAGE WITH A CLEAN CLOTH\n";
    break;
case 3:
    cout<<"Steps to be taken are as follows\n";
    cout<<"--------------------------------\n";
    break;
default:
    cout<<"Don't panic choose the correct option\n";
    cout<<"--------------------------------\n";
    break;
    }


}


void water_health_food(){

}


void how_to_contact(){
}
int x=-1;


void earthquake(){
cout<<quo[(x+1)%5];
cout<<"Describe your situation\n";
cout<<"1. Indoors\n2. Outdoors\n3. Moving vehicle\n4. Under a debris\n";
int x,m=1;
while(m){
        cin>>x;
        cout<<"Steps to be followed:-\n";
switch(x){
case 1:
    cout<<"TAKE COVER UNDER A TABLE OR ANY FURNITURE AND HOLD ON UNTIL SHAKING STOPS\n";
    cout<<"STAY AWAY FROM WINDOWS, FANS, DOORS, WALLS ANYTHING THAT CAN FALL DUE TO IMPACT\n";
    cout<<"IF YOU ARE IN BED COVER YOUR HEAD WITH PILLOW AND TRY TO FIND SAFEST PLACE NEARBY\n";
    cout<<"DON'T USE ELEVATORS\n";
    cout<<"STAY INSIDE THE BUILDING TILL SHAKING STOPS, AFTER SHAKING STOPS MOVE OUT OF THE BUILDING AND FIND A NEAREST SAFEST PLACE\n";
    cout<<"BEWARE OF ELECTRIC EQUIPMENTS AS THEY CAN BE DANGEROUS IN THIS SITUATIONS\n";
    m=0;
    break;
case 2:
    cout<<"STAY AWAY FROM BUILDINGS, STREETLIGHTS AND UTILITY WIRES\n";
    cout<<"ONCE IN THE OPEN PLACE, STAY THERE UNTIL SHAKING STOPS\n";
    cout<<"DON'T STAND NEAR EXTERIOR WALL OF A BUILDING\n";
    m=0;
    break;
case 3:
    cout<<"STOP AS QUICKLY AS POSSIBLEAND STAY IN THE VEHICLE\n";
    cout<<"AVOID STOPPING NEAR BUILDINGS, TREES AND UTILITY WIRES\n";
    cout<<"PROCEED CAUTIOUSLY ONCE A EARTHQUAKE HAS STOPPED\n";
    cout<<"AVOID BRIDGES, ROADS OR RAMPS THAT MIGHT BE DAMAGED BY THE EARTHQUAKE\n";
    m=0;
    break;
case 4:
    cout<<"DON'T MOVE AROUND AND KICK UP DUST\n";
    cout<<"COVER YOUR MOUTH WITH HANKERCHIEF OR CLOTHING\n";
    cout<<"TAP ON A PIPE OR WALL OR ANY OBJECT WHICH CAN MAKE SOUND SO THAT SOMEONE CAN LOCATE YOU\n";
    m=0;
    break;
default:
    cout<<"Don't HURRY!! click the right option\n";
break;
}
}
cout<<"\nSo is there any following problems:-\n1. medical emergency?\n2. Food/Water/Health care problem\n3. Emergency Contact\n";
int h;

string c1="1. Medical emergency?",c2="2. Food/Water/Health care problem",c3="3. Emergency Contact";
int ch=0,c=0;
while(ch<6){

        if(ch==1){
            cout<<"\nSo is there any following problems:-\n"+c2+"\n"+c3+"\n";
        }
        else if(ch==2){
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c3+"\n";
        }
        else if(ch==3){
                if(c==1)
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c2+"\n";
            else
            cout<<"\nSo is there any following problems:-\n"+c3+"\n";
        }
        else if(ch==4)
            cout<<"\nSo is there any following problems:-\n"+c2+"\n";
        else if(ch==5)
        cout<<"\nSo is there any following problems:-\n"+c1+"\n";
    cin>>h;
switch(h){
case 1:
    medical();
    ch=ch+1;
    c++;
    break;
case 2:
    water_health_food();
    ch=ch+2;
    c++;
    break;
case 3:
    how_to_contact();
    ch=ch+3;
    c++;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
}


void floods(){
cout<<quo[(x+1)%5];
cout<<"Please describe your situation\n";
cout<<"1. Before the flood\n2. During the flood\n3. After the flood\n";
int x,m=1;
while(m){
    cin>>x;
    cout<<"The steps to followed are:-\n";
switch(x){
case 1:
    cout<<"YOU CAN PUT WEATHER SEALANT AROUND THE BASEMENT, WINDOWS AND ZEROTH LEVEL FLOOR\n";
    cout<<"REMOVE TOXIC THINGS LIKE INSECTICIDE OR PESTICIDES\n";
    cout<<"CONSULT YOUR ELECTRICTY AND FUEL SUPPLIER FOR INSTRUCTION HOW TO PROCEED\n";
    cout<<"KEEP SUFFICENT FOOD AND WATER SUPPLY\n";
    m=0;
    break;
case 2:
    cout<<"KEEP YOUR MEDICAL KIT CLOSE AT HAND, IF POSSIBLE IN SUITCASE, BACKPACK\n";
    cout<<"VACATE YOUR HOUSE WHEN ADVISED BY THE AUTHORITIES\n";
    cout<<"FOLLOW THE ROUTES SPECIFIED BY THE OFFICIALS\n";
    cout<<"NEVER CROSS THE FLOODED AREA THERE IS A HIGH CHANCE THAT FAST WATER MAY SWEEP YOU AWAY\n";
    cout<<"AVOID CROSSING BRIDGES\n";
    cout<<"BE PATIENT UNTIL AUTHORTIES GET TO YOU\n";
    m=0;
    break;
case 3:
    cout<<"USE EXTREME CAUTION WHILE RETURNING TO YOUR HOME\n";
    cout<<"FLOOD WATER CAN BE HIGHILY CONTAMINATED WITH SEWAGE AND OTHER POLLUTANTS\n";
    cout<<"DON'T USE ANY ELECTRICAL APPLIANCES, THERE IS A HIGH CHANCE ELECTRICAL SHORT CIRCUIT\n";
    m=0;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
cout<<"\nSo is there any following problems:-\n1. medical emergency?\n2. Food/Water/Health care problem\n3. Emergency Contact\n";
int h;


string c1="1. Medical emergency?",c2="2. Food/Water/Health care problem",c3="3. Emergency Contact";
int ch=0,c=0;
while(ch<6){
        if(ch==1){
            cout<<"\nSo is there any following problems:-\n"+c2+"\n"+c3+"\n";
        }
        else if(ch==2){
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c3+"\n";
        }
        else if(ch==3){
                if(c==1)
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c2+"\n";
            else
            cout<<"\nSo is there any following problems:-\n"+c3+"\n";
        }
        else if(ch==4)
            cout<<"\nSo is there any following problems:-\n"+c2+"\n";
        else if(ch==5)
        cout<<"\nSo is there any following problems:-\n"+c1+"\n";
    cin>>h;
switch(h){
case 1:
    medical();
    ch=ch+1;
    c++;
    break;
case 2:
    water_health_food();
    ch=ch+2;
    c++;
    break;
case 3:
    how_to_contact();
    ch=ch+3;
    c++;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
}


void tsunami(){
cout<<quo[(x+1)%5];


cout<<"\nSo is there any following problems:-\n1. medical emergency?\n2. Food/Water/Health care problem\n3. Emergency Contact\n";
int h;

string c1="1. Medical emergency?",c2="2. Food/Water/Health care problem",c3="3. Emergency Contact";
int ch=0,c=0;
while(ch<6){

        if(ch==1){
            cout<<"\nSo is there any following problems:-\n"+c2+"\n"+c3+"\n";
        }
        else if(ch==2){
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c3+"\n";
        }
        else if(ch==3){
                if(c==1)
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c2+"\n";
            else
            cout<<"\nSo is there any following problems:-\n"+c3+"\n";
        }
        else if(ch==4)
            cout<<"\nSo is there any following problems:-\n"+c2+"\n";
        else if(ch==5)
        cout<<"\nSo is there any following problems:-\n"+c1+"\n";
    cin>>h;
switch(h){
case 1:
    medical();
    ch=ch+1;
    c++;
    break;
case 2:
    water_health_food();
    ch=ch+2;
    c++;
    break;
case 3:
    how_to_contact();
    ch=ch+3;
    c++;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
}
void cyclone(){
cout<<quo[(x+1)%5];

cout<<"\nSo is there any following problems:-\n1. medical emergency?\n2. Food/Water/Health care problem\n3. Emergency Contact\n";
int h;

string c1="1. Medical emergency?",c2="2. Food/Water/Health care problem",c3="3. Emergency Contact";
int ch=0,c=0;
while(ch<6){

        if(ch==1){
            cout<<"\nSo is there any following problems:-\n"+c2+"\n"+c3+"\n";
        }
        else if(ch==2){
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c3+"\n";
        }
        else if(ch==3){
                if(c==1)
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c2+"\n";
            else
            cout<<"\nSo is there any following problems:-\n"+c3+"\n";
        }
        else if(ch==4)
            cout<<"\nSo is there any following problems:-\n"+c2+"\n";
        else if(ch==5)
        cout<<"\nSo is there any following problems:-\n"+c1+"\n";
    cin>>h;
switch(h){
case 1:
    medical();
    ch=ch+1;
    c++;
    break;
case 2:
    water_health_food();
    ch=ch+2;
    c++;
    break;
case 3:
    how_to_contact();
    ch=ch+3;
    c++;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
}
void wildfires(){
cout<<quo[(x+1)%5];

cout<<"\nSo is there any following problems:-\n1. medical emergency?\n2. Food/Water/Health care problem\n3. Emergency Contact\n";
int h;

string c1="1. Medical emergency?",c2="2. Food/Water/Health care problem",c3="3. Emergency Contact";
int ch=0,c=0;
while(ch<6){

        if(ch==1){
            cout<<"\nSo is there any following problems:-\n"+c2+"\n"+c3+"\n";
        }
        else if(ch==2){
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c3+"\n";
        }
        else if(ch==3){
                if(c==1)
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c2+"\n";
            else
            cout<<"\nSo is there any following problems:-\n"+c3+"\n";
        }
        else if(ch==4)
            cout<<"\nSo is there any following problems:-\n"+c2+"\n";
        else if(ch==5)
        cout<<"\nSo is there any following problems:-\n"+c1+"\n";
    cin>>h;
switch(h){
case 1:
    medical();
    ch=ch+1;
    c++;
    break;
case 2:
    water_health_food();
    ch=ch+2;
    c++;
    break;
case 3:
    how_to_contact();
    ch=ch+3;
    c++;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
}
void def(){
cout<<quo[(x+1)%5];

cout<<"\nSo is there any following problems:-\n1. medical emergency?\n2. Food/Water/Health care problem\n3. Emergency Contact\n";
int h;

string c1="1. medical emergency?",c2="2. Food/Water/Health care problem",c3="3. Emergency Contact";
int ch=0,c=0;
while(ch<6){

        if(ch==1){
            cout<<"\nSo is there any following problems:-\n"+c2+"\n"+c3+"\n";
        }
        else if(ch==2){
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c3+"\n";
        }
        else if(ch==3){
                if(c==1)
            cout<<"\nSo is there any following problems:-\n"+c1+"\n"+c2+"\n";
            else
            cout<<"\nSo is there any following problems:-\n"+c3+"\n";
        }
        else if(ch==4)
            cout<<"\nSo is there any following problems:-\n"+c2+"\n";
        else if(ch==5)
        cout<<"\nSo is there any following problems:-\n"+c1+"\n";
    cin>>h;
switch(h){
case 1:
    medical();
    ch=ch+1;
    c++;
    break;
case 2:
    water_health_food();
    ch=ch+2;
    c++;
    break;
case 3:
    how_to_contact();
    ch=ch+3;
    c++;
    break;
default:
    cout<<"Don't HURRY!! click the right option";
    break;
}
}
}
int main()
{
    cout<<"Hello can you define the Disaster going to happen or had been happened\n";
    cout<<"----------------------------------------------------------------------\n";
    cout<<"1. Earthquake\n2. Floods\n3. Tsunami\n4. Cyclone\n5. Wildfires\n";
    int x;
    cin>>x;
    switch(x){
case 1:
    earthquake();
    break;
case 2:
    floods();
    break;
case 3:
    tsunami();
    break;
case 4:
    cyclone();
    break;
case 5:
    wildfires();
    break;
default:
    def();
    }

    return 0;
}
