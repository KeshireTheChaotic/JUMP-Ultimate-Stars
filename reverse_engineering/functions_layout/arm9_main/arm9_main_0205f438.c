
int FUN_0205f438(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 & 1) + ((param_1 & 2) >> 1);
  iVar2 = (param_2 & 1) + ((param_2 & 2) >> 1);
  return (iVar1 + ((param_1 & 4) >> 2)) * (iVar2 + ((param_2 & 4) >> 2)) +
         (param_1 >> 3) * (((param_2 & 4) >> 2) + iVar2 * 2) +
         (param_2 >> 3) * (((param_1 & 4) >> 2) + iVar1 * 2) + (param_1 >> 3) * (param_2 >> 3);
}

