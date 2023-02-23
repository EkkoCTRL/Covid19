/* 
    The following software is made by me only.This software is not meant to be used as an official diagnosis.
    If this software is showcased please give credit.

    Github Link: https://github.com/EkkoCTRL/Covid19

    Medical Referenses used:
    https://www.cdc.gov/coronavirus/2019-ncov/need-extra-precautions/people-with-medical-conditions.html
    https://www.cdc.gov/coronavirus/2019-ncov/symptoms-testing/symptoms.html

*/

#include <iostream>

using namespace std;

void WelcomeScreen()
{
    // Splash art
    cout << R"(
   -------------------------------------
  <Welcome to the Covid-19 Test Software >
   -------------------------------------
  \
   \ .--.
    |o_o |
    |:_/ |
   //   \ \
  (|     | )
 /'\_   _/'\
 \___)=(___/)";


    cout << "\n";
    system("pause");
    system("cls");

}

void TermsOfService(string termsOfService)
{
    // Terms of Service
    cout << "-------------------------------------------\n";
    cout << "|         Medical Advice Disclaimer        | \n";
    cout << "-------------------------------------------\n";
    cout << "DISCLAIMER: THIS WEBSITE DOES NOT PROVIDE NEDICAL ADVICE\n";
    cout << "The information, including but not limted to, text, graphics, images and other material\n";
    cout << "contained on this software are for informational purposes only. No material on this software\n";
    cout << "is intended to be a substitute for professional medical advice, diagnosis or treatment. Always\n";
    cout << "seek the advice of your physician or other qualified health care provider with any questions you\n";
    cout << "may have regarding a medical condition or treatment and before undertaking a new health care\n";
    cout << "regimen, and never disregard professional medical advice or delay in seeking it because of something\n";
    cout << "you have read on this software.\n\n";

    cout << "Do you agree with the Terms of Service? (Y/n): ";
    cin >> termsOfService;


    // Checks the answer of the user.
    if (termsOfService == "Y" || termsOfService == "y")
    {
        // This can be stored in a database incase you need proof that the user agreed to the terms of service
        termsOfService = "yes";
    }
    else if (termsOfService == "N" || termsOfService == "n")
    {
        system("cls");
        cout << "You need to agree to the terms of service to use this software.\n\n";
        system("pause");
        exit(0);
    }
    else
    {
        cout << "Error: Incorrect user input...\n";
        system("pause");
        exit(0);
    }
    system("cls");
}


/* The program begins below this line */


int main()
{
    // System variables Section
    string termsOfService;
    int medicalConditionsMenu = 0, symptomsMenu = 0;
    float medicalConditions = 0, symptoms = 0, percentage = 0;

    // Welcome Screen
    WelcomeScreen();

    // Outputs the terms of service to the user. If they agree to them the program continues. If they deny the program closes
    TermsOfService(termsOfService);


    // Start Medical Conditions Section
    do
    {
        // Medical Condition List
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
        cout << "|         Medical Conditions        |\n";
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
        cout << "1) Cancer\n";
        cout << "2) Kidney diseases\n";
        cout << "3) Liver diseases\n";
        cout << "4) Lung diseases\n";
        cout << "5) Tuberculosis\n";
        cout << "6) Diabetes\n";
        cout << "7) Heart conditions\n";
        cout << "8) HIV infection\n";
        cout << "9) Overweight and obesity\n";
        cout << "0) Next\n\n";

        cout << "Make a selection by enterng a number from 1-9 or 0 to continue: ";
        cin >> medicalConditionsMenu;

        // Checks if the user entered a number from 1-9
        if (medicalConditionsMenu == 1 || medicalConditionsMenu == 2 || medicalConditionsMenu == 3 || medicalConditionsMenu == 4 || medicalConditionsMenu == 5 || medicalConditionsMenu == 6 || medicalConditionsMenu == 7 || medicalConditionsMenu == 8 || medicalConditionsMenu == 9)
        {
            // If the previous condition is met it adds 1 to "medicalConditions"
            medicalConditions++;
        }

        // Exits the program if the user enters 0
        else if (medicalConditionsMenu == 0)
        {
            break;
        }

        // If the user enters anything other than 1-9 or 0 it outputs an error and closes the program.
        else
        {
            cout << "Error: Incorrect user input...\n";
            system("pause");
            exit(0);
        }
        system("cls");

    } while (medicalConditionsMenu != 0);
    // End of Medical Conditions Section

    system("cls");

    // Start of Symptoms Section
    do
    {
        // Symptoms Menu List
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
        cout << "|          Covid-19 Symptoms        |\n";
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
        cout << "1) Fever or chills\n";
        cout << "2) Cough\n";
        cout << "3) Shortness of breath\n";
        cout << "4) Fatigue\n";
        cout << "5) Muscle or body aches\n";
        cout << "6) New loss of taste or smell\n";
        cout << "7) Sore throat\n";
        cout << "8) Nausea or vomiting\n";
        cout << "9) Diarrhea\n";
        cout << "0) Next\n\n";

        cout << "Make a selection by enterng a number from 1-9 or 0 to continue: ";
        cin >> symptomsMenu;

        // Checks if the user entered a number from 1-9
        if (symptomsMenu == 1 || symptomsMenu == 2 || symptomsMenu == 3 || symptomsMenu == 4 || symptomsMenu == 5 || symptomsMenu == 6 || symptomsMenu == 7 || symptomsMenu == 8 || symptomsMenu == 9)
        {
            // If the previous condition is met it adds 1 to "symptoms"
            symptoms++;
        }

        // Exits the program if the user enters 0
        else if (symptomsMenu == 0)
        {
            break;
        }

        // If the user enters anything other than 1-9 or 0 it outputs an error and closes the program.
        else
        {
            cout << "Error: Incorrect user input...\n";
            system("pause");
            exit(0);
        }
        system("cls");

    } while (symptomsMenu != 0);
    // End of Symptoms Section

    system("cls");

    // Percentage formula
    percentage = ((symptoms + medicalConditions) * 100) / 18;

    //Checks if it is 100% and takes away 2%
    if (percentage == 100)
    {
        percentage = percentage - 2;
    }

    // Results section start
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout << "|          Covid-19 Results         |\n";
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
    cout << "The chances of you having Covid-19 are: %" << percentage << "\n\n";

    if (percentage >= 50 && percentage <= 100)
    {
        cout << "Please visit a qualified health care provider.\n";
        cout << "As there is a good chance you are infected with Covid-19.\n\n";
    }
    else if (percentage <= 49 && percentage >= 0)
    {
        cout << "There is a possibility you are not infected with Covid-19.\n";
        cout << "However you should still visit a qualified health care provider.\n\n";
    }
    else
    {
        "Error: Possible system error... Please try again...";
    }
    // Results section ends
}