
void FUN_02152804(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0214fb7c(*(undefined4 *)(puVar3 + 4));
  FUN_0214d28c(uVar2,0xd,*puVar3,0xffffffff);
  if (*(int *)(puVar3 + 0x564) != 0) {
    FUN_02075758();
    *(undefined4 *)(puVar3 + 0x564) = 0;
  }
  iVar1 = 0;
  do {
    if (*(int *)(puVar3 + iVar1 * 4 + 0x55c) != 0) {
      FUN_0206ae98();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0x55c) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0x38) + 8))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0x38) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2d);
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0xec) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0xec) + 8))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0xec) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0x13c) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0x13c) + 8))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0x13c) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0x18c) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0x18c) + 8))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0x18c) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0xc) + 0xc))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (*(int **)(puVar3 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(puVar3 + 4) + 8))();
    *(undefined4 *)(puVar3 + 4) = 0;
  }
  func_0x021b65cc();
  iVar1 = FUN_0203b3e4();
  FUN_02152798(*(undefined4 *)(iVar1 + 0x88),0,0);
  iVar1 = FUN_0203b3f4();
  FUN_02152798(*(undefined4 *)(iVar1 + 0x88),0,0);
  FUN_0201b244(puVar3);
  return;
}

