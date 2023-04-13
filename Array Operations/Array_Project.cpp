#include <iostream>
using namespace std;
void array_insert();
void array_update();
void array_delet();
void array_split();
void array_merge();
void shorted_array_merge();
void menu();

int main()
{

    cout << "------------------WELCOME TO ARRAY WORLD--------------" << endl;
    cout << endl;
    cout << "What do you want to do??" << endl;
    cout << "1.Array Insert" << endl
         << "2.Array Update" << endl
         << "3.Array Delete" << endl
         << "4.Array Split" << endl
         << "5.Array Merge" << endl
         << "6.Shorted Array Merge" << endl
         << "7.EXIT" << endl;
    int n;
    cout << "ENTER THE NUMBER FROM (1/2/3/4/5/6): "
         << " ";
    cin >> n;
    switch (n)
    {
    case 1:
        array_insert();
        break;
    case 2:
        array_update();
        break;
    case 3:
        array_delet();
        break;
    case 4:
        array_split();
        break;
    case 5:
        array_merge();
        break;
    case 6:
        shorted_array_merge();
        break;
    case 7:
        exit(0);
        break;
    default:
        cout << "INVALID INPUT ENTERED!!!!" << endl;
        break;
    }
}

void menu()
{
    // menu section
    int A;
    cout << endl;
    cout << "            "
         << "**Whtat do you want do??" << endl;
    cout << "              "
         << "1.Array Insert"
         << endl
         << "              "
         << "2.Array Update" << endl
         << "              "
         << "3.Array Delete" << endl
         << "              "
         << "4.Array Split" << endl
         << "              "
         << "5.Array Merge" << endl
         << "              "
         << "6.Shorted Array Merge"
         << "              "
         << "7.EXIT" << endl;

    cout << "ENTER THE NUMBER FROM (1/2/3/4/5/6): "
         << " ";
label_1:
    cin >> A;
    switch (A)
    {
    case 1:
        array_insert();
        break;
    case 2:
        array_update();
        break;
    case 3:
        array_delet();
        break;
    case 4:
        array_split();
        break;
    case 5:
        array_merge();
        break;
    case 6:
        shorted_array_merge();
        break;
    case 7:
        exit(0);
        break;
    default:
        cout << "     "
             << "Invaid input!!!" << endl;
        goto label_1;
    }
}

void array_insert()
{
    system("cls");
    cout << "------------WLCOME TO ARRAY INSERT SECTION------------" << endl;
    cout << endl;

    int n, j;
    cout << "Enter the number of elements: "
         << " ";
    cin >> n;
    int arr_A[n];
    cout << endl;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Element " << i << ":"
             << " ";
        cin >> arr_A[i];
    }

    //  Taking insert position & value
    int i, v;
    cout << "Enter the index position & value: "
         << " ";
    cin >> i >> v;

    // Main section of Inserting
    if (i >= n)
    {
        arr_A[i] = v;
        n++;
    }
    else
    {
        for (int j = n; j > i; j--)
        {
            arr_A[j] = arr_A[j - 1];
        }
        arr_A[i] = v;
        n++;
    }
    // Printing the new Inserted value array
    cout << "The new array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr_A[i] << " ";
    }
    menu();
}
void array_update()
{
    system("cls");
    cout << "------------WLCOME TO ARRAY UPDATE SECTION------------" << endl;
    cout << endl;
    // Taking array from user
    int n;
    cout << "Enter the number of elements: "
         << " ";
    cin >> n;
    int arr_A[n];

    cout << endl;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ":"
             << " ";
        cin >> arr_A[i];
    }

    // update section
    int i, v;
    cout << endl;
    cout << "Enter the index position & value: "
         << " ";
    cin >> i >> v;
    if (i >= n)
    {
        cout << "UPDATE IS NOT POSSIBLE!!!!" << endl;
    }
    else
    {
        arr_A[i] = v;
    }
    // printing the updated array
    cout << "The new array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr_A[i] << " ";
    }

    menu();
}
void array_delet()
{
    system("cls");
    cout << "------------WLCOME TO ARRAY DELET SECTION------------" << endl;
    cout << endl;
    // Taking array from user
    int n;
    cout << "Enter the number of elements: "
         << " ";
    cin >> n;
    int arr_A[n];
    cout << endl;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ":"
             << " ";
        cin >> arr_A[i];
    }

    // DELETE SECTION
    int i;
    cout << "Enter the index position you wanna delete: "
         << " ";
    cin >> i;
    if (i >= n)
    {
        printf("Delete is not possible!!!\n");
    }
    else
    {
        for (int j = i + 1; j < n; j++)
        {
            arr_A[j - 1] = arr_A[j];
        }
        n = n - 1;
    }
    // PRINTING THE NEW ARRAY ELEMENTS
    for (int i = 0; i < n; i++)
    {
        cout << arr_A[i] << " ";
    }
    menu();
}

