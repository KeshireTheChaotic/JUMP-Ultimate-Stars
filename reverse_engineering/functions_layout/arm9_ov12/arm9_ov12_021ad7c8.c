
void FUN_021ad7c8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else {
      uVar5 = param_1[0x52];
      uVar1 = FUN_021ad38c();
      if (uVar5 < uVar1) {
        param_2 = 0;
      }
      else {
        iVar4 = param_1[0x52];
        iVar2 = FUN_021ad38c(param_1);
        if (iVar4 - iVar2 < param_2) {
          param_2 = param_1[0x52];
          iVar2 = FUN_021ad38c(param_1);
          param_2 = param_2 - iVar2;
        }
      }
    }
  }
  else {
    uVar5 = param_1[0x52];
    uVar1 = FUN_021ad38c();
    if (uVar5 < uVar1) {
      param_2 = 0;
    }
    else if (param_2 < 0) {
      iVar4 = param_1[0x52];
      iVar2 = FUN_021ad38c(param_1);
      param_2 = param_2 + (iVar4 - iVar2) + 1;
    }
    else {
      iVar4 = param_1[0x52];
      iVar2 = FUN_021ad38c(param_1);
      if (iVar4 - iVar2 < param_2) {
        iVar4 = param_1[0x52];
        iVar2 = FUN_021ad38c(param_1);
        param_2 = (param_2 - iVar4) + iVar2 + -1;
      }
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x19c))();
  if ((iVar2 != param_2) && (param_1[0x54] != 0)) {
    uVar3 = FUN_021acab4(param_1);
    (*(code *)param_1[0x54])(uVar3,iVar2);
    iVar2 = (**(code **)(*param_1 + 0x19c))();
    if (param_2 != iVar2) {
      return;
    }
  }
  iVar2 = param_2 * *(int *)(*(int *)(param_1[0x58] + 100) + 0xe8) * 0x1000;
  if (iVar2 != param_1[0x5d]) {
    param_1[0x5d] = iVar2;
    *(undefined1 *)(param_1[0x19] + 0x40) = 1;
    iVar2 = param_1[0x4f];
    iVar4 = (**(code **)(*param_1 + 0x194))();
    if (iVar4 < param_2 + iVar2) {
      (**(code **)(*param_1 + 0x198))(param_1,param_2 + iVar2);
      return;
    }
    iVar2 = (**(code **)(*param_1 + 0x194))();
    iVar4 = FUN_021ad38c(param_1);
    if ((param_2 - param_1[0x4f]) + iVar4 + -1 < iVar2) {
      iVar2 = FUN_021ad38c(param_1);
      (**(code **)(*param_1 + 0x198))(param_1,(param_2 - param_1[0x4f]) + iVar2 + -1);
      return;
    }
    (**(code **)(*param_1 + 0x168))(param_1,0);
    (**(code **)(*param_1 + 0x178))();
  }
  return;
}

