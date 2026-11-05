
void FUN_02163bfc(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = FUN_02163d18(*param_1);
  if (iVar1 != 0) {
    puVar2 = (uint *)param_1[3];
    (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0xfc))();
    uVar3 = 0;
    if (*(char *)((int)param_1 + 0x12) == '\0') {
      for (; uVar3 < *puVar2; uVar3 = uVar3 + 1) {
        FUN_02162cc0(*(undefined4 *)(param_1[2] + 0x10),*(undefined1 *)((int)puVar2 + uVar3 + 4),0);
      }
      *(undefined1 *)((int)param_1 + 0x12) = 1;
    }
    else {
      for (; uVar3 < *puVar2; uVar3 = uVar3 + 1) {
        FUN_02162cc0(*(undefined4 *)(param_1[2] + 0x10),*(undefined1 *)((int)puVar2 + uVar3 + 4),1);
      }
      *(undefined1 *)((int)param_1 + 0x12) = 0;
    }
  }
  iVar1 = FUN_02163bc8(*(undefined4 *)(*param_1 + 0xc),0);
  if (iVar1 == 0) {
    return;
  }
  FUN_02023894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + 4),
               *(byte *)(param_1[1] + 0xd) + 0x401200 + (uint)*(byte *)((int)param_1 + 0x12),0);
  (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  return;
}

