
void FUN_0218c6e0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  uint local_24;
  undefined1 local_1f;
  
  local_2c = DAT_021a6710;
  local_2b = DAT_021a6711;
  local_2a = DAT_021a6712;
  local_29 = DAT_021a6713;
  local_28 = DAT_021a6714;
  local_27 = DAT_021a6715;
  local_26 = 2;
  local_25 = 6;
  local_1f = (undefined1)param_1[3];
  uVar1 = param_1[2];
  local_24 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  FUN_0218cce0(*param_1,*(undefined4 *)(param_2 + 4),
               (int)(uint)*(ushort *)(param_2 + 2) >> 8 | (*(ushort *)(param_2 + 2) & 0xff) << 8,
               &local_2c,0x15);
  return;
}

