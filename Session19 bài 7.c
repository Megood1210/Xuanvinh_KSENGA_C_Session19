#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void deleteStudentById(int id, Student students[], int *size) {
    int i, found = 0;
    for (i = 0; i < *size; i++) {
        if (students[i].id == id) {
            for (int j = i; j < *size - 1; j++) {
                students[j] = students[j + 1];
            }
            (*size)--;  
            found = 1;
            break;
        }
    } 
    if (!found) {
        printf("Khong co sinh vien voi ID %d \n", id);
    }
}
void printStudents(Student students[], int size) {
    if (size == 0) {
        printf("Danh sách sinh viên tr?ng.\n");
        return;
    }    
    printf("\nDanh sách sinh viên:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, ten: %s, tuoi: %d, so dien thoai: %s\n", 
                students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    Student students[] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 22, "0987654321"},
        {3, "Tran Duy C", 21, "0345678901"},
        {4, "Pham Thanh D", 23, "0112233445"},
        {5, "Hoang Nguyen E", 19, "0167894321"}
    };
    int size = 5;
    printStudents(students, size);
    int idToDelete = 3;
    printf("\nXoa sinh vien co ID = %d \n", idToDelete);
    deleteStudentById(idToDelete, students, &size);
    printStudents(students, size);
    return 0;
}


