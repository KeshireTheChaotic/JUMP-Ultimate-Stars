
int FUN_02032598(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 8)) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}

