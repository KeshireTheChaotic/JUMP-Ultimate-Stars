
undefined4 FUN_0214fc2c(undefined1 *param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = OS_DisableInterrupts();
  DAT_0216d104 = param_4;
  if (param_1 == (undefined1 *)0x0) {
    FUN_020517fc(&DAT_0216d128,0xff,6);
    DAT_0216d110 = (undefined1 *)0x21a3630;
  }
  else {
    iVar4 = 0;
    puVar3 = &DAT_0216d128;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    DAT_0216d110 = &DAT_0216d128;
  }
  if (((param_2 == (undefined1 *)0x0) || (param_3 < 1)) || (0x20 < param_3)) {
    FUN_020517fc(&DAT_0216d130,0xff,0x20);
    DAT_0216d114 = (undefined1 *)0x21a3638;
  }
  else {
    iVar4 = 0;
    if (0 < param_3) {
      puVar3 = &DAT_0216d130;
      do {
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    if (iVar4 < 0x20) {
      puVar3 = &DAT_0216d130 + iVar4;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x20);
    }
    DAT_0216d114 = &DAT_0216d130;
  }
  if (DAT_0216d118 == 3) {
    iVar4 = func_0x02199294(DAT_0216d110,DAT_0216d114,DAT_0216d104);
    if (iVar4 == 3) {
      DAT_0216d118 = 6;
      OS_RestoreInterrupts(uVar2);
      return 1;
    }
  }
  else {
    iVar4 = FUN_0214fd8c();
    if (iVar4 == 1) {
      DAT_0216d118 = 6;
      OS_RestoreInterrupts(uVar2);
      return 1;
    }
  }
  OS_RestoreInterrupts(uVar2);
  return 0;
}

