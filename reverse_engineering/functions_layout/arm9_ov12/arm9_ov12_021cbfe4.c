
undefined4 FUN_021cbfe4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = func_0x021766fc();
  if (param_2 == uVar1) {
    uVar2 = 1;
    if (*(char *)(param_1 + 10) != '\0') {
      uVar2 = 2;
    }
  }
  else {
    uVar1 = 1 << (param_2 & 0xff);
    if (((*(byte *)(param_1 + 0x11) & uVar1) != 0) &&
       (uVar2 = 1, (*(byte *)(param_1 + 0x12) & uVar1) != 0)) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

