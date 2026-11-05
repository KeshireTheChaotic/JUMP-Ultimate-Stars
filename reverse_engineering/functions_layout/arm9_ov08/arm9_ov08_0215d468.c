
void FUN_0215d468(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_021622d4();
  switch(param_1) {
  case 0:
  case 1:
    uVar3 = 0;
    uVar4 = 0;
    iVar1 = FUN_0215d400(0);
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    break;
  case 2:
    if (*(char *)(iVar1 + 0xf5) == '\0') {
      uVar3 = 2;
      uVar2 = 3;
    }
    else {
      uVar3 = 1;
      uVar2 = 4;
    }
    uVar4 = *(char *)(DAT_0216e794 + 4) != '\0';
    FUN_0215d33c(uVar2,*(char *)(DAT_0216e794 + 5) != '\0',param_2);
    break;
  case 3:
  case 4:
  case 5:
    uVar3 = 0;
    if (*(char *)(iVar1 + 0xf5) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
    break;
  case 6:
    uVar4 = 0;
    if (*(char *)(iVar1 + 0xf6) == '\0') {
      if (*(char *)(iVar1 + 0xf5) == '\0') {
        uVar4 = 2;
      }
      uVar3 = 2;
      uVar2 = 3;
    }
    else {
      uVar3 = 1;
      uVar2 = 4;
    }
    if (*(char *)(DAT_0216e794 + 6) != '\0') {
      uVar4 = 1;
    }
    FUN_0215d33c(uVar2,*(char *)(DAT_0216e794 + 7) != '\0',param_2);
    break;
  case 7:
  case 8:
    uVar3 = 0;
    if (*(char *)(iVar1 + 0xf6) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
    break;
  default:
    uVar3 = 0;
    uVar4 = 2;
  }
  FUN_0215d33c(uVar3,uVar4,param_2);
  return;
}

