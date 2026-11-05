
void FUN_0215c4d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02071f54();
  *(int *)(param_1 + 0x304) = (int)DAT_020afeb0;
  *(uint *)(param_1 + 0x308) = (uint)DAT_020afeb4;
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  func_0x021b4104(uVar2,uVar2,4);
  FUN_02159ea8(param_1,0x215c7f5);
  if ((*(int *)(param_1 + 0x304) == 0) && (iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x304) = 1;
  }
  return;
}

