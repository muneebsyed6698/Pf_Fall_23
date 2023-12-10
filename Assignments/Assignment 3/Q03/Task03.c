#include<stdio.h>
#include<string.h>

//Personal.txt Structure

struct Personal
{
    int ID;
    char Name[10];
};
// Department.txt Structure
struct Department
{
    int ID;
    int Salary;
};

int Read_Lines(FILE* file);
void Read_Personal(struct Personal P_Array[],int lines,FILE* file);
void Print_personal(struct Personal P_Array[],int lines);

void Read_Department(struct Department D_Array[],int lines,FILE* file);
void Print_Department(struct Department D_Array[],int lines);
int Salary(struct Department D_Array[],int lines,int ID);
void Write_Combine_FILE(int ID);


int main(){

    Write_Combine_FILE(101);
}
// Tells how many lines in program
int Read_Lines(FILE* file){
    int lines=0;
    char C;

    while(!feof(file)){
        C = getc(file);
        if (C == '\n'){
            lines ++;
        }
    }
    rewind(file);
    return lines;
}
// This Function will read data into the struct
void Read_Personal(struct Personal P_Array[],int lines,FILE* file){
    
    
    char skip[20];
    fscanf(file,"%s\n",skip); 

    for(int i=0;i<lines;i++){
        fscanf(file,"%d,%9[^\n]\n",
        &P_Array[i].ID,
        P_Array[i].Name);
    }
    
}

void Print_personal(struct Personal P_Array[],int lines){
    for(int i=0;i<lines;i++){
        printf("%d,%s\n",
        P_Array[i].ID,
        P_Array[i].Name);
    }
}

void Read_Department(struct Department D_Array[],int lines,FILE* file){
    char skip[20];
    fscanf(file,"%s\n",skip); 
    for(int i=0;i<lines;i++){
        fscanf(file,"%d,%d\n",
        &D_Array[i].ID,
        &D_Array[i].Salary);
    }
 
}
void Print_Department(struct Department D_Array[],int lines){

    for(int i=0;i<lines;i++){
        printf("%d,%d\n",
        D_Array[i].ID,
        D_Array[i].Salary);
    }
 
}

int Salary(struct Department D_Array[],int lines,int ID){
    for(int i=0;i<lines;i++){
        if(ID == D_Array[i].ID){
            return D_Array[i].Salary;
        }
    }
    return 0;
}

void Write_Combine_FILE(int ID){
    FILE* personal;
    FILE* department;
    FILE* combine;

    personal = fopen("Personal.txt","r");
    int Personal_LINES = Read_Lines(personal);
    // printf("%d",Personal_LINES);
    struct Personal P_data[Personal_LINES];
    Read_Personal(P_data,Personal_LINES,personal);
    // Print_personal(P_data,Personal_LINES);
    // printf("\n\n");

    department = fopen("Department.txt","r");
    int Department_LINES = Read_Lines(department);
    struct Department D_data[Department_LINES];
    Read_Department(D_data,Department_LINES,department);
    // Print_Department(D_data,Department_LINES);

    char Name_ID[10];
    int Salary;
    int j=0;
    for(j=0;j<Personal_LINES;j++){
        if(P_data[j].ID == ID){
            
            break;
            
        }
    }

    for(int i=0;i<Personal_LINES;i++){
        if(D_data[i].ID == ID){
            Salary = D_data[i].Salary;
            break;
        }
    }
    combine = fopen("Combine.txt","a");
    fprintf(combine,"\n%d,%s,%d",ID,P_data[j].Name,Salary);
}