
void FUN_020883f4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = FUN_020876f8();
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_020876ac();
  *(char *)(iRam02088464 + 2) = (char)(1 << (uVar3 & 0xff));
  uVar4 = FUN_020876ac();
  FUN_02086e04(param_1,uVar4);
  puVar1 = puRam02088468;
  iVar2 = iRam02088464;
  while( true ) {
    uVar3 = FUN_02086da0();
    if (uVar3 == (uVar3 & *(byte *)(iVar2 + 2))) {
      return;
    }
    iVar5 = FUN_02086c4c();
    if (iVar5 != 0) break;
    (*(code *)*puVar1)();
  }
  return;
}

