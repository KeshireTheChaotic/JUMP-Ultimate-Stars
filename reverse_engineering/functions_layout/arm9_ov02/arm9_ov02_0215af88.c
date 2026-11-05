
void FUN_0215af88(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 4));
  *(int *)(iVar1 + 0x54) = iVar2;
  if (iVar2 == 1) {
    FUN_0207342c(0x78,0);
  }
  else {
    FUN_0207342c(0x78,1);
  }
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),uRam0215afdc);
  return;
}

