#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include <sstream>
#include <algorithm>
using namespace std;
vector<string> Enter_Label();

vector<double> Separate_Value(vector<string> Product_Label_Array, string Look_For)
{
    vector<double> Product_Price;
    for(unsigned int i=0; i<Product_Label_Array.size(); i++){
        size_t String_Split; double Price_Int=0;
        if ((String_Split = Product_Label_Array[i].find(Look_For)) != string::npos){
            string Price = Product_Label_Array[i].substr(String_Split+1, string::npos);
        Price_Int = stod(Price); }
    Product_Price.push_back(Price_Int); }
    return Product_Price;
}

vector<string> Enter_Label()
{
    string Product_Label = "."; vector<string> Product_Label_Array;
    while(!Product_Label.empty()){ getline(cin,Product_Label);
    if(!Product_Label.empty()){ Product_Label_Array.push_back(Product_Label); } }
    return Product_Label_Array;
}

vector<string> Pull(vector<string> Downloader, string Path, string Look_Up, int lenght)
{
    ifstream Pull_Data; Pull_Data.open (Path); vector<string> Fetch; string Pulled;
    if(Pull_Data.is_open()){
        while(!Pull_Data.eof()){
            size_t Pull_Request; getline(Pull_Data, Pulled);
                if ((Pull_Request = Pulled.find(Look_Up)) != string::npos){
                Pulled = Pulled.substr(Pull_Request+lenght, string::npos); Fetch.push_back(Pulled); } } }

    Downloader.insert(Downloader.end(), Fetch.begin(), Fetch.end()); Pull_Data.close();
    return Downloader;
}

vector<string> Assign(vector<string> Product_Label, string label, string Path)
{
    ofstream Data; Data.open(Path, ios::app);
    if(!Pull(Product_Label, Path, label, label.size()).empty()){ Product_Label = Pull(Product_Label, Path, label, label.size()); }
    cout<<label<<":"<<endl; vector<string> Temp=Enter_Label(); Product_Label.insert( Product_Label.end(), Temp.begin(), Temp.end());
    Data.close(); Data.open(Path); for(unsigned int i=0; i<Product_Label.size(); i++) { Data<<endl<<label<<Product_Label[i]<<endl; }
    Data.close(); return Product_Label;
}

int main()
{
    ofstream BuyersGuide; BuyersGuide.open("Buyers Guide.txt", ios::app);
    double Month_Split, New_Price, Rate, New_New_Price, New_Rate, Covered_For; string Path, Label;
    vector<string> Product_Label; vector<string> Loan_Label; vector<string> Subtract_Label;
    vector<double> Product_Value; vector<double> Loan_Value; vector<double> Subtract_Value;

    Label = "PRODUCT"; Path=Label+".txt"; Product_Label = Assign(Product_Label, Label, Path); Product_Value=Separate_Value(Product_Label, "$");
    Label = "LOAN"; Path=Label+".txt"; Loan_Label = Assign(Loan_Label, Label, Path); Loan_Value=Separate_Value(Loan_Label, "%");
    Label = "SUBTRACT"; Path=Label+".txt"; Subtract_Label = Assign(Subtract_Label, Label, Path); Subtract_Value=Separate_Value(Subtract_Label, "$");

    cout<<"PAYING IN HOW MANY MONTHLY INSTALLMENTS: "; cin>>Month_Split; cin.clear();

    BuyersGuide.close(); BuyersGuide.open("Buyers Guide.txt");
    for(unsigned int i=0; i<Product_Value.size(); i++) {
        BuyersGuide<<endl<<"PRODUCT      | "<<Product_Label[i]<<endl; New_Price=0; Rate=0; New_New_Price=0; New_Rate=0, Covered_For=0;

        for(unsigned int j=0; j<Loan_Value.size(); j++)
        {
            New_Price = (Product_Value[i] + ((Product_Value[i]*Loan_Value[j]) / 100)); Rate = New_Price / Month_Split;
            BuyersGuide<<"PAYMENT PLAN | "<<Loan_Label[j]<<" | "<<New_Price<<" | "<<(int)Month_Split<<"x "<<(int)Rate<<endl;

            for(unsigned int k=0; k<Subtract_Value.size(); k++)
            {
                if(Loan_Value[j] != 0 && Subtract_Value[k] !=0)
                {
                    New_New_Price = New_Price - Subtract_Value[k]; New_Rate = New_New_Price / Month_Split; Covered_For = Subtract_Value[k] / Rate;
                    BuyersGuide<<"SUBTRACTING  | "<<Subtract_Label[k]<<" | COVERED FOR: "<<Covered_For<<" MONTHS | ";
                    BuyersGuide<<"LEFT TO PAY: "<<New_New_Price<<" | "<<(int)Month_Split<<"x "<<New_Rate<<" OR "<<(int)Month_Split-Covered_For<<"x "<<(int)Rate<<endl;
                }
            } BuyersGuide<<endl;
        } BuyersGuide<<endl; }


    ifstream Read; Read.open("Buyers Guide.txt"); string get;
    while(!Read.eof()){ getline(Read, get); cout<<get<<endl; } Read.close();
    BuyersGuide.close(); return 0;
}
