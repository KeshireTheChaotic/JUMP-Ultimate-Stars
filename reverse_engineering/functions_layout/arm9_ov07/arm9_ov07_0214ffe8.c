
void FUN_0214ffe8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar4 + 0xab) == '\0') {
    FUN_0207342c(0x78,2);
    FUN_0214f814(iVar4);
  }
  else {
    FUN_0207342c(0x78,0);
    *(undefined1 *)(iVar4 + 0xa8) = 0;
    FUN_0214fd84(iVar4);
    *(undefined1 *)(DAT_020a0f64 + 0x430) = 1;
    FUN_0208c538();
    iVar1 = func_0x02199e58();
    if (iVar1 == 0) {
      func_0x021bac28(*(undefined4 *)(iVar4 + 0x84),0x25,0,0,0,0,0,0);
      while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x84)), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
      FUN_0214fda4(iVar4);
      *(undefined1 *)(iVar4 + 0xa8) = 1;
      func_0x021b6214(*(undefined4 *)(param_1 + 4));
      *(undefined1 *)(DAT_020a0f64 + 0x430) = 0;
    }
    else {
      uVar2 = FUN_02070fd4();
      uVar3 = FUN_02070ff4();
      FUN_02166190(uVar2,uVar3,0x32,0,0);
      func_0x021a3228(*(undefined4 *)(iVar4 + 0x84),1,1);
      while (iVar1 = func_0x021a32a8(), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
      iVar1 = func_0x021a3280();
      if (iVar1 == 0) {
        iVar1 = func_0x021a32fc();
        if (iVar1 == 0) {
          while (iVar1 = func_0x021a315c(), iVar1 != 0) {
            (*DAT_020a0e18)();
          }
          FUN_0214fda4(iVar4);
          *(undefined1 *)(iVar4 + 0xa8) = 1;
          func_0x021b6214(*(undefined4 *)(param_1 + 4));
          *(undefined1 *)(DAT_020a0f64 + 0x430) = 0;
        }
        else {
          func_0x021a3248();
          iVar1 = FUN_02071f08();
          uVar2 = FUN_02070fd4();
          func_0x0219bacc(uVar2,iVar1 + 0x40);
          uVar2 = FUN_0214dd50();
          uVar3 = FUN_0214fa20(*(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
          FUN_0214dd80(uVar2,uVar3);
          uVar2 = FUN_0214dd50();
          FUN_0214dd60(uVar2,0xe);
          DAT_020afeb0 = 0;
          DAT_020afeb4 = 0;
          FUN_0214f7dc(iVar4);
        }
      }
      else {
        FUN_0214f7dc(iVar4,0);
      }
    }
  }
  return;
}

