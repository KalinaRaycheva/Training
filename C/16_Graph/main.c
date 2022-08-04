//https://codeacademy.bg/wp-content/uploads/2022/04/Meeting17_01.07_.pdf

// //DFS
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 100
// #define INITIAL 1
// #define VISITED 2
// #define FINISHED 3

// int n; //number of vertices in the graph
// int adj[MAX][MAX];
// void create_graph();
// int state[MAX];
// void DF_Traversel();
// void DFS(int v);

// int main()
// {
//     create_graph();
//     DF_Traversel();
//     return 0;
// }

// void DF_Traversel()
// {
//     int v;

//     for (int v = 0; v < n; v++)
//         state[v] == INITIAL;
    
//     DFS(0); //start DFS from vertex 0

//     for (int v = 0; v < n; v++){
//         if (state[v] == INITIAL)
//             DFS(v);
//     }
//     printf("\nGraph is Acyclic\n");
// }

// void DFS(int v)
// {
//     int i;
//     state[v] = VISITED;
//     for (int i = 0; i < n; i++)
//     {
//         if (adj[v][i] == 1)
//         {
//             if (state[i] == INITIAL)
//             {
//                 DFS(i);
//             }
//             else if (state[i] == VISITED)
//             {
//                 printf("\nBack edge (%d,%d) found\n", v, i);
//                 printf("\nGraph is cyclic\n");
//                 exit(1);
//             }
//         }
//     }
//     state[v] = FINISHED;
// }

// void create_graph()
// {
//     int i, max_edges, origin, destin;
//     printf("\nEnter number ofvertices: ");
//     scanf("%d", &n);
//     max_edges = n * (n - 1);
//     for(i = 1; i <= max_edges; i++)
//     {
//         printf("\nEnter edge %d( -1 -1 to quit) : ", i);
//         scanf("%d %d", &origin, &destin);
//         if ((origin == -1) && (destin == -1))
//         {
//             break;
//         }
//         if (origin >= n || destin >= n || origin < 0 || destin < 0)
//         {
//             printf("\nInvalid edge!\n");
//             i++;
//         }
//         else
//         {
//             adj[origin][destin] = 1;
//         }
//     }
// }

// /*
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 100
// #define INITIAL 1
// #define VISITED 2
// #define FINISHED 3

// int n;
// int adj[MAX][MAX];
// void create_graph();
// int state[MAX];
// void DF_Traversel();
// void DFS(int v);

// int main()
// {
//     create_graph();
//     DF_Traversel();
//     return 0;
// }

// void DF_Traversel()
// {
//     for (int v = 0; v < n; v++)
//         if (state[v] == INITIAL)
//             DFS(v);
//     printf("\nGraph is Acyclic\n");
// }

// void DFS(int v)
// {
//     state[v] = VISITED;
//     for (int i = 0; i < n; i++)
//     {
//         if (adj[v][i] == 1)
//         {
//             if (state[i] == INITIAL)
//             {
//                 DFS(i);
//             }
//             else if (state[i] == VISITED)
//             {
//                 printf("\nBack edge (%d,%d) found\n", v, i);
//                 printf("\nGraph is cyclic\n");
//                 exit(1);
//             }
//         }
//     }
//     state[v] = FINISHED;
// }

// void create_graph()
// {
//     int i, max_edges, origin, destin;
//     printf("\nEnter number ofvertices: ");
//     scanf("%d", &n);
//     max_edges = n * (n - 1);
//     for(i = 1; i <= max_edges; i++)
//     {
//         printf("\nEnter edge %d( -1 -1 to quit) : ", i);
//         scanf("%d %d", &origin, &destin);
//         if ((origin == -1) && (destin == -1))
//         {
//             break;
//         }
//         if (origin >= n || destin >= n || origin < 0 || destin < 0)
//         {
//             printf("\nInvalid edge!\n");
//             i++;
//         }
//         else
//         {
//             adj[origin][destin] = 1;
//         }
//     }
// }
// ...............................................
// #include <stdio.h>

// char **words(char *s, int count);

// int main()
// {
//     char **p;
//     p = words(p, 3);
//     return 0;
// }

// char **words(char *s, int count)
// {
//     char **result = (char **)malloc((count) * sizeof(char *));
//     for (int j = 0; j < count; j++)
//         *(result + j) = (char *)malloc(100);

//     return (char **)result;
// }
// ...........................................................................
// #include <stdio.h>

// int main()
// {
//     char *str[4] = {"String", "Topics", "Hello", "World"};
//     for(int i = 0; i < 4; i++){
//         int j = 0;
//         while(*(str[i] + j) != '\0'){
//             printf("%c", *(str[i]+j));
//             j++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// */