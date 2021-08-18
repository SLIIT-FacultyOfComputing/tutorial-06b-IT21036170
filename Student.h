class Student {
  private:
    int studentId;
    char name[20];
  // private section
  //    int studentId
  //    name <- 20 charcters
  public:
    void assignDetails(int sid, char sname[]);
    void display();
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
};
