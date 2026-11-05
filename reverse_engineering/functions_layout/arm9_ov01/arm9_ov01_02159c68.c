
void FUN_02159c68(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 == 0xf380) {
    FUN_02159de8(param_1,param_2,0xf080,0,param_4);
  }
  else {
    FUN_02159de8(param_1,param_2,0xf090,0,param_4);
  }
  iVar1 = FUN_02074294(param_1);
  iVar1 = iVar1 * 2;
  *(char *)(param_1 + iVar1) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + iVar1 + 1) = (char)param_3;
  *(undefined1 *)(param_1 + iVar1 + 2) = 0;
  return;
}

