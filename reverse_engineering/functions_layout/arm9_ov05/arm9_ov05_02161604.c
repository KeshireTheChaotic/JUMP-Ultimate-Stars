
void FUN_02161604(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar2 + 0x44);
  *(int *)(iVar2 + 0x44) = iVar1 + 1;
  if (iVar1 < 0x16) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x44) = 0;
  FUN_0207342c(0x78,0xb,0,iVar2,param_4);
  return;
}

