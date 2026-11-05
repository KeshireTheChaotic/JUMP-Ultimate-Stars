
void FUN_0215e5c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0215e5a8(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar2 == 0) {
    iVar2 = FUN_0215dec8();
    if (iVar2 == 0) {
      FUN_0215d2e4(param_1);
    }
  }
  else {
    iVar2 = FUN_0215d4e0(param_1);
    if (iVar2 != 0) {
      FUN_02157450(param_1,0x14);
      *(undefined1 *)(param_1 + 0x1e8) = 10;
      *(undefined1 *)(param_1 + 0x1e7) = 0;
      *(undefined1 *)(param_1 + 0x1e9) = 0;
      FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),1);
    }
    if (*(char *)(param_1 + 0x1e8) == '\0') {
      iVar2 = FUN_0215a824(param_1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x1e7) = 1;
      }
      if ((*(uint *)(param_1 + 0x6c) & 1) == 1) {
        *(undefined1 *)(param_1 + 0x1e7) = 2;
      }
      if (((*(uint *)(param_1 + 0x6c) & 2) == 2) ||
         (cVar1 = *(char *)(param_1 + 0x1e9), *(char *)(param_1 + 0x1e9) = cVar1 + '\x01',
         0x77 < (byte)(cVar1 + 1U))) {
        FUN_0207d180(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10));
        iVar2 = FUN_0215dec8(param_1);
        if (iVar2 == 0) {
          FUN_0215d2e4(param_1);
        }
      }
      else if (*(char *)(param_1 + 0x1e7) != '\0') {
        FUN_02157494(param_1,0x10,FUN_0215e724,FUN_0215e828,0x10,param_4);
        FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),1);
      }
    }
    else {
      *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + -1;
    }
  }
  return;
}

