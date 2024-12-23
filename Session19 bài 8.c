#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void sortStudentsByName(Student students[], int size) {
    Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
void printStudents(Student students[], int size) {
    if (size == 0) {
        printf("Danh sach sinh vien trong \n");
        return;
    }
    printf("\nDanh sach sinh vien: \n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, ten: %s, tuoi: %d, so dien thoai: %s\n", 
                students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    Student students[5] = {
        {1, "Nguyen Van A", 18, "0123456789"},
        {2, "Le Thi B", 19, "0987654321"},
        {3, "Tran Duy C", 20, "0345678901"},
        {4, "Pham Thanh D", 21, "0112233445"},
        {5, "Hoang Nguyen E", 22, "0167894321"}
    };
    int size = 5;
    printf("Danh sach sinh vien truoc khi sap xep: \n");
    printStudents(students, size);
    sortStudentsByName(students, size);
    printf("\nDanh sach sinh vien sau khi sap xep theo ten: \n");
    printStudents(students, size);   
    return 0;
}



