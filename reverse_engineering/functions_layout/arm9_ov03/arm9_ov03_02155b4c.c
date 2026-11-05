
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02155b4c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  puVar4 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0214fb7c(*(undefined4 *)(puVar4 + 4));
  if (((*(uint *)(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 0x18) & 8) == 0) ||
     (iVar1 = FUN_0214fb7c(*(undefined4 *)(puVar4 + 4)),
     (*(uint *)(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 0x18) & 0x20) != 0)) {
    iVar1 = FUN_0214fb7c(*(undefined4 *)(puVar4 + 4));
    uVar2 = *(uint *)(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 0x18);
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 2;
    }
  }
  else {
    *puVar4 = 0xf;
    uVar5 = 0;
  }
  uVar3 = FUN_0214fb7c(*(undefined4 *)(puVar4 + 4));
  FUN_0214d28c(uVar3,0xe,*puVar4,uVar5);
  if (*(int *)(puVar4 + 0xd0) != 0) {
    FUN_02075758();
    *(undefined4 *)(puVar4 + 0xd0) = 0;
  }
  if (*(int *)(puVar4 + 0xc4) != 0) {
    FUN_02074608();
    *(undefined4 *)(puVar4 + 0xc4) = 0;
  }
  if (*(int *)(puVar4 + 0xcc) != 0) {
    FUN_0206ae98();
    *(undefined4 *)(puVar4 + 0xcc) = 0;
  }
  if (*(int *)(puVar4 + 200) != 0) {
    FUN_0206ae98();
    *(undefined4 *)(puVar4 + 200) = 0;
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(puVar4 + 0xc0) != 0) {
    FUN_02034d7c();
    *(undefined4 *)(puVar4 + 0xc0) = 0;
  }
  iVar1 = 0;
  do {
    if (*(int **)(puVar4 + iVar1 * 4 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(puVar4 + iVar1 * 4 + 0x34) + 8))();
      *(undefined4 *)(puVar4 + iVar1 * 4 + 0x34) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  do {
    if (*(int **)(puVar4 + iVar1 * 4 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(puVar4 + iVar1 * 4 + 0xc) + 0xc))();
      *(undefined4 *)(puVar4 + iVar1 * 4 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*(int **)(puVar4 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(puVar4 + 4) + 8))();
    *(undefined4 *)(puVar4 + 4) = 0;
  }
  func_0x021b65cc();
  iVar1 = FUN_0203b3e4();
  FUN_02155b04(*(undefined4 *)(iVar1 + 0x88),0);
  iVar1 = FUN_0203b3f4();
  FUN_02155b04(*(undefined4 *)(iVar1 + 0x88),0);
  FUN_0201b244(puVar4);
  return;
}

