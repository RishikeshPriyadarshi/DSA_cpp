char ch[6]="abcdef";
>>BTS:
    Here Firstly temporary memory will be craeated and "abcde" will be stored..
    and Secondly a MEMORY will be created 'ch' and the content of temporary
    memory will be stored..

    It is 2 Step process


char *c="abcde";
>>BTS:
    Here the first step is same we got a temporary memory because we intialized it 
    here and Stored "abcde" in it..

    and Secondly a pointr is created for c ,suppose the address is 723 of 1st Location
    so in a block here will be 723 as well..

    In Short ,We stored the content in the temporary memory and we pointed it to 
    1st block through pointer..

    Which is VERY-RISKY
    We should NOT do this in our lifetime..
