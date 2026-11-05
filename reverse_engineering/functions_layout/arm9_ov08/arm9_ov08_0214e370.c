
undefined4 FUN_0214e370(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint local_20;
  undefined4 local_1c;
  
  iVar4 = 0;
  local_1c = 0;
  local_20 = *param_1;
  if (local_20 == 0) {
    return 5;
  }
  if (0x40 < local_20) {
    local_20 = 0x40;
  }
  iVar6 = 0;
  if (0 < (int)local_20) {
    puVar5 = param_1 + 2;
    do {
      if ((param_1[0x15] & 1) != 0) {
        uVar1 = FUN_0214cdb0(s_ESSID_AOSS_0216af90);
        if (param_1[1] == uVar1) {
          uVar2 = FUN_0214cdb0(s_ESSID_AOSS_0216af90);
          iVar3 = FUN_0214cf20(puVar5,s_ESSID_AOSS_0216af90,uVar2);
          if (iVar3 == 0) {
            iVar4 = iVar4 + 1;
          }
        }
      }
      param_1 = param_1 + 0x15;
      puVar5 = puVar5 + 0x15;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_20);
  }
  if (1 < iVar4) {
    local_1c = 4;
  }
  if (iVar4 == 0) {
    local_1c = 5;
  }
  return local_1c;
}

