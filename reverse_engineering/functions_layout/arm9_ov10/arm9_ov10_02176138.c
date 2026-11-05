
void FUN_02176138(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 != 0)) {
    if (*(int *)(DAT_021a7410 + 0x4ec) == 0) {
      FUN_0217d0ec();
      FUN_0217643c(3);
    }
  }
  else if (param_1 == 0) {
    FUN_0217643c(6);
    iVar3 = 0;
    iVar2 = DAT_021a7410;
    do {
      if (*(int *)(DAT_021a7410 + 100) == *(int *)(iVar2 + 0x448)) {
        *(undefined1 *)(DAT_021a7410 + 0x2c) = *(undefined1 *)(DAT_021a7410 + iVar3 + 0x61c);
        break;
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)(uint)*(byte *)(DAT_021a7410 + 0x361));
  }
  uVar1 = FUN_021763e0(DAT_021a7410 + 0x61c,*(byte *)(DAT_021a7410 + 0x361) + 1);
  *(undefined4 *)(DAT_021a7410 + 0x63c) = uVar1;
  FUN_0217cc00();
  if ((*(char *)(DAT_021a7410 + 0x369) == '\x02') || (*(char *)(DAT_021a7410 + 0x369) == '\x03')) {
    (**(code **)(DAT_021a7410 + 0x88))
              (param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(DAT_021a7410 + 0x8c));
  }
  else {
    (**(code **)(DAT_021a7410 + 0x80))(param_1,param_2,*(undefined4 *)(DAT_021a7410 + 0x84));
  }
  if (((param_1 != 0) && (DAT_021a7410 != 0)) && (*(int *)(DAT_021a7410 + 0x24) == 5)) {
    FUN_0217643c(3);
  }
  return;
}

