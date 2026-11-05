
void FUN_0215c748(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02071f54();
  *(int *)(param_1 + 0x304) = (int)(char)(&DAT_020afeb0)[DAT_020afedd];
  *(uint *)(param_1 + 0x308) = (uint)(byte)(&DAT_020afeb4)[DAT_020afedd];
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x74));
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  func_0x021b4104(uVar2,uVar2,4);
  FUN_02159ea8(param_1,FUN_0215ca44 + 1);
  if ((*(int *)(param_1 + 0x304) == 0) && (iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x304) = 1;
  }
  return;
}

