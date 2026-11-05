
uint FUN_0215cf30(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 local_20;
  short local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  iVar2 = FUN_02166d70(&DAT_0216af00);
  if (iVar2 == 0) {
    return 0xe;
  }
  iVar2 = FUN_020507a8(DAT_0216e790,0x1d);
  local_20 = DAT_0216aaa0;
  local_1e = DAT_0216aaa2;
  local_1c = DAT_0216aaa4;
  local_1a = DAT_0216aaa6;
  iVar4 = 0;
  do {
    if (((iVar2 != 2) && (iVar2 != 6)) && (iVar3 = FUN_02166cb0(&local_20), iVar3 != 0)) {
      return (uint)(byte)(&DAT_0216aab8)[iVar2];
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 1;
    local_1e = local_1e + 0x1d;
  } while (iVar4 < 4);
  iVar2 = FUN_020507a8(DAT_0216e790,0x1d);
  iVar4 = 0;
  do {
    if (iVar2 == 2) {
      local_20 = DAT_0216aab0;
      local_1c = DAT_0216aab4;
      local_1a = DAT_0216aab6;
      sVar1 = (short)iVar4 * 0x1d;
      local_1e = DAT_0216aab2 + sVar1;
      iVar2 = FUN_02166cb0(&local_20);
      if (iVar2 != 0) {
        return 2;
      }
      local_20 = DAT_0216aaa8;
      local_1c = DAT_0216aaac;
      local_1a = DAT_0216aaae;
      local_1e = DAT_0216aaaa + sVar1;
      iVar2 = FUN_02166cb0(&local_20);
      if (iVar2 != 0) {
        return 3;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar4 < 4);
  iVar2 = FUN_020507a8(DAT_0216e790,0x1d);
  iVar4 = 0;
  do {
    if (iVar2 == 6) {
      local_20 = DAT_0216aab0;
      local_1c = DAT_0216aab4;
      local_1a = DAT_0216aab6;
      sVar1 = (short)iVar4 * 0x1d;
      local_1e = DAT_0216aab2 + sVar1;
      iVar2 = FUN_02166cb0(&local_20);
      if (iVar2 != 0) {
        return 7;
      }
      local_20 = DAT_0216aaa8;
      local_1c = DAT_0216aaac;
      local_1a = DAT_0216aaae;
      local_1e = DAT_0216aaaa + sVar1;
      iVar2 = FUN_02166cb0(&local_20);
      if (iVar2 != 0) {
        return 8;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar4 < 4);
  iVar2 = 0;
  puVar5 = &DAT_0216ab58;
  do {
    iVar4 = FUN_02166d70(puVar5);
    if (iVar4 != 0) {
      return iVar2 + 0xb;
    }
    puVar5 = puVar5 + 8;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 0xe;
}

