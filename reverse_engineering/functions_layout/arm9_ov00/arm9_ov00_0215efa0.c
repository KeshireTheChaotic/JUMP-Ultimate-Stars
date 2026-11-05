
void FUN_0215efa0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  bool in_ZR;
  
  if (in_ZR) {
    return;
  }
  FUN_02028384(*(undefined4 *)(unaff_r5 + 4),ALControllerImp::Create);
  *(undefined2 *)(unaff_r4 + 0x6c) = 0xb4;
  iVar1 = FUN_0215f4e4();
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_r4 + 0x68) = 1;
  }
  iVar1 = FUN_0215f4e4();
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_r4 + 0x68) = 1;
  }
  piVar2 = *(int **)(*(int *)(unaff_r4 + 0x20) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  return;
}

