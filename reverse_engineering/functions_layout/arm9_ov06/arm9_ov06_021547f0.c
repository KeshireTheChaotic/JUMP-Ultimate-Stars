
void FUN_021547f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214f90c(*(undefined4 *)(iVar4 + 4));
  if (*(int *)(iVar4 + 4) == 0) {
    uVar2 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    if (0x57030 < iVar1) {
      iVar1 = 0x57030;
    }
    FUN_0200d12c(iVar1,0x3c);
    uVar2 = FUN_0200d12c(extraout_r1 * 100,0x3c);
    uVar3 = FUN_0200d12c(iVar1,0x3c);
    FUN_0200d12c(uVar3,0x3c);
    uVar3 = FUN_0200d12c(uVar3,0x3c);
    FUN_0200d12c(uVar3,100);
    uVar3 = extraout_r1_01;
    uVar5 = extraout_r1_00;
  }
  FUN_021551d0(iVar4,iVar4 + 0x3c,0x5f001e,0,0xe,0xfffffff0,2,uVar3,param_4);
  FUN_021551d0(iVar4,iVar4 + 0x44,0x5f001e,1,0x31,0xfffffff0,2,uVar5);
  FUN_021551d0(iVar4,iVar4 + 0x4c,0x5f001e,2,0x54,0xfffffff0,2,uVar2);
  FUN_021548bc(iVar4);
  return;
}

