#include<stdio.h>
#define MAX 20
int adj[MAX][MAX];
int visited[MAX];
int n;
void DFS(int vertex)
{
int i;
printf("%d",vertex);
visited[vertex]=1;
for(i=0;i<n;i++)
{
if(adj[vertex][i]==1&&visited[i]==0)
{
DFS(i);
}}}
int main()
{
int i,j,start;
printf("enter the number of vertices");
scanf("%d",&n);
printf("enter the adjacency matrix:");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}}
for(i=0;i<n;i++)
{
visited[i]=0;
}
printf("enter the starting vertex(0 to %d):",n-1);
scanf("%d",&start);
printf("DFS Traversal");
DFS(start);
for(i=0;i<n;i++)
{
if(visited[i]==0)
{
DFS(i);
}}
return 0;
}
