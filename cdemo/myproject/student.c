struct Student {
  char firstname[20];
  char lastname[20];
  char age[100];
  char id [100];
};

void printStudent(struct Student* student)
{
  printf("student information:\n");
  printf("first name: %s\n", student->firstname);
  printf("last name: %s\n", student->lastname);
  printf("age: %s\n", student->age);
  printf("id: %s\n", student->id);
}
