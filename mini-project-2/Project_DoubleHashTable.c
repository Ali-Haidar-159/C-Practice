#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

struct data
{
	int key;
	int value;
};

struct hashtable
{

	int flag;
	struct data *item;
};

struct hashtable *array;
int max, prime ;
int size = 0;

int hashfunction1(int key)
{
	return (key % max);
}

int hashfunction2(int key)
{
	return (prime - (key % prime));
}

void insert(int key, int value)
{
	int hash1 = hashfunction1(key);
	int hash2 = hashfunction2(key);

	int index = hash1;

	struct data *new_item = (struct data*) malloc(sizeof(struct data));
	new_item->key = key;
	new_item->value = value;

	if (size == max)
        {
		printf("\n Hash Table is full, cannot insert more items \n");
		return;
	}

	while (array[index].flag == 1) {
		if (array[index].item->key == key)
                {
			printf("\n Key already present. To update the value press '1' . If not then press '0' \n");
			printf("Enter choice : ");
			int u ;
			scanf("%d",&u);
if(u==1)
{
			array[index].item->value = value;
			return;
}
else if (u==0)
{
        return;
}
		}
		index = (index + hash2) % max;
		printf("\n probing \n");
	}
	array[index].item = new_item;
	array[index].flag = 1;
	size++;
	printf("\n Key (%d) has been inserted \n", key);
}

void Delete(int key)
{
	int hash1 = hashfunction1(key);
	int hash2 = hashfunction2(key);
	int index = hash1;

	if (size == 0)
        {
		printf("\n Hash Table is empty \n");
		return;
	}
while (array[index].flag != 0)
        {
		if (array[index].flag == 1  &&  array[index].item->key == key)
                {
			array[index].item = NULL;
			array[index].flag = 0;
			size--;
			printf("\n Key (%d) has been removed \n", key);
			return;
		}
		index = (index + hash2) % max;
	}
	printf("\n Key (%d) does not exist \n", key);
}

void search(int key)
{
	int hash1 = hashfunction1(key);
	int hash2 = hashfunction2(key);
	int index = hash1;

	if (size == 0)
        {
		printf("\n Hash Table is empty \n");
		return;
	}
while (array[index].flag != 0)
        {
		if (array[index].item->key == key)
                {
                        printf("\n Array[%d] has elements \n Key (%d) and Value (%d) \n", index, array[index].item->key, array[index].item->value);
                return;
		}
		index = (index + hash2) % max;
		if (index == hash1)
                {
			break;
		}
	}
	printf("\n Key (%d) does not exist \n", key);
}

int size_of_hashtable()
{
	return size;
}

void display()
{
	int i;
	for (i = 0; i < max; i++)
        {
		if (array[i].flag != 1)
                {
			printf("\n Array[%d] has no elements \n", i);
		}
		else
                {
			printf("\n Array[%d] has elements \n Key (%d) and Value (%d) \n", i, array[i].item->key, array[i].item->value);
		}
	}
}

void main()
{
	int choice, key, value, n, c;

	printf("Enter size of  Array (must be >= 3) : ");
        int x;
        scanf("%d",&x);
        max = x;
        array = (struct hashtable*) malloc(max * sizeof(struct hashtable));
        set_array();
        printf("Largest prime number less than array size : %d\n",prime);

		while(1)
                        {
                                printf("\n                                               MENU                                       \n");
		printf("1.Inserting item in the Hash Table"
         "\n2. Delete item from the Hash Table"
                              "\n3.Check the size of Hash Table"
                              "\n4.Display Hash Table"
                               "\n5.Search key in Hash Table"
                                 "\n6. Exit"
		       "\n\n Enter your choice :");

		scanf("%d", &choice);

		switch(choice)
                {
		case 1: printf("\nInserting element in Hash Table");
		            printf("\nEnter key and value : ");
		            scanf("%d %d", &key, &value);
		            insert(key, value);
		            break;

   		case 2: printf("\nDeleting in Hash Table \n Enter the key to delete :");
		            scanf("%d", &key);
		            Delete(key);
		            break;

		case 3: n = size_of_hashtable();
		            printf("\nSize of Hash Table is :%d", n);
		            break;

		case 4: display();
                            break;

                case 5: printf("\nSearching in Hash Table \n Enter the key to search :");
		            scanf("%d", &key);
		            search(key);
		            break;

                case 6 : exit(0);

		default: printf("Wrong Input\n");
		}
	}
return 0 ;
}

void set_array()
{
	int i;
	for(i = 0; i < max; i++)
        {
		array[i].item = NULL;
		array[i].flag = 0;
	}
	prime = get_prime();
}

int get_prime()
{
	int i,j;
	for (i = max - 1; i >= 1; i--)
        {
		int flag = 0;
		for (j = 2; j <= (int)sqrt(i); j++)
                {
			if (i % j == 0)
                        {
				flag++;
			}
		}
		if (flag == 0)
                {
			return i;
		}
        }
}
