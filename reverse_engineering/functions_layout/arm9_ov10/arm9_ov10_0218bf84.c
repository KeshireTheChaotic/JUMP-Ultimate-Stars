
undefined4 FUN_0218bf84(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  
  local_18 = (undefined4 *)0x0;
  iVar1 = FUN_0218c278(param_1,param_3,param_4);
  if (iVar1 != 0) {
    return 5;
  }
  local_18 = (undefined4 *)FUN_0218c0d4();
  if (local_18 != (undefined4 *)0x0) {
    FUN_02002488(local_18,0,0xa0);
    *local_18 = param_3;
    *(short *)(local_18 + 1) = (short)param_4;
    local_18[2] = param_1;
    uVar2 = FUN_02001ed8();
    local_18[7] = uVar2;
    local_18[0x22] = local_18[7];
    *(undefined2 *)(local_18 + 0x19) = 0;
    *(undefined2 *)((int)local_18 + 0x66) = 0;
    iVar1 = FUN_02189ee8(local_18 + 0x11,*(undefined4 *)(param_1 + 0x3c));
    if ((iVar1 != 0) &&
       (iVar1 = FUN_02189ee8(local_18 + 0x14,*(undefined4 *)(param_1 + 0x38)), iVar1 != 0)) {
      uVar2 = FUN_02001368(0x10,0x40,0);
      local_18[0x17] = uVar2;
      if (local_18[0x17] != 0) {
        uVar2 = FUN_02001368(0x10,0x40,0);
        local_18[0x18] = uVar2;
        if (local_18[0x18] != 0) {
          uVar2 = FUN_02001368(4,2,0);
          local_18[0x26] = uVar2;
          if (local_18[0x26] != 0) {
            uVar2 = FUN_02001368(4,2,0);
            local_18[0x27] = uVar2;
            if (local_18[0x27] != 0) {
              FUN_0200159c(*(undefined4 *)(param_1 + 0xc),&local_18);
              iVar1 = FUN_0218c278(param_1,param_3,param_4);
              *param_2 = iVar1;
              if (*param_2 != 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    FUN_02175814(local_18[0x11]);
    FUN_02175814(local_18[0x14]);
    if (local_18[0x17] != 0) {
      FUN_02001320();
    }
    if (local_18[0x18] != 0) {
      FUN_02001320();
    }
    if (local_18[0x26] != 0) {
      FUN_02001320();
    }
    if (local_18[0x27] != 0) {
      FUN_02001320();
    }
    FUN_02175814(local_18);
  }
  return 1;
}

