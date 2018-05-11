#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *next;
};

struct node *createNode();
struct node *giveValue(struct node *nodePointer, int value);
struct node *giveNext(struct node *currentNode, struct node *nextNode);
int getNumberOfNodes();
int *createNodeArray(int size, int *givenArray);

int main(void)
{
  int nodes = getNumberOfNodes();
  int nodeArray[nodes];
  createNodeArray(nodes, nodeArray);

  for (int i = 0; i < nodes; i++)
  {
    printf("nodeArray[%d]: %d\n", i, nodeArray[i]);
  }

  return 0;
}

struct node *createNode()
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  return newNode;
}

struct node *giveValue(struct node *nodePointer, int value)
{
  nodePointer->value = value;
  return nodePointer;
}

struct node *giveNext(struct node *currentNode, struct node *nextNode)
{
  currentNode->next = nextNode;
  return currentNode;
}

int getNumberOfNodes()
{
  int numNodes;
  printf("How many nodes do you want to create?\nEnter here: ");
  scanf("%d", &numNodes);
  return numNodes;
}

int *createNodeArray(int size, int *givenArray)
{
  printf("Enter node values (press enter after each entry): ");
  for (int i = 0; i < size; i++)
  {
    scanf("%i", givenArray);
    givenArray++;
  }
  return givenArray;
}
