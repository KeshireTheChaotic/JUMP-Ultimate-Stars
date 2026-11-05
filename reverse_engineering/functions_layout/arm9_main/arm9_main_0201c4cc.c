
int * FUN_0201c4cc(undefined4 param_1,int *param_2,int *param_3,int param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)FUN_02011b38();
  iVar2 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar3 = (**(code **)(*param_3 + 0x28))();
  uVar5 = 0;
  while( true ) {
    if (DAT_020a1064 <= uVar5) {
      return (int *)0x0;
    }
    iVar4 = (**(code **)(*(int *)(&DAT_020a16b0)[uVar5] + 0x18))
                      ((int *)(&DAT_020a16b0)[uVar5],iVar2 + iVar3);
    if (iVar4 != 0) break;
    uVar5 = uVar5 + 1;
  }
  iVar4 = 0;
  if ((param_4 != 0) &&
     (iVar4 = (**(code **)(*(int *)(&DAT_020a16b0)[uVar5] + 0x40))
                        ((int *)(&DAT_020a16b0)[uVar5],iVar2 + iVar3,param_4), iVar4 == -1)) {
    return (int *)0x0;
  }
  if (param_5 == '\0') {
    iVar4 = -1;
  }
  (**(code **)(*piVar1 + 0x38))();
  iVar2 = (**(code **)(*(int *)(&DAT_020a16b0)[uVar5] + 0x34))();
  iVar3 = (**(code **)(*param_2 + 0xe0))();
  if (iVar2 == iVar3) {
    if ((int *)param_2[0x11] != (int *)0x0) {
      (**(code **)(*(int *)param_2[0x11] + 0xc))();
    }
  }
  else {
    param_2 = (int *)(**(code **)(*(int *)(&DAT_020a16b0)[uVar5] + 0x10))
                               ((int *)(&DAT_020a16b0)[uVar5],param_1);
  }
  (**(code **)(*param_2 + 0xb0))(param_2,param_3,param_4,0,iVar4);
  (**(code **)(*piVar1 + 0x3c))();
  return param_2;
}

