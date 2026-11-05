
void FUN_021547e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 6;
  FUN_021547b8();
  iVar3 = 0;
  iVar2 = 0;
  do {
    uVar1 = FUN_02165fc4(0,iVar4,1);
    *(undefined4 *)((int)DAT_0216e6d0 + iVar2) = uVar1;
    FUN_02165b80(*(undefined4 *)((int)DAT_0216e6d0 + iVar2),0xffffffff,1);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 4);
  FUN_02165bc4(*DAT_0216e6d0,0xffffffff,param_1,param_3);
  FUN_02165bc4(DAT_0216e6d0[1],0xffffffff,param_2,param_3);
  FUN_02165bc4(DAT_0216e6d0[2],0xffffffff,param_1,param_4);
  FUN_02165bc4(DAT_0216e6d0[3],0xffffffff,param_2,param_4);
  return;
}

