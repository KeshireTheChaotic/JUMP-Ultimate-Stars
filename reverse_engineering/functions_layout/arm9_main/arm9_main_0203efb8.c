
void FUN_0203efb8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(short *)(param_1 + 0x4ac) != 0) {
    FUN_02067178();
    for (uVar3 = 0; uVar3 < *(ushort *)(param_1 + 0x4ac); uVar3 = uVar3 + 1) {
      iVar1 = uVar3 * *(int *)(param_1 + 0x4a8);
      iVar2 = *(int *)(param_1 + 0x4a4) + iVar1;
      if (*(int *)(*(int *)(param_1 + 0x4a4) + iVar1) != 0) {
        FUN_020670a0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                     *(undefined4 *)(iVar2 + 0x10));
        (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
        if (*(char *)(iVar2 + 0x14) != '\0') {
          uVar4 = *(undefined4 *)(iVar2 + 8);
          iVar1 = FUN_0201a9ec(uVar4);
          if (iVar1 == 0) {
            FUN_0201a958(uVar4,1);
          }
        }
      }
    }
    FUN_02067058();
    *(undefined2 *)(param_1 + 0x4ac) = 0;
  }
  if (*(short *)(param_1 + 0x4b8) != 0) {
    FUN_0206702c();
    for (uVar3 = 0; uVar3 < *(ushort *)(param_1 + 0x4b8); uVar3 = uVar3 + 1) {
      iVar1 = uVar3 * *(int *)(param_1 + 0x4b4);
      iVar2 = *(int *)(param_1 + 0x4b0) + iVar1;
      if (*(int *)(*(int *)(param_1 + 0x4b0) + iVar1) != 0) {
        FUN_02066fe4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                     *(undefined4 *)(iVar2 + 0xc));
      }
    }
    FUN_02066fac();
    *(undefined2 *)(param_1 + 0x4b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x4bc) = 1;
  return;
}

