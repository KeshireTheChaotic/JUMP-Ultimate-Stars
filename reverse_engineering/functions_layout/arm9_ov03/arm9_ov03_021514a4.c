
void FUN_021514a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(puVar4 + 4) + 4) + 0x44);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0214d47c(iVar1);
  }
  FUN_0214d28c(uVar2,(&DAT_0215d4b0)[(byte)puVar4[2]],*puVar4,0xffffffff,param_4);
  if (*(int *)(puVar4 + 0x58) != 0) {
    func_0x021bd500();
    *(undefined4 *)(puVar4 + 0x58) = 0;
  }
  iVar1 = 0;
  do {
    if (*(int *)(puVar4 + iVar1 * 4 + 0x20) != 0) {
      piVar3 = *(int **)(*(int *)(puVar4 + iVar1 * 4 + 0x20) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
      (**(code **)(**(int **)(puVar4 + iVar1 * 4 + 0x20) + 8))();
      *(undefined4 *)(puVar4 + iVar1 * 4 + 0x20) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if (*(int **)(puVar4 + iVar1 * 4 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(puVar4 + iVar1 * 4 + 0xc) + 0xc))();
      *(undefined4 *)(puVar4 + iVar1 * 4 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(int **)(puVar4 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(puVar4 + 4) + 8))();
    *(undefined4 *)(puVar4 + 4) = 0;
  }
  func_0x021b65cc();
  FUN_0201b244(puVar4);
  return;
}

