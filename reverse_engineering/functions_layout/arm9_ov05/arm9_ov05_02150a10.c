
void FUN_02150a10(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  FUN_02150090(iVar1,1);
  return;
}

