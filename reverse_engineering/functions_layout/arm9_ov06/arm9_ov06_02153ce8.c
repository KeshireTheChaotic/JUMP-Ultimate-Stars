
void FUN_02153ce8(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined1 param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  if (param_2 != -1) {
    if (param_2 < 0x40) {
      if (*(int *)(&DAT_02171e2c + param_2 * 4) != -1) {
        FUN_0207342c(0x7a);
      }
      if (param_9 == 2) {
        iVar1 = FUN_0206c7fc(*(undefined4 *)(&DAT_02171e6c + param_2 * 8),param_4,param_5,0);
      }
      else {
        iVar1 = FUN_0206c7fc(*(undefined4 *)(&DAT_02171e6c + param_9 * 4 + param_2 * 8),param_4,
                             param_5,0);
      }
      piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
      (**(code **)(*piVar2 + 0x5c))(piVar2,param_6);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x14) + (param_2 + -0x40) * 8;
      iVar1 = FUN_0206c7fc(*(undefined4 *)(*(int *)(param_1 + 0x14) + (param_2 + -0x40) * 8),param_4
                           ,param_5,1);
      piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
      (**(code **)(*piVar2 + 0x5c))(piVar2,param_6);
      iVar1 = (int)*(short *)(param_1 + (uint)*(ushort *)(iVar3 + 4) * 2 + 0x18);
      if (iVar1 != -1) {
        FUN_0207342c(iVar1,*(undefined2 *)(iVar3 + 6));
      }
    }
  }
  if (param_3 != 0xffffffff) {
    if ((int)param_3 < 0x40) {
      iVar1 = FUN_0206c7fc(param_3 | 0x240000,param_4,param_5 + -0x20,0);
      (**(code **)(**(int **)(iVar1 + 4) + 0x104))(*(int **)(iVar1 + 4),(&DAT_02171e0c)[param_8]);
      local_20 = *(int *)(&DAT_02171e1c + param_7 * 4);
      if (local_20 != 0x1000) {
        FUN_020235dc(*(undefined4 *)(iVar1 + 4),&local_20);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x14) + (param_3 - 0x40) * 8;
      FUN_0206c7fc(*(undefined4 *)(*(int *)(param_1 + 0x14) + (param_3 - 0x40) * 8),param_4,param_5,
                   1);
      iVar1 = (int)*(short *)(param_1 + (uint)*(ushort *)(iVar3 + 4) * 2 + 0x18);
      if (iVar1 != -1) {
        FUN_0207342c(iVar1,*(undefined2 *)(iVar3 + 6));
      }
    }
  }
  return;
}

