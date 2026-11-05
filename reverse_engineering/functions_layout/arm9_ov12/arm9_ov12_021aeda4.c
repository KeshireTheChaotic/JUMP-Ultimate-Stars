
undefined4 FUN_021aeda4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    iVar3 = param_1[0x60];
    iVar1 = (**(code **)(*param_1 + 0x194))();
    iVar1 = (iVar1 - iVar3) - param_1[0x51];
    iVar4 = param_1[0x60];
    iVar3 = (**(code **)(*param_1 + 0x19c))();
    iVar3 = (iVar3 - iVar4) - param_1[0x51];
    iVar4 = param_1[0x52];
    if (iVar1 < 0) {
      if ((char)param_1[0x50] == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x194))();
        if (iVar2 != 0) {
          iVar1 = 0;
          iVar3 = 0;
        }
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x194))();
        if (iVar1 == 0) {
          iVar1 = iVar4 + -1;
          iVar3 = iVar4 - param_1[0x60];
        }
        else {
          iVar1 = 0;
          iVar3 = 0;
        }
      }
    }
    iVar2 = iVar4 + -1;
    if (iVar1 < iVar4 + -1) {
      iVar2 = iVar1;
    }
    if (iVar2 < 0) {
      iVar1 = 0;
    }
    else if (iVar4 + -1 <= iVar1) {
      iVar1 = iVar4 + -1;
    }
    iVar4 = iVar4 - param_1[0x60];
    if (iVar3 < iVar4) {
      iVar2 = iVar3;
    }
    else {
      iVar2 = iVar4;
    }
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    iVar4 = (**(code **)(*param_1 + 0x194))();
    if (iVar1 != iVar4) {
      (**(code **)(*param_1 + 0x1a0))(param_1,iVar3,0);
      (**(code **)(*param_1 + 0x198))(param_1,iVar1);
      return 1;
    }
  }
  else {
    iVar3 = param_1[0x60];
    iVar1 = (**(code **)(*param_1 + 0x194))();
    iVar1 = (iVar1 + iVar3) - param_1[0x51];
    iVar4 = param_1[0x60];
    iVar3 = (**(code **)(*param_1 + 0x19c))();
    iVar3 = (iVar3 + iVar4) - param_1[0x51];
    iVar4 = param_1[0x52];
    if (iVar4 < iVar1) {
      if ((char)param_1[0x50] == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x194))();
        if (iVar4 + -1 != iVar2) {
          iVar3 = iVar4 - param_1[0x60];
          iVar1 = iVar4 + -1;
        }
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x194))();
        if (iVar4 + -1 == iVar1) {
          iVar3 = 0;
          iVar1 = 0;
        }
        else {
          iVar3 = iVar4 - param_1[0x60];
          iVar1 = iVar4 + -1;
        }
      }
    }
    iVar2 = iVar4 + -1;
    if (iVar1 < iVar4 + -1) {
      iVar2 = iVar1;
    }
    if (iVar2 < 0) {
      iVar1 = 0;
    }
    else if (iVar4 + -1 <= iVar1) {
      iVar1 = iVar4 + -1;
    }
    iVar4 = iVar4 - param_1[0x60];
    if (iVar3 < iVar4) {
      iVar2 = iVar3;
    }
    else {
      iVar2 = iVar4;
    }
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    iVar4 = (**(code **)(*param_1 + 0x194))();
    if (iVar1 != iVar4) {
      (**(code **)(*param_1 + 0x1a0))(param_1,iVar3,0,0x1a0,param_4);
      (**(code **)(*param_1 + 0x198))(param_1,iVar1);
      return 1;
    }
  }
  return 0;
}

