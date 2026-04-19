#include <stdio.h>
#include <string.h>

struct Applicant {
    int id;
    char name[50];
    char qualification[50];
};

struct Applicant a[100];
int count = 0;

// Load data from file
void loadFromFile() {
    FILE *fp = fopen("applicants.txt", "r");
    if (fp == NULL) return;

    while (fscanf(fp, "%d %[^\n] %[^\n]",
                  &a[count].id,
                  a[count].name,
                  a[count].qualification) != EOF) {
        count++;
    }
    fclose(fp);
}

// Save data to file
void saveToFile() {
    FILE *fp = fopen("applicants.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d %s %s\n",
                a[i].id,
                a[i].name,
                a[i].qualification);
    }
    fclose(fp);
}

// Add applicant
void addApplicant() {
    printf("\nEnter ID: ");
    scanf("%d", &a[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", a[count].name);

    printf("Enter Qualification: ");
    scanf(" %[^\n]", a[count].qualification);

    count++;
    saveToFile();
    printf("Applicant Added!\n");
}

// Display applicants
void displayApplicants() {
    if (count == 0) {
        printf("\nNo data available!\n");
        return;
    }

    printf("\n--- Applicants ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nQualification: %s\n",
               a[i].id, a[i].name, a[i].qualification);
    }
}

// Search applicant
void searchApplicant() {
    int id, found = 0;
    printf("\nEnter ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (a[i].id == id) {
            printf("\nFound!\nID: %d\nName: %s\nQualification: %s\n",
                   a[i].id, a[i].name, a[i].qualification);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not found!\n");
}

// Update applicant
void updateApplicant() {
    int id, found = 0;
    printf("\nEnter ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (a[i].id == id) {
            printf("Enter new name: ");
            scanf(" %[^\n]", a[i].name);

            printf("Enter new qualification: ");
            scanf(" %[^\n]", a[i].qualification);

            saveToFile();
            printf("Updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Applicant not found!\n");
}

// Delete applicant
void deleteApplicant() {
    int id, found = 0;
    printf("\nEnter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (a[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                a[j] = a[j + 1];
            }
            count--;
            saveToFile();
            printf("Deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Applicant not found!\n");
}

// Main function
int main() {
    int choice;
    loadFromFile();

    while (1) {
        printf("\n--- Job Recruitment Portal ---\n");
        printf("1. Add Applicant\n");
        printf("2. Display Applicants\n");
        printf("3. Search Applicant\n");
        printf("4. Update Applicant\n");
        printf("5. Delete Applicant\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addApplicant(); break;
            case 2: displayApplicants(); break;
            case 3: searchApplicant(); break;
            case 4: updateApplicant(); break;
            case 5: deleteApplicant(); break;
            case 6: 
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}