
void FUN_02164034(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    iVar1 = FUN_02163d18(*param_1);
    if (iVar1 != 0) {
      puVar3 = (uint *)param_1[3];
      (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0xfc))();
      for (uVar4 = 0; uVar4 < *puVar3; uVar4 = uVar4 + 1) {
        FUN_02085c40(*(undefined4 *)(*(int *)(param_1[2] + 0x10) + 0x30),*(int *)(param_1[2] + 0x10)
                     ,*(undefined1 *)((int)puVar3 + uVar4 + 4),0);
      }
    }
    iVar1 = FUN_02163bc8(*(undefined4 *)(*param_1 + 0xc),0);
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 1;
      *(undefined2 *)(param_1 + 4) = 0xb4;
    }
  }
  else {
    iVar1 = param_1[4];
    *(short *)(param_1 + 4) = (short)iVar1 + -1;
    if ((short)iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      local_20 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&local_20);
      (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0x6c))();
      puVar3 = (uint *)param_1[3];
      for (uVar4 = 0; uVar4 < *puVar3; uVar4 = uVar4 + 1) {
        FUN_02085c40(*(undefined4 *)(*(int *)(param_1[2] + 0x10) + 0x30),*(int *)(param_1[2] + 0x10)
                     ,*(undefined1 *)((int)puVar3 + uVar4 + 4),1);
      }
    }
  }
  return;
}

