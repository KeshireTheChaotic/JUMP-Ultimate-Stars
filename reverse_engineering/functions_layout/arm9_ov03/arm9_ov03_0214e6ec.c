
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214e6ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(puVar3 + 4) + 4) + 0x44);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0214d47c(iVar1);
  }
  FUN_0214d28c(uVar2,0,*puVar3,(int)(char)puVar3[1]);
  if (*(int *)(puVar3 + 0x60) != 0) {
    FUN_0206ae98();
    *(undefined4 *)(puVar3 + 0x60) = 0;
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(puVar3 + 0x5c) != 0) {
    func_0x021bd500();
    *(undefined4 *)(puVar3 + 0x5c) = 0;
  }
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0x20) + 8))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0x20) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if (*(int **)(puVar3 + iVar1 * 4 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(puVar3 + iVar1 * 4 + 0xc) + 0xc))();
      *(undefined4 *)(puVar3 + iVar1 * 4 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(int **)(puVar3 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(puVar3 + 4) + 8))();
    *(undefined4 *)(puVar3 + 4) = 0;
  }
  func_0x021b65cc();
  FUN_0201b244(puVar3);
  return;
}

