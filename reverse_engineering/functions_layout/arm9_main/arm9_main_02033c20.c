
undefined1 * FUN_02033c20(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  uVar3 = 0;
  do {
    if (0xff < uVar3) {
LAB_02033c74:
      for (uVar2 = 0;
          (uVar2 < 0x100 - uVar3 &&
          ((&DAT_020a9df4)[uVar2 + uVar4] = *(undefined1 *)(param_2 + uVar2),
          *(char *)(param_2 + uVar2) != '\0')); uVar2 = uVar2 + 1) {
      }
      return &DAT_020a9df4;
    }
    cVar1 = *(char *)(param_1 + uVar3);
    if (cVar1 == '.') {
      uVar4 = uVar3;
    }
    if (cVar1 == '/') {
      uVar4 = 0xffffffff;
    }
    (&DAT_020a9df4)[uVar3] = cVar1;
    if (cVar1 == '\0') {
      if (uVar4 == 0xffffffff) {
        uVar4 = uVar3;
      }
      goto LAB_02033c74;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

