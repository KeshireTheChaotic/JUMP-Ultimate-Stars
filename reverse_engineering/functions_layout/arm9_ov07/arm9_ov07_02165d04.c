
void FUN_02165d04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  FUN_0207342c(0x78,0xb);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  FUN_02165d48(param_1,uVar2);
  return;
}

