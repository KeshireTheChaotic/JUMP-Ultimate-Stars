
void FUN_02166d14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_20 [20];
  
  iVar1 = func_0x0219bc20();
  if (iVar1 == 0) {
    if (*(char *)(DAT_0214ccf8 + 0x57) < '\0') {
      func_0x0219bf84(param_1);
      *(undefined1 *)(DAT_0214ccf8 + 0xa3c) = 0;
    }
    else {
      iVar1 = func_0x0219d880();
      if (iVar1 != 0) {
        *(undefined4 *)(DAT_0214ccf8 + 0x48) = 4;
        *(undefined4 *)(DAT_0214ccf8 + 0x3c) = 0;
        FUN_02028384(*(undefined4 *)(param_1 + 4),0x219c074);
        uVar2 = func_0x0219b4a4();
        *(undefined4 *)(DAT_0214ccf8 + 0xa2c) = uVar2;
        uVar2 = func_0x0219b4b0();
        *(undefined4 *)(DAT_0214ccf8 + 0xa30) = uVar2;
        *(undefined1 *)(DAT_0214ccf8 + 0x61) = 0;
        func_0x0219cb58();
        uVar4 = 0;
        do {
          uVar3 = func_0x021766fc();
          if ((uVar4 != uVar3) && (iVar1 = func_0x02176654(uVar4), iVar1 != 0)) {
            func_0x0217eb74(uVar4,10000);
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < 4);
        DAT_020afe98 = 0xffffffff;
        FUN_020517fc(auStack_20,0,0x14);
        uVar2 = FUN_02070cdc(0);
        FUN_020725e0(uVar2,auStack_20,0);
        func_0x0219a6d0();
        if (*(code **)(DAT_0214ccf8 + 0x68) != (code *)0x0) {
          (**(code **)(DAT_0214ccf8 + 0x68))();
        }
      }
    }
  }
  return;
}

