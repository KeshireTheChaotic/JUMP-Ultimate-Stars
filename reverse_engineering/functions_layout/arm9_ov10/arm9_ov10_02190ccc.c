
void FUN_02190ccc(uint param_1)

{
  undefined1 auStack_38 [6];
  undefined1 auStack_32 [6];
  undefined2 local_2c;
  undefined1 local_29;
  undefined1 local_28;
  undefined2 local_26;
  undefined1 local_23;
  undefined1 auStack_22 [6];
  ushort local_1c;
  ushort local_1a;
  ushort local_12;
  ushort local_10;
  
  FUN_020517fc(auStack_38,0,0x2a);
  FUN_020517fc(auStack_38,0xff,6);
  FUN_02051890(&DAT_021a8548,auStack_32,6);
  local_2c = 0x608;
  local_29 = 1;
  local_28 = 8;
  local_26 = 0x406;
  local_23 = 1;
  FUN_02051890(&DAT_021a8548,auStack_22,6);
  local_1c = (ushort)(byte)(DAT_021a8538 >> 0x18) | (ushort)((DAT_021a8538 >> 0x10) << 8);
  local_1a = (ushort)((DAT_021a8538 & 0xffff) >> 8) | (ushort)((DAT_021a8538 & 0xffff) << 8);
  local_12 = (ushort)(byte)(param_1 >> 0x18) | (ushort)((param_1 >> 0x10) << 8);
  local_10 = (ushort)((param_1 & 0xffff) >> 8) | (ushort)((param_1 & 0xffff) << 8);
  FUN_0219104c(auStack_38,0x2a,0,0);
  return;
}

