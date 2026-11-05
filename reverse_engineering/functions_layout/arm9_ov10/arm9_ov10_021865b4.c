
undefined4 FUN_021865b4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x424);
  while( true ) {
    if (iVar1 == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
      }
      return 0;
    }
    if (*(int *)(iVar1 + 0x18) == param_3) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return 1;
}

