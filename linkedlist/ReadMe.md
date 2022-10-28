Inplementing nodes in linked lists in C works best using a struct

The struct stores number

The next pointer *next points to the next node in the lists

We use typedef in order not to write struct all the time, and also make
code a little cleaner

Make three nodes and declare them as local variables

Link them up into a list using any arbitrary order

Make the head point to address of n3

Set each node's next pointer to the address of the next node

Set the next pointer for the last node to be NULL, so we know
when to stop

Create the function that points out the linked list

Parse in the head point to tell us where to start

Declare a temporary pointer and set it to start at the head pointer

Follow the links
    As long as the temporary pointer isn't NULL, we haven't hit the end yet
    Print out the value of the node the temporary points
    Then move temporary to point to the next node in the list, printing each
    node that it finds.

Call the function down in the main with the list created