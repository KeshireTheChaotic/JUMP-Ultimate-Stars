
void FUN_020188ac(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  int *piStack_18;
  
  piStack_18 = param_4;
  piVar1 = (int *)(**(code **)(*param_2 + 0xa0))();
  iStack_4c = *piVar1;
  while (iVar2 = FUN_02016314(&iStack_4c,*(undefined2 *)*param_4), iVar2 != 0) {
    *param_4 = *param_4 + -0xe;
  }
  while (iVar2 = FUN_02016328(*(undefined2 *)(*param_4 + 0xe),&iStack_4c), iVar2 != 0) {
    *param_4 = *param_4 + 0xe;
  }
  iVar2 = (int)*(short *)*param_4;
  uVar3 = FUN_0200d12c(iStack_4c + iVar2 * -0x1000,((short *)*param_4)[7] - iVar2);
  uVar4 = (**(code **)(*param_2 + 0x98))();
  if ((int)*(short *)*param_4 == (uVar4 & 0xffff)) {
    FUN_0201899c(auStack_24);
    MIi_CpuCopy16(*param_4 + 2,auStack_24,0xc);
    (**(code **)(*param_3 + 0x24))(param_3,param_1,auStack_24);
  }
  else {
    FUN_0201899c(auStack_30);
    FUN_0201899c(auStack_3c);
    FUN_0201899c(auStack_48);
    MIi_CpuCopy16(*param_4 + 2,auStack_30,0xc);
    MIi_CpuCopy16(*param_4 + 0x10,auStack_3c,0xc);
    uStack_50 = uVar3;
    (**(code **)(*DAT_020a1018 + 0x40))(DAT_020a1018,auStack_48,auStack_30,auStack_3c,&uStack_50);
    (**(code **)(*param_3 + 0x24))(param_3,param_1,auStack_48);
  }
  return;
}

