#include <stdio.h>
#pragma warning (disable : 4996)
#include<stdlib.h>


typedef struct node
{
   struct node * left;
   struct node * right;
   char data;
}node;

node * createNode(char data){
   node* newNode = (node*)malloc(sizeof(node));
   newNode -> left = NULL;
   newNode -> right = NULL;
   newNode -> data = data;
   return newNode;
}

void displayPreOrder(node* t) {
   if (t == NULL)
       return;

   printf("%c", t->data);
   displayPreOrder(t->left);
   displayPreOrder(t->right);
}


void displayInOrder(node* t) {
   if (t == NULL)
       return;

   displayInOrder(t->left);
   printf("%c", t->data);
   displayInOrder(t->right);
}

void displayPostOrder(node* t) {
   if (t == NULL)
       return;

   displayPostOrder(t->left);
   displayPostOrder(t->right);
   printf("%c", t->data);
}

node * checkNode(node * t, char ch){
   if(t != NULL){
       if(t->data == ch) return t;
   }
   if(t->left != NULL) {
       node*lNode = checkNode(t->left, ch);
   }
   return NULL;
}

void setNode(node* t, char ch1, char ch2, char ch3){
   t->data = ch1; //부모노드가 잇는 경우든 없는경우든 커버O
   if(ch2 != '.') t->left = createNode(ch2);
   if(ch3 != '.') t->right = createNode(ch3);
}

// 전위 순회 출력
void preorderPrint(node *nd){
   if(nd == NULL){
       return;
   }
   else{
       printf("%c", nd->data);
       preorderPrint(nd->left);
       preorderPrint(nd->right);
   }
}

// 중위 순회 출력
void inorderPrint(node *nd){
   if(nd == NULL){
       return;
   }
   else{
       inorderPrint(nd->left);
       printf("%c", nd->data);
       inorderPrint(nd->right);
   }
}

// 후위 순회 출력
void postorderPrint(node *nd){
   if(nd == NULL){
       return;
   }
   else{
       postorderPrint(nd->left);
       postorderPrint(nd->right);
       printf("%c", nd->data);
   }
}


int main()
{
   int N;
   scanf("%d",&N);
   char a,b,c;

   node*tree = createNode(NULL);
   node*tree2;

   for(int i = 0;i<N;i++)
   {
       scanf(" %c %c %c", &a, &b,&c);
       tree2 = checkNode(tree, a);
       if(checkNode(tree, a)){
           setNode(tree2, a, b, c);
           continue;
       }
       setNode(tree, a, b, c);
   }
   preorderPrint(tree); // 전위
   printf("\n");
   inorderPrint(tree); // 중위
   printf("\n");
   postorderPrint(tree); // 후위
   return 0;
}
