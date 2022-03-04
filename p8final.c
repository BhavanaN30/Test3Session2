#include<stdio.h>
struct_point
{
  float x,y;
};
typedef struct_point point;
struct_line
{
  point p1,p2;
float distance;
};
typedef_struct_line line;
struct_polygon
{
  int n;
line i[100];
float perimeter;
};

line input_line()
{
  line 1;
  printf("Enter the coordintaes of line:-");
  scanf("%f %f",&1,p1,x,&1,p1,y);
  printf("Enter the coordintaes of line:-");
  scanf("%f %f",&1,p2,x,&1,p2,y);
}
void_input_polygon(polygon *p)
{
  int i;
  printf("Enter the no of sides\n");
  scanf("%d",&p->n);
  for(i=0;i<n;i++)
    {
      p->1[i]=input_line();
    }
  }
float find_distance(point p1,point p2)
{
return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
void find_length(Line *l)
{
  l->distance=find_distance(l->p1,l->p2);
{
  void find perimeter(polygon *p)
{
int i;
  p->perimeter=0;
  for(i=0;i<p->n;i++)
  {
    find length(&p->1[i]);
    p->perimeter +=p->[i].distance;
  }
}
  void output(polygo p)
  {
    printf("THE PERIMETER OF THE POLYGON is %f\n",p.perimeter);
  }
  
  int main()
  {
    
  }}