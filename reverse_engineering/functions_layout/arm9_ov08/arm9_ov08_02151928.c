
undefined4 FUN_02151928(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int local_30;
  uint *local_2c;
  
  local_30 = 0;
  *param_1 = (uint)param_2[3] ^
             (uint)param_2[2] << 8 ^ (uint)*param_2 << 0x18 ^ (uint)param_2[1] << 0x10;
  param_1[1] = (uint)param_2[7] ^
               (uint)param_2[6] << 8 ^ (uint)param_2[4] << 0x18 ^ (uint)param_2[5] << 0x10;
  param_1[2] = (uint)param_2[0xb] ^
               (uint)param_2[10] << 8 ^ (uint)param_2[8] << 0x18 ^ (uint)param_2[9] << 0x10;
  param_1[3] = (uint)param_2[0xf] ^
               (uint)param_2[0xe] << 8 ^ (uint)param_2[0xc] << 0x18 ^ (uint)param_2[0xd] << 0x10;
  if (param_3 == 0x80) {
    puVar2 = &DAT_02167be8;
    while( true ) {
      uVar1 = param_1[3];
      param_1[4] = *puVar2 ^ *(uint *)(&DAT_02169810 + (uVar1 >> 0x18) * 4) & 0xff ^
                             *(uint *)(&DAT_02169810 + (uVar1 & 0xff) * 4) & 0xff00 ^
                             *param_1 ^
                             *(uint *)(&DAT_02169810 + (uVar1 >> 0x10 & 0xff) * 4) & 0xff000000 ^
                             *(uint *)(&DAT_02169810 + (uVar1 >> 8 & 0xff) * 4) & 0xff0000;
      param_1[5] = param_1[1] ^ param_1[4];
      param_1[6] = param_1[2] ^ param_1[5];
      param_1[7] = param_1[3] ^ param_1[6];
      puVar2 = puVar2 + 1;
      local_30 = local_30 + 1;
      if (9 < local_30) break;
      param_1 = param_1 + 4;
    }
    return 10;
  }
  param_1[4] = (uint)param_2[0x13] ^
               (uint)param_2[0x12] << 8 ^ (uint)param_2[0x10] << 0x18 ^ (uint)param_2[0x11] << 0x10;
  param_1[5] = (uint)param_2[0x17] ^
               (uint)param_2[0x16] << 8 ^ (uint)param_2[0x14] << 0x18 ^ (uint)param_2[0x15] << 0x10;
  if (param_3 == 0xc0) {
    puVar2 = &DAT_02167be8;
    while( true ) {
      uVar1 = param_1[5];
      param_1[6] = *puVar2 ^ *(uint *)(&DAT_02169810 + (uVar1 >> 0x18) * 4) & 0xff ^
                             *(uint *)(&DAT_02169810 + (uVar1 & 0xff) * 4) & 0xff00 ^
                             *param_1 ^
                             *(uint *)(&DAT_02169810 + (uVar1 >> 0x10 & 0xff) * 4) & 0xff000000 ^
                             *(uint *)(&DAT_02169810 + (uVar1 >> 8 & 0xff) * 4) & 0xff0000;
      param_1[7] = param_1[1] ^ param_1[6];
      param_1[8] = param_1[2] ^ param_1[7];
      param_1[9] = param_1[3] ^ param_1[8];
      puVar2 = puVar2 + 1;
      local_30 = local_30 + 1;
      if (7 < local_30) break;
      param_1[10] = param_1[4] ^ param_1[9];
      param_1[0xb] = param_1[5] ^ param_1[10];
      param_1 = param_1 + 6;
    }
    return 0xc;
  }
  param_1[6] = (uint)param_2[0x1b] ^
               (uint)param_2[0x1a] << 8 ^ (uint)param_2[0x18] << 0x18 ^ (uint)param_2[0x19] << 0x10;
  param_1[7] = (uint)param_2[0x1f] ^
               (uint)param_2[0x1e] << 8 ^ (uint)param_2[0x1c] << 0x18 ^ (uint)param_2[0x1d] << 0x10;
  if (param_3 != 0x100) {
    return 0;
  }
  local_2c = &DAT_02167be8;
  while( true ) {
    uVar1 = param_1[7];
    param_1[8] = *local_2c ^
                 *(uint *)(&DAT_02169810 + (uVar1 >> 0x18) * 4) & 0xff ^
                 *(uint *)(&DAT_02169810 + (uVar1 & 0xff) * 4) & 0xff00 ^
                 *param_1 ^ *(uint *)(&DAT_02169810 + (uVar1 >> 0x10 & 0xff) * 4) & 0xff000000 ^
                 *(uint *)(&DAT_02169810 + (uVar1 >> 8 & 0xff) * 4) & 0xff0000;
    param_1[9] = param_1[1] ^ param_1[8];
    param_1[10] = param_1[2] ^ param_1[9];
    param_1[0xb] = param_1[3] ^ param_1[10];
    local_2c = local_2c + 1;
    local_30 = local_30 + 1;
    if (6 < local_30) break;
    uVar1 = param_1[0xb];
    param_1[0xc] = *(uint *)(&DAT_02169810 + (uVar1 & 0xff) * 4) & 0xff ^
                   *(uint *)(&DAT_02169810 + (uVar1 >> 8 & 0xff) * 4) & 0xff00 ^
                   param_1[4] ^ *(uint *)(&DAT_02169810 + (uVar1 >> 0x18) * 4) & 0xff000000 ^
                   *(uint *)(&DAT_02169810 + (uVar1 >> 0x10 & 0xff) * 4) & 0xff0000;
    param_1[0xd] = param_1[5] ^ param_1[0xc];
    param_1[0xe] = param_1[6] ^ param_1[0xd];
    param_1[0xf] = param_1[7] ^ param_1[0xe];
    param_1 = param_1 + 8;
  }
  return 0xe;
}

