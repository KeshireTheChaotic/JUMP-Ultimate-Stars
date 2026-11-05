
undefined4 FUN_02001084(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_1c [2];
  
  aiStack_1c[0] = 1;
  if ((param_1 == (int *)0x0) || (iVar2 = *param_1, iVar2 == 0)) {
    return 0xffffffff;
  }
  if (param_5 == 0) {
    uVar1 = FUN_020012d8(param_1,param_4);
    iVar2 = FUN_02000f88(param_2,uVar1,iVar2 - param_4,param_1[2],param_3);
  }
  else {
    uVar1 = FUN_020012d8(param_1,param_4);
    iVar2 = FUN_02000f38(param_2,uVar1,iVar2 - param_4,param_1[2],param_3,aiStack_1c);
  }
  if ((iVar2 == 0) || (aiStack_1c[0] == 0)) {
    return 0xffffffff;
  }
  uVar1 = FUN_0200d12c(iVar2 - param_1[5],param_1[2]);
  return uVar1;
}

