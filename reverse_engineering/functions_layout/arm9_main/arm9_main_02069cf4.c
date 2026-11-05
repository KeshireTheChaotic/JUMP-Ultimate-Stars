
undefined * FUN_02069cf4(int param_1)

{
  uint local_18;
  uint local_14;
  
  local_18 = *(uint *)(param_1 + 8);
  local_14 = *(uint *)(param_1 + 0xc);
  FUN_02051890(param_1,&DAT_020afc04,5);
  DAT_020afc09 = (byte)((uint)*(undefined4 *)(param_1 + 4) >> 8) & 7 |
                 (byte)((local_18 & 0x1f) << 3);
  local_18 = local_18 >> 5 | local_14 << 0x1b;
  local_14 = local_14 >> 5;
  FUN_02051890(&local_18,&DAT_020afc0a,4);
  DAT_020afc0e = (byte)local_14 & 0x3f | (byte)((*(ushort *)(param_1 + 0x10) & 3) << 6);
  DAT_020afc0f = (undefined1)((int)(uint)*(ushort *)(param_1 + 0x10) >> 2);
  FUN_02051890(param_1 + 0x12,&DAT_020afc10,2);
  return &DAT_020afc04;
}

