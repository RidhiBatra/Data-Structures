#Linear Search


int search(int* A, int n, int ITEM)
{
int found = -1;
for(int i = 0; i < n; i++)
{
if(A[i] == ITEM)
{ found = i; break; }
}
return found;
}
