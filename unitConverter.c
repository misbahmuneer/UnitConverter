#include <stdio.h>
#include <math.h>

int main() {
    while(1){
    int category;
    int choice;
    float input, result;

    printf("              *** UNIT CONVERTER ***\n");
    printf("Select a category:\n");
    printf("1. Mass\n2. Angle\n3. Temperature\n4. Currency (USD/INR)\n5. Energy\n6. Length\n7. Speed\n");
    scanf("%d", &category);

    switch(category) {
        case 1: // Mass
            printf("Mass Converter:\n");
            printf("1. Kilograms to Pounds\n");
            printf("2. Pounds to Kilograms\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter Kilograms: ");
                scanf("%f", &input);
                result = input * 2.20462;
                printf("Pounds: %.2f\n", result);
            } else if (choice == 2) {
                printf("Enter Pounds: ");
                scanf("%f", &input);
                result = input * 0.453592;
                printf("Kilograms: %.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        case 2: // Angle
            printf("Angle Converter:\n");
            printf("1. Degrees to Radians\n");
            printf("2. Radians to Degrees\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter Degrees: ");
                scanf("%f", &input);
                result = input * (M_PI / 180.0);
                printf("Radians: %.4f\n", result);
            } else if (choice == 2) {
                printf("Enter Radians: ");
                scanf("%f", &input);
                result = input * (180.0 / M_PI);
                printf("Degrees: %.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        case 3: // Temperature
            printf("Temperature Converter:\n");
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Fahrenheit to Celsius\n");
            printf("3. Celsius to Kelvin\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter Celsius: ");
                scanf("%f", &input);
                result = (input * 9 / 5) + 32;
                printf("Fahrenheit: %.2f\n", result);
            } else if (choice == 2) {
                printf("Enter Fahrenheit: ");
                scanf("%f", &input);
                result = (input - 32) * 5 / 9;
                printf("Celsius: %.2f\n", result);
            } else if (choice == 3) {
                printf("Enter Celsius: ");
                scanf("%f", &input);
                result = input + 273.15;
                printf("Kelvin: %.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        case 4: // Currency
            printf("Currency Converter (Rates are static):\n");
            printf("1. USD to INR\n");
            printf("2. INR to USD\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter USD: ");
                scanf("%f", &input);
                result = input * 83.12; // sample rate
                printf("INR: ₹%.2f\n", result);
            } else if (choice == 2) {
                printf("Enter INR: ");
                scanf("%f", &input);
                result = input / 83.12;
                printf("USD: $%.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        case 5: // Energy
            printf("Energy Converter:\n");
            printf("1. Joules to Calories\n");
            printf("2. Calories to Joules\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter Joules: ");
                scanf("%f", &input);
                result = input / 4.184;
                printf("Calories: %.2f\n", result);
            } else if (choice == 2) {
                printf("Enter Calories: ");
                scanf("%f", &input);
                result = input * 4.184;
                printf("Joules: %.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        case 6: // Length
            printf("Length Converter:\n");
            printf("1. Meters to Feet\n");
            printf("2. Kilometers to Miles\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter Meters: ");
                scanf("%f", &input);
                result = input * 3.28084;
                printf("Feet: %.2f\n", result);
            } else if (choice == 2) {
                printf("Enter Kilometers: ");
                scanf("%f", &input);
                result = input * 0.621371;
                printf("Miles: %.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        case 7: // Speed
            printf("Speed Converter:\n");
            printf("1. km/h to m/s\n");
            printf("2. m/s to km/h\n");
            printf("3. km/h to mph\n");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter speed in km/h: ");
                scanf("%f", &input);
                result = input / 3.6;
                printf("Speed in m/s: %.2f\n", result);
            } else if (choice == 2) {
                printf("Enter speed in m/s: ");
                scanf("%f", &input);
                result = input * 3.6;
                printf("Speed in km/h: %.2f\n", result);
            } else if (choice == 3) {
                printf("Enter speed in km/h: ");
                scanf("%f", &input);
                result = input * 0.621371;
                printf("Speed in mph: %.2f\n", result);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid category. Please choose from 1 to 7.\n");
    }
         int user;
    printf("do you want to continue,enter 1 for yes and 0 for no");
    scanf("%d",& user);
    if(user==0){
        break;
    }
        
    }
    return 0;

}
