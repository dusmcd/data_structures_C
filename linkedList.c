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
  int *nodeArray = (int *)malloc(nodes * sizeof(int));
  struct node *HEAD;
  struct node *currentNode;
  struct node *nextNode;

  if (!nodeArray)
  {
    exit(1);
    return -1;
  }
  createNodeArray(nodes, nodeArray);

  HEAD = giveValue(createNode(), *nodeArray);
  currentNode = HEAD;

  for (int i = 1; i < nodes; i++)
  {
    nextNode = giveValue(createNode(), *(nodeArray + i));
    giveNext(currentNode, nextNode);
    printf(" --- \n");
    printf("| %d  | => | %p |\n", currentNode->value, currentNode->next);
    printf(" --- \n");
    currentNode = currentNode->next;
  }

  free(nodeArray);
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
  printf("Enter node values (press enter after each entry):\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%i", givenArray);
    givenArray++;
  }
  return givenArray;
}
