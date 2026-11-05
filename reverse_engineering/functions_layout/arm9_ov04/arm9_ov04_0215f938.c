
void FUN_0215f938(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_14 = param_4;
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    func_0x021b65cc();
    iVar1 = FUN_020876f8();
    if (iVar1 == 0) {
      while (iVar1 = FUN_02088360(), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
    }
    else {
      FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_020870e8();
      FUN_02087160();
      FUN_020872d4();
    }
    FUN_02088330();
    FUN_02087390();
    uVar2 = FUN_02026f94();
    *(undefined4 *)(iVar4 + 0x104) = uVar2;
    iVar1 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(*(int *)(iVar4 + 0x104) + 4),*(undefined4 *)(iVar1 + 4));
    local_18 = 0x80000;
    FUN_02152ca0(*(undefined4 *)(iVar4 + 0x104),&local_18);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 0x104) + 4),FUN_0215f100);
    piVar3 = *(int **)(*(int *)(iVar4 + 0x104) + 4);
    (**(code **)(*piVar3 + 0x24))(piVar3,iVar4);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215fa28);
  }
  return;
}

