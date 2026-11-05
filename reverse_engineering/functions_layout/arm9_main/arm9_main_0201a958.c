
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a958(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[-5];
  if (param_2 != 0) {
    FUN_0201a548(iVar4);
  }
  if ((code *)param_1[-2] != (code *)0x0) {
    (*(code *)param_1[-2])(1,*param_1);
  }
  *param_1 = 0;
  iVar2 = param_1[-4];
  *(int *)(iVar4 + 0x410) = *(int *)(iVar4 + 0x410) + iVar2;
  iVar3 = param_1[-7];
  iVar5 = param_1[-6];
  *(int *)(iVar5 + 4) = iVar3;
  *(int *)(iVar3 + 8) = iVar5;
  uVar1 = FUN_0201a31c(iVar4,param_1 + -8,iVar2,iVar3,param_4);
  if (param_2 != 0) {
    uVar1 = (uint)DAT_020a0c35;
  }
  if (param_2 != 0 && uVar1 != 0) {
    _DAT_04000208 = *(undefined2 *)(iVar4 + 0x49c);
  }
  return;
}

