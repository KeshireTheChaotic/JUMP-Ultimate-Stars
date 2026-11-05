
int FUN_02068788(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0x11) {
    return 0x11;
  }
  uVar3 = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0xd12);
  if (uVar1 != 0) {
    do {
      if (*(char *)(param_1 + uVar3 * 4 + 0x444) == '\0') break;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar1);
  }
  if (param_2 == 6) {
    if (uVar1 == uVar3) {
      if (uVar3 == 0) {
        FUN_02067378(5);
      }
      else {
        FUN_02067378(6);
      }
      return 0x11;
    }
  }
  else {
    if (uVar1 == 0) {
      return param_2;
    }
    if (uVar1 == uVar3) {
      return param_2;
    }
    if (*(byte *)(param_1 + uVar3 * 4 + 0x446) < 0x14) {
      return param_2;
    }
  }
  *(char *)(param_1 + 0xd13) = (char)uVar3;
  iVar2 = func_0x021990f4();
  if (iVar2 != 1) {
    *(char *)(param_1 + 0xd0e) = (char)param_2;
    param_2 = 7;
  }
  return param_2;
}

