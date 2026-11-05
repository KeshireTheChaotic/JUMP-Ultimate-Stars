
void FUN_02163ee4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    iVar1 = FUN_02163d18(*param_1);
    if (iVar1 != 0) {
      puVar4 = (uint *)param_1[3];
      (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0xfc))();
      for (uVar5 = 0; uVar5 < *puVar4; uVar5 = uVar5 + 1) {
        iVar3 = (uint)*(byte *)((int)puVar4 + uVar5 + 4) * 0x14 + *(int *)(param_1[2] + 0x14);
        iVar1 = *(int *)(iVar3 + 4);
        FUN_0216ab58(*(undefined4 *)(*(int *)(iVar3 + 8) + 0xc),&DAT_021724d8,0,
                     *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),7,0,0,0xffffffff,0,0);
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
      local_2c = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&local_2c);
      (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0x6c))();
    }
  }
  return;
}

