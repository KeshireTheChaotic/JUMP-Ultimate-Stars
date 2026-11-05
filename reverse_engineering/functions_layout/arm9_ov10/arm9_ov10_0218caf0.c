
void FUN_0218caf0(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  uint local_64;
  undefined1 local_60;
  undefined1 local_5f;
  char local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 auStack_57 [67];
  
  local_6c = DAT_021a6710;
  local_6b = DAT_021a6711;
  local_6a = DAT_021a6712;
  local_69 = DAT_021a6713;
  local_68 = DAT_021a6714;
  local_67 = DAT_021a6715;
  local_66 = 2;
  local_65 = 0;
  local_5f = (undefined1)param_1[3];
  uVar5 = param_1[2];
  local_64 = uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 0x18 | uVar5 >> 8 & 0xff00;
  local_5e = param_1[1] != -1;
  uVar1 = FUN_0218cc98();
  FUN_0218cc98();
  uVar2 = FUN_0218cc98();
  FUN_0218cc98();
  local_5a = (undefined1)((uint)uVar2 >> 0x18);
  local_59 = 0;
  local_58 = 0;
  local_5d = uVar1;
  local_5c = extraout_var;
  local_5b = extraout_var_01;
  FUN_02004b18(auStack_57,&DAT_020a0604);
  iVar3 = FUN_02004b04(&DAT_020a0604);
  iVar3 = iVar3 + 0x16;
  if ((local_5e != '\0') && (param_1[5] == 0)) {
    local_60 = 0;
    FUN_0218cce0(param_1[1],DAT_021a817c,0x6cfd,&local_6c,iVar3,uVar2);
  }
  if (param_1[6] == 0) {
    local_60 = 1;
    FUN_0218cce0(*param_1,DAT_021a817c,0x6cfd,&local_6c,iVar3,uVar2);
  }
  if (local_5e == '\0') {
    uVar2 = *param_1;
    uVar4 = *param_1;
  }
  else {
    uVar2 = param_1[1];
    uVar4 = param_1[1];
  }
  FUN_0218cc74(uVar4);
  local_59 = FUN_0218cc74(uVar2);
  local_58 = extraout_var_00;
  if (param_1[7] == 0) {
    local_60 = 2;
    FUN_0218cce0(*param_1,DAT_021a8178,0x6cfd,&local_6c,iVar3);
  }
  iVar3 = FUN_02001ed8();
  param_1[10] = iVar3 + 500;
  param_1[9] = 0x1e;
  return;
}

