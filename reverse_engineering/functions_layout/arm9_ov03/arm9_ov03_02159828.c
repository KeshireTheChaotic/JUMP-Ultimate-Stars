
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02159828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (puVar5[2] == -1) {
    uVar4 = 0x11;
  }
  else if (puVar5[2] == -2) {
    uVar4 = 0x12;
  }
  else {
    uVar4 = 0x13;
  }
  uVar2 = FUN_0214fb7c(*(undefined4 *)(puVar5 + 4));
  FUN_0214d28c(uVar2,uVar4,*puVar5,(int)(char)puVar5[1],param_4);
  if (*(int *)(puVar5 + 0x50) != 0) {
    FUN_0206ae98();
    *(undefined4 *)(puVar5 + 0x50) = 0;
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(puVar5 + 0x4c) != 0) {
    func_0x021bd500();
    *(undefined4 *)(puVar5 + 0x4c) = 0;
  }
  iVar1 = 0;
  do {
    if (*(int *)(puVar5 + iVar1 * 4 + 0x20) != 0) {
      piVar3 = *(int **)(*(int *)(puVar5 + iVar1 * 4 + 0x20) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
      (**(code **)(**(int **)(puVar5 + iVar1 * 4 + 0x20) + 8))();
      *(undefined4 *)(puVar5 + iVar1 * 4 + 0x20) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if (*(int **)(puVar5 + iVar1 * 4 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(puVar5 + iVar1 * 4 + 0xc) + 0xc))();
      *(undefined4 *)(puVar5 + iVar1 * 4 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(int **)(puVar5 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(puVar5 + 4) + 8))();
    *(undefined4 *)(puVar5 + 4) = 0;
  }
  func_0x021b65cc();
  FUN_0201b244(puVar5);
  return;
}

