
void FUN_02161578(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  *(byte *)(iVar2 + 0xb2) = *(byte *)(iVar2 + 0xb2) & 0xfb;
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

