
void FUN_0218c798(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined1 uStack_1c;
  undefined1 local_1b;
  ushort local_1a;
  int local_18;
  
  local_20 = 8;
  if (param_1[4] == 4) {
    FUN_0218cd58();
    return;
  }
  if (*param_1 != -1) {
    while (iVar1 = FUN_02001c9c(), iVar1 != 0) {
      iVar1 = FUN_02001a9c(*param_1,&DAT_021a8184,0x200,0,auStack_28,&local_20);
      if ((iVar1 == -1) || (FUN_0218c48c(&DAT_021a8184,iVar1,auStack_28), param_1[4] == 4)) break;
      if (*param_1 == -1) break;
    }
  }
  if ((param_1[4] == 0) || (param_1[4] == 2)) {
    uVar2 = FUN_02001ed8();
    if ((uint)param_1[10] < uVar2) {
      if (param_1[9] < param_1[8]) {
        (*(code *)param_1[0xe])(2,0xffffffff,0,param_1[0xf]);
        FUN_0218c8bc(param_1[2]);
      }
      else {
        param_1[8] = param_1[8] + 1;
        if (param_1[4] == 0) {
          FUN_0218caf0(param_1);
        }
        else {
          FUN_0218ca28(param_1);
        }
      }
    }
  }
  if (param_1[4] == 3) {
    uVar2 = FUN_02001ed8();
    if ((uint)param_1[10] < uVar2) {
      if (param_1[1] == -1) {
        local_1b = 2;
        local_1a = *(ushort *)(param_1 + 0xc) >> 8 | *(ushort *)(param_1 + 0xc) << 8;
        local_18 = param_1[0xb];
        (*(code *)param_1[0xe])(0,*param_1,&uStack_1c,param_1[0xf]);
        *param_1 = -1;
      }
      FUN_0218c8bc(param_1[2]);
    }
  }
  if ((param_1[4] == 1) && (uVar2 = FUN_02001ed8(), (uint)param_1[10] < uVar2)) {
    (*(code *)param_1[0xe])(1,0xffffffff,0,param_1[0xf]);
    FUN_0218c8bc(param_1[2]);
  }
  return;
}

