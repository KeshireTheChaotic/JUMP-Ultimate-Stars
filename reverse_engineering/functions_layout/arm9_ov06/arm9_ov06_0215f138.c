
void FUN_0215f138(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x6c] <= param_2) {
    return;
  }
  iVar2 = *(int *)(param_1[0x5d] + 4);
  *(undefined1 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0xffffffff;
  iVar2 = (*(int **)(*param_1 + 4))[0x14];
  iVar3 = *(int *)(iVar2 + 0x10);
  iVar4 = *(int *)(iVar2 + 0xc);
  (**(code **)(**(int **)(*param_1 + 4) + 0xd8))();
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  iVar2 = *(int *)(*(int *)param_1[0x5d] + 0xc);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x70))();
  FUN_02023f7c(*(undefined4 *)(iVar2 + 4),0);
  piVar1 = (int *)param_1[param_2 + 0x5f];
  param_1[0x5d] = (int)piVar1;
  iVar2 = *(int *)(*piVar1 + 8);
  *param_1 = iVar2;
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x50);
  piVar1[3] = ((int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc) << 0xc;
  piVar1[4] = ((int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc) << 0xc;
  if (*(byte *)(piVar1 + 9) != (*(byte *)(piVar1 + 9) | 1)) {
    (**(code **)(*piVar1 + 0x18))();
  }
  *(byte *)(piVar1 + 9) = *(byte *)(piVar1 + 9) | 0x31;
  (**(code **)(**(int **)(*param_1 + 4) + 0xd8))(*(int **)(*param_1 + 4),1);
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  FUN_02023894(*(undefined4 *)(*(int *)(*(int *)param_1[0x5d] + 0xc) + 4),
               *(undefined4 *)(*(int *)param_1[0x5d] + 0x88),0);
  return;
}

