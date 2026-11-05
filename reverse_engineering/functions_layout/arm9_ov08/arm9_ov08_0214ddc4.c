
undefined4 FUN_0214ddc4(int param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  bVar1 = false;
  iVar4 = 0;
  pcVar2 = &DAT_0216c1d8;
  do {
    if (*pcVar2 != '\0') {
      bVar1 = true;
      break;
    }
    pcVar2 = pcVar2 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (bVar1) {
    iVar4 = FUN_0214cf20(&DAT_0216c1d8,param_2,6);
    if (iVar4 != 0) {
      uVar3 = 1;
    }
  }
  else if (param_1 != 0x1000) {
    uVar3 = 2;
  }
  return uVar3;
}

