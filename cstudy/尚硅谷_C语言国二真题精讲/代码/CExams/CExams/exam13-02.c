///*给定程序modi.c 中函数fun的功能是：首先将大写字母转换为对应小
//写字母；若小写字母为a～u，则将其转换为其后的第5 个字母；若小写字母为v～
//z，使其值减21。转换后的小写字母作为函数值返回。例如,若形参是字母A，则转
//换为小写字母f；若形参是字母W，则转换为小写字母b。 请改正函数fun 中指定
//部位的错误，使它能得出正确的结果。 注意：不要改动main 函数，不得增行或
//删行，也不得更改程序的结构！*/
//#include < stdio.h >
//#include < ctype.h >
//
////分析
////1. 因为转换功能是在 fun 函数，因此直接阅读fun即可
////2. 因为我们是将大写的字符转成 小写的字符，因此 c=c-32; 应改成 c = c + 32
////3. 因为 将其转换为其后的第5 个字母， 因此 c=c-5; 应改成  c=c+5;
//char fun(char c)
//{ if(c>='A' && c<='Z')
//c=c+32;
//if(c>='a' && c<='u')
//c=c+5;
//else if(c>='v' && c<='z')
//c=c-21;
//return c;
//}
//main()
//{ char c1, c2;
//printf("\nEnter a letter(A-Z): "); c1=getchar();
//if(isupper(c1))
//{ c2=fun(c1);
//printf("\n\nThe letter '%c' change to '%c'\n", c1,c2);
//}
//else printf("\nEnter (A-Z)!\n");
//getchar();
//getchar();
//}