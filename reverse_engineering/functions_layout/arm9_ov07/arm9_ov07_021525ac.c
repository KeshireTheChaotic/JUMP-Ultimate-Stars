
void FUN_021525ac(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == -0x7ffef000) {
    uVar3 = (**(code **)*param_2)();
    if (((((uVar3 & 3) != 0) &&
         (bVar1 = *(byte *)(*(int *)(*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(param_1 + 4) +
                                                                       0x124) * 4 + 0x4c) + 4) + 100
                                    ) + 0x10), (char)bVar1 < '\0')) && ((bVar1 & 3) >> 1 != 0)) &&
       (iVar2 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x48) + 4) + 0x194))(),
       *(int *)(*(int *)(param_1 + 4) + 0x124) != iVar2)) {
      (**(code **)(**(int **)(*(int *)(iVar4 + 0x48) + 4) + 0x198))();
    }
    uVar3 = (**(code **)*param_2)();
    if ((uVar3 & 4) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
      iVar4 = *(int *)(iVar2 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x640);
      if (iVar4 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_02070ff4();
        iVar5 = iVar4 * 0xc + iVar5;
      }
      if ((iVar5 == 0) || (iVar4 = func_0x021a2934(iVar5), iVar4 == 0)) {
        FUN_0207342c(0x78,2);
      }
      else {
        FUN_0207342c(0x78,0);
        func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 4));
        func_0x021bac28(*(undefined4 *)(iVar2 + 0x1e4),0x37,0,0,0,0,0,0);
        while (iVar4 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0x1e4)), iVar4 == 0) {
          (*DAT_020a0e18)();
        }
        iVar4 = func_0x021bacfc(*(undefined4 *)(iVar2 + 0x1e4));
        if (iVar4 != 0) {
          func_0x021a2958(iVar5);
          FUN_02152100(iVar2);
          FUN_0215214c(iVar2,0);
        }
        func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 4));
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x30) + 4),1);
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x48) + 4),1);
      }
    }
  }
  return;
}

