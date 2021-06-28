typedef struct Element Element;
struct Element
{
    int value;
    Element * next;
};


typedef struct List List;
struct List
{
    Element * first;
};

List * initList(int);
void add(List*, int);
void push(List*, int);
void displayList(List*);
void sortList(List*);
void delete(List*, int);
void delete_(Element*, int);
List* invert(List*);
int ispalindrome(List*);
void set(List*);