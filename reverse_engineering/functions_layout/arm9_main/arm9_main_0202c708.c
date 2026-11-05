
int FUN_0202c708(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    iVar2 = *param_1 + iVar1 * 0x10;
  } while (param_2 != *(ushort *)(iVar2 + 6));
  return iVar2;
}

