
void FUN_02176460(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_r12;
  bool bVar7;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = FUN_02175628();
  uVar3 = FUN_0217568c();
  if (*(byte *)(iVar6 + 0x21) != uVar3) {
    uVar1 = FUN_0217568c(uVar2);
    *(undefined1 *)(iVar6 + 0x21) = uVar1;
    for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar6 + 0x22); iVar5 = iVar5 + 1) {
      bVar7 = *(char *)(iVar6 + 0x21) != '\0';
      iVar4 = iVar6 + iVar5 * 4;
      if (bVar7) {
        in_r12 = -1;
      }
      if (!bVar7) {
        in_r12 = 1;
      }
      in_r12 = **(short **)(iVar4 + 8) * in_r12;
      local_20 = (undefined2)in_r12;
      local_1e = *(undefined2 *)(*(int *)(iVar4 + 8) + 2);
      local_1c = *(undefined2 *)(*(int *)(iVar4 + 8) + 4);
      local_1a = *(undefined2 *)(*(int *)(iVar4 + 8) + 6);
      FUN_0207b22c(*(undefined4 *)(iVar6 + 4),&local_20,iVar5);
    }
  }
  return;
}

