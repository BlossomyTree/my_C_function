char* my_strstr(const char* p1, const char* p2)
{
    assert(p1);
    assert(p2);
    char* s1, * s2;
    char* cur = (char*)p1;
    if (!*p2)
        return (char*)p1;
    while (*cur)
    {
        s1 = cur;
        s2 = (char*)p2;
        while (*s1 && *s2 && !(*s1 - *s2))
        {
            s1++;
            s2++;
        }
        if (!*s2)
            return cur;
        cur++;
        /*if (!*s1)
          return NULL;*///后面那个return NULL和while(*cur)配合相当于实现了这样一个功能

    }
    return NULL;
    //拓展：KMP算法--字符串匹配算法（效率更高）
}
