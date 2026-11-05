
void FUN_021619b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_020869d0(*(undefined4 *)(iVar2 + 0x44));
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar2 + 0xae) = 1;
  FUN_0207342c(0x78);
  func_0x021b65cc();
  FUN_02161d48(iVar2);
  return;
}

