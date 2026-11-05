
int FUN_021bfc54(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(short *)(DAT_021d5258 + 0x528) == 0) || (*(short *)(DAT_021d5258 + 0x526) == 1)) {
    return 1;
  }
  if (*(short *)(DAT_021d5258 + 0x524) == 1) {
    if (*(short *)(DAT_021d5258 + 0x52c) == 0) {
      uVar2 = 1000;
    }
    else {
      uVar2 = 0;
    }
    iVar1 = FUN_021bfd24(*(undefined4 *)(DAT_021d5258 + 0x508),param_1,param_2,uVar2,param_3);
    if (iVar1 == 2) {
      *(undefined1 *)(DAT_021d5258 + 0x50c) = 1;
      return 0;
    }
  }
  else if (*(short *)(DAT_021d5258 + 0x524) == 2) {
    iVar1 = FUN_021bfd24(0x21c0425,param_1,param_2,0,param_3);
    if (iVar1 == 2) {
      *(undefined1 *)(DAT_021d5258 + 0x50c) = 1;
      return 0;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

