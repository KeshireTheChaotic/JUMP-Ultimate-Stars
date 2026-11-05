
undefined4 FUN_0205e4e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_18;
  uint local_14;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar1 = *param_1;
    do {
      uVar4 = uVar1;
      if (*param_2 <= uVar4) {
        if (uVar4 == param_2[1]) {
          local_14 = *(int *)(uVar4 + 4) + uVar4 + 0x10;
          FUN_0205e9b4(param_1);
        }
        break;
      }
      uVar1 = *(uint *)(uVar4 + 0xc);
      uVar2 = uVar4;
    } while (*(uint *)(uVar4 + 0xc) != 0);
  }
  if ((uVar2 != 0) && (*(int *)(uVar2 + 4) + uVar2 + 0x10 == *param_2)) {
    local_18 = uVar2;
    uVar2 = FUN_0205e9b4(param_1,uVar2);
  }
  if (local_14 - local_18 < 0x10) {
    return 0;
  }
  uVar3 = FUN_0205e954(&local_18,0x4652);
  FUN_0205e984(param_1,uVar3,uVar2);
  return 1;
}

