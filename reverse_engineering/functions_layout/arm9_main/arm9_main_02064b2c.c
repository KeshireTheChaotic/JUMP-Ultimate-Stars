
undefined4 FUN_02064b2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int local_64 [5];
  undefined1 auStack_50 [64];
  
  FUN_020517fc(local_64,0,0x14);
  FUN_02051890(DAT_0209dd34,auStack_50,DAT_0209dd38);
  FUN_0204ff24(local_64,param_2,param_3,auStack_50,DAT_0209dd38);
  uVar2 = 0;
  piVar1 = local_64;
  do {
    if (*piVar1 != *(int *)(param_1 + uVar2)) break;
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x14);
  if (uVar2 == 0x14) {
    return 1;
  }
  return 0;
}

