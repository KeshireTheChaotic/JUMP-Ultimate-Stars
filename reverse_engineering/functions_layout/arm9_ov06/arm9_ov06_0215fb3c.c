
void FUN_0215fb3c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(uint)*(byte *)(param_2 + 1) >> 5;
  *(uint *)(param_1 + 8 + iVar1 * 4) =
       *(uint *)(param_1 + 8 + iVar1 * 4) | 1 << (*(byte *)(param_2 + 1) & 0x1f);
  return;
}

