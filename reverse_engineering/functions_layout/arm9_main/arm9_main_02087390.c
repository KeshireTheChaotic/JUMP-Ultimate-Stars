
void FUN_02087390(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_0208c51c();
  puVar2 = puRam020875ac;
  pcVar1 = pcRam020875a8;
  if (iVar3 == 0) {
    return;
  }
  if (*pcRam020875a8 != '\0') {
    while (*pcVar1 != '\0') {
      (*(code *)*puVar2)();
    }
    return;
  }
LAB_020873d0:
  pcVar1 = pcRam020875a8;
  *pcRam020875a8 = '\x01';
  pcVar1[1] = '\0';
  puVar2 = puRam020875ac;
  while (iVar3 = func_0x0219b728(), iVar3 != 0) {
    iVar3 = FUN_02086c4c();
    if (iVar3 != 0) goto LAB_02087598;
    (*(code *)*puVar2)();
  }
  pcRam020875a8[1] = '\x01';
  puVar2 = puRam020875ac;
  while (iVar3 = func_0x0219b70c(), iVar3 != 5) {
    iVar3 = FUN_02086c4c();
    if (iVar3 != 0) goto LAB_02087598;
    iVar3 = func_0x0219b728();
    if (iVar3 != 0) {
      func_0x0219d984();
      goto LAB_020873d0;
    }
    (*(code *)*puVar2)();
  }
  pcRam020875a8[1] = pcRam020875a8[1] + '\x01';
  func_0x0219b7e0(1,0xffffffff);
  (*(code *)*puRam020875ac)();
  iVar3 = func_0x0219b840();
  func_0x0219d9c8(iVar3 + 1);
  puVar2 = puRam020875ac;
  while (iVar3 = func_0x0219da2c(), iVar3 == 0) {
    iVar3 = FUN_02086c4c();
    if (iVar3 != 0) goto LAB_02087598;
    iVar3 = func_0x0219b728();
    if (iVar3 != 0) {
      func_0x0219d984();
      goto LAB_020873d0;
    }
    (*(code *)*puVar2)();
  }
  pcRam020875a8[1] = pcRam020875a8[1] + '\x01';
  func_0x0219da90();
  func_0x0219b840();
  uVar4 = func_0x0219da90();
  func_0x0219b7e0(1,uVar4);
  puVar2 = puRam020875ac;
  while (iVar3 = func_0x0219b814(), iVar3 == 0) {
    iVar3 = FUN_02086c4c();
    if (iVar3 != 0) goto LAB_02087598;
    iVar3 = func_0x0219b728();
    if (iVar3 != 0) {
      func_0x0219d984();
      goto LAB_020873d0;
    }
    (*(code *)*puVar2)();
  }
  pcRam020875a8[1] = pcRam020875a8[1] + '\x01';
  func_0x0219db00();
  puVar2 = puRam020875ac;
  do {
    iVar3 = func_0x0219db44();
    if (iVar3 != 0) {
      pcRam020875a8[1] = pcRam020875a8[1] + '\x01';
      func_0x0219d984();
      func_0x0219b7e0(0,0xffffffff);
LAB_02087598:
      *pcRam020875a8 = '\0';
      return;
    }
    iVar3 = FUN_02086c4c();
    if (iVar3 != 0) goto LAB_02087598;
    iVar3 = func_0x0219b728();
    if (iVar3 != 0) break;
    (*(code *)*puVar2)();
  } while( true );
  func_0x0219d984();
  goto LAB_020873d0;
}

