
bool FUN_021595e0(undefined4 param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = param_3 * 0x4dc;
  param_2 = param_2 + 0x48e;
  *(short *)(param_2 + iVar1) = *(short *)(param_2 + iVar1) + -1;
  return *(short *)(param_2 + iVar1) != 0;
}

