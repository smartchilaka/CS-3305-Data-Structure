#include <iostream>
#include <cstdlib>
#define MIN_TABLE_SIZE 10

using namespace std;
//enum EntryType {Legitimate, Empty, Deleted};
//struct HashNode
//{
//    int element;
//    enum EntryType info;
//};
//struct HashTable
//{
//    int size;
//    HashNode *table;
//};
//
//int HashFunc1(int key, int size)
//{
//    return key % size;
//}
//
//int HashFunc2(int key, int size)
//{
//    return (key * size - 1) % size;
//}
//
//HashTable *initializeTable(int size)
//{
//    HashTable *htable;
//    if (size < MIN_TABLE_SIZE)
//    {
//        cout<<"Table Size Too Small"<<endl;
//        return NULL;
//    }
//    htable = new HashTable;
//    if (htable == NULL)
//    {
//        cout<<"Out of Space"<<endl;
//        return NULL;
//    }
//    htable->size = size;
//    htable->table = new HashNode [htable->size];
//    if (htable->table == NULL)
//    {
//        cout<<"Table Size Too Small"<<endl;
//        return NULL;
//    }
//    for (int i = 0; i < htable->size; i++)
//    {
//        htable->table[i].info = Empty;
//        htable->table[i].element = NULL;
//    }
//    return htable;
//}
//
//int Find(int key, HashTable *htable)
//{
//    int hashVal= HashFunc1(key, htable->size);
//    int stepSize= HashFunc2(key, htable->size);
//    while (htable->table[hashVal].info != Empty &&
//           htable->table[hashVal].element != key)
//    {
//        hashVal = hashVal + stepSize;
//        hashVal = hashVal % htable->size;
//    }
//    return hashVal;
//}
//
//void Insert(int key, HashTable *htable)
//{
//    int pos = Find(key, htable);
//    if (htable->table[pos].info != Legitimate )
//    {
//        htable->table[pos].info = Legitimate;
//        htable->table[pos].element = key;
//    }
//}
//
//HashTable *Rehash(HashTable *htable)
//{
//    int size = htable->size;
//    HashNode *table = htable->table;
//    htable = initializeTable(2 * size);
//    for (int i = 0; i < size; i++)
//    {
//        if (table[i].info == Legitimate)
//            Insert(table[i].element, htable);
//    }
//    free(table);
//    return htable;
//}
//
//void Retrieve(HashTable *htable)
//{
//    for (int i = 0; i < htable->size; i++)
//    {
//        int value = htable->table[i].element;
//        if (!value)
//            cout<<"Position: "<<i + 1<<" Element: Null"<<endl;
//        else
//            cout<<"Position: "<<i + 1<<" Element: "<<value<<endl;
//    }
//}

int main()
struct TableRecord
{
    int key;
    double data;
};
const int MAX_KEY = 5000;
const int TABLE_SIZE = 811; // Knowing how table2 was implemented
int main(int argc, char *argv[])
{
    cout << "*************************************";
    cout << "\nChain hashing test";
    cout << "*************************************";
    // Create a table and add some values to it
    table<TableRecord> testTable;
    TableRecord testRecord;
    // Add 100 records to our table to get started
    for (int index = 0; index < 100; index++)
    {
        // Calculate a data value and a key for the record
        testRecord.data = (double) index * 50;
        testRecord.key = index * 50;
        testTable.insert(testRecord);
    }
    // Add a record that has the same key as existing: shouldn't affect count
    testRecord.data = 99.0;
    testRecord.key = 300;
    testTable.insert(testRecord);
    
    // Add some records that should generate collisions, knowing how we calculate
    //  the hash code as key % TABLE_SIZE, with size set to 811
    testRecord.data = 99.0;
    testRecord.key = TABLE_SIZE;
    testTable.insert(testRecord);
    testRecord.data = 99.0;
    testRecord.key = TABLE_SIZE * 2;
    testTable.insert(testRecord);
    testRecord.data = 99.0;
    testRecord.key = TABLE_SIZE * 10;
    testTable.insert(testRecord);
   
    
    // Show the results of our insertions
    cout << "\nAdded " << testTable.size() << " records to the test table" << endl;
    cout << "*************************************";
    // Try to remove some known key values, including some duplicates and some that collided
    testTable.remove(100);
    testTable.remove(150);
    testTable.remove(1500);
    testTable.remove(250);
    testTable.remove(250);
    testTable.remove(3750);
    testTable.remove(4900);
    testTable.remove(TABLE_SIZE * 2);
    testTable.remove(TABLE_SIZE);
    // Show the results after our removals
    cout << "\nAfter removals there are " << testTable.size() << " records in the test table" << endl;
    cout << "*************************************";
    // Search for some values that should and should not be there
    cout << "\nTry some searches for key values\n";
    bool found = false;
    for (int index = 0; index < MAX_KEY; index = index + 150)
    { 
        testTable.find(index, found, testRecord);
        if (found)
            cout << "Found record with key value " << index << ", data = " << testRecord.data << endl;
        else
            cout << "Did not find record with key value " << index << endl;
    }
    // Find the collision record that should still be there using is_present
    if (testTable.is_present(TABLE_SIZE * 10))
        cout << "\nSuccessfully found record with key equal to " << TABLE_SIZE * 10 << endl;
    else
        cout << "\n?? Failed to find record with key equal to " << TABLE_SIZE * 10 << endl;
    
    cout << "*************************************"<< endl;
    cout << "End of Test" << endl;
    cout << "*************************************" << endl;
    system("Pause");
}

