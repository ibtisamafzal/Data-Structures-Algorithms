#include <iostream>
using namespace std;
struct Node{

int val ;
Node* next;

Node(int data){
 val = data;
  next = NULL;
}
};
void insertatstart(Node* &head , int val){
  Node* n = new Node(val);
  n -> next = head;
  head = n;
}
void deleteatstart(Node* &head){
  Node* temp = head;
  head  = head->next;
  free(temp);
}
void deleteatlast(Node* &head) {
  Node* sl = head;
  while(sl->next->next!=NULL){
    sl = sl->next;
  }
  Node* temp = sl->next;
  sl->next = NULL;
  free(temp);
  }

void deletionatapoint(Node* &head,int pos){
  Node* temp = head;
  int cur_point = 0;
  if(pos == 0){
    deleteatstart(head);
  }
  while(cur_point!=pos-1){
    temp = temp->next;
    cur_point++;
  }
  Node* t = temp->next;
  temp->next = temp->next->next;
  free(t);
  
  
  
}
void display(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->val <<"-> ";
    temp = temp->next;
  }
  cout<<"null"<<endl;
}
int main(){
  Node* head = NULL;
  insertatstart(head , 23);
  //display(head);
  insertatstart(head , 21);
  //display(head);
  insertatstart(head , 11);
  display(head);
  deleteatstart(head);
  display(head);
  deleteatlast(head);
  display(head);

}