void array_split()
{
    system("cls");
    cout << "------------WLCOME TO ARRAY SPLIT SECTION------------" << endl;
    cout << endl;
    // printing the array
    int n;
    int j = -1, k = -1;

    cout << "Enter the number of elements: "
         << " ";
    cin >> n;
    int a[n];
    int b[n], c[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " index value: ";
        cin >> a[i];
    }
    cout << "The inputed array are: "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // spliting the array
    if (n == 0)
    {
        cout << "The array is empty!!!!" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                j = j + 1;
                b[j] = a[i];
            }
            else
            {
                k = k + 1;
                c[k] = a[i];
            }
        }
    }

    // printing the spliting arrays
    cout << endl;
    cout << "even array is here: "
         << " ";
    for (int i = 0; i <= j; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "odd array is here: "
         << " ";

    for (int i = 0; i <= k; i++)
    {
        cout << c[i] << " ";
    }
    menu();
}
void array_merge()
{
    system("cls");
    cout << "------------WLCOME TO ARRAY MERGE SECTION------------" << endl;
    cout << endl;

    int n, m, i, j;
    cout << "1st array number of element: " << endl;
    cin >> n;
    int B[n];
    for (i = 0; i < n; i++)
    {
        cout << "element " << i << ":"
             << " ";
        cin >> B[i];
    }

    cout << "2nd array number element: " << endl;
    cin >> m;
    int C[m];

    for (j = 0; j < m; j++)
    {
        cout << "element " << j << ":"
             << " ";
        cin >> C[j];
    }

    int A[m + n];

    for (j = 0; j < n; j++)
    {
        A[j] = B[j];
    }
    for (i = 0; i < m; i++)
    {
        A[j] = C[i];
        j++;
    }

    // printing the merged array
    cout << endl;
    cout << "The merged array is here: "
         << " ";
    for (int i = 0; i < m + n; i++)
    {
        cout << A[i] << " ";
    }
    menu();
}

void shorted_array_merge()
{
    system("cls");
    cout << "------------WLCOME TO SHORTED ARRAY MERGE SECTION------------" << endl;
    cout << endl;

    int m, p;
    cout << "Enter the 1st array element: "
         << " ";
    cin >> m;
    cout << "Enter the 2nd array element: "
         << " ";
    cin >> p;

    int array_B[m], merge[m + p];

    for (int i = 0; i < m; i++)
    {
        cout << "element " << i << ":"
             << " ";
        cin >> array_B[i];
    }
    int array_C[p];

    cout << "Enter the 2nd array element: " << endl;
    for (int j = 0; j < p; j++)
    {
        cout << "element " << j << ":"
             << " ";
        cin >> array_C[j];
    }

    int i = -1, j = 0, k = 0;

    /////main shorted array merge section/////
    while (j < m && k < p)
    {
        if (array_B[j] > array_C[k])
        {
            i = i + 1;
            merge[i] = array_C[k];
            k = k + 1;
        }
        else
        {
            i = i + 1;
            merge[i] = array_B[i];
            j = j + 1;
        }
    }

    if (j < m)
    {
        for (int r = j; r < m; r++)
        {
            i = i + 1;
            merge[i] = array_B[r];
        }
    }
    else
    {
        for (int r = k; r < p; r++)
        {
            i = i + 1;
            merge[i] = array_C[r];
        }
    }

    // printing the shorted merge array
    cout << endl;
    cout << "The merged array is: "
         << " ";
    for (int i = 0; i < m + p; i++)
    {
        cout << merge[i] << " ";
    }
    cout << endl;

    menu();
}

//====================== THANK YOU FOR WATCHING =====================///////
