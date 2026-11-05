
void FUN_02150f1c(uint *param_1,int param_2,byte *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_44;
  
  local_6c = *param_1 ^
             (uint)param_3[3] ^
             (uint)param_3[2] << 8 ^ (uint)*param_3 << 0x18 ^ (uint)param_3[1] << 0x10;
  local_68 = param_1[1] ^
             (uint)param_3[7] ^
             (uint)param_3[6] << 8 ^ (uint)param_3[4] << 0x18 ^ (uint)param_3[5] << 0x10;
  local_44 = param_1[2] ^
             (uint)param_3[0xb] ^
             (uint)param_3[10] << 8 ^ (uint)param_3[8] << 0x18 ^ (uint)param_3[9] << 0x10;
  uVar6 = param_1[3] ^
          (uint)param_3[0xf] ^
          (uint)param_3[0xe] << 8 ^ (uint)param_3[0xc] << 0x18 ^ (uint)param_3[0xd] << 0x10;
  local_64 = param_2 >> 1;
  while( true ) {
    uVar2 = param_1[4] ^
            *(uint *)(&DAT_02168010 + (local_68 & 0xff) * 4) ^
            *(uint *)(&DAT_02167c10 + (local_44 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_02169c10 + (local_6c >> 0x18) * 4) ^
            *(uint *)(&DAT_0216a010 + (uVar6 >> 0x10 & 0xff) * 4);
    uVar3 = param_1[5] ^
            *(uint *)(&DAT_02168010 + (local_44 & 0xff) * 4) ^
            *(uint *)(&DAT_02167c10 + (uVar6 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_02169c10 + (local_68 >> 0x18) * 4) ^
            *(uint *)(&DAT_0216a010 + (local_6c >> 0x10 & 0xff) * 4);
    uVar5 = param_1[6] ^
            *(uint *)(&DAT_02168010 + (uVar6 & 0xff) * 4) ^
            *(uint *)(&DAT_02167c10 + (local_6c >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_02169c10 + (local_44 >> 0x18) * 4) ^
            *(uint *)(&DAT_0216a010 + (local_68 >> 0x10 & 0xff) * 4);
    uVar6 = param_1[7] ^
            *(uint *)(&DAT_02168010 + (local_6c & 0xff) * 4) ^
            *(uint *)(&DAT_02167c10 + (local_68 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_02169c10 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_0216a010 + (local_44 >> 0x10 & 0xff) * 4);
    puVar1 = param_1 + 8;
    local_64 = local_64 + -1;
    if (local_64 == 0) break;
    local_6c = *puVar1 ^ *(uint *)(&DAT_02168010 + (uVar3 & 0xff) * 4) ^
                         *(uint *)(&DAT_02167c10 + (uVar5 >> 8 & 0xff) * 4) ^
                         *(uint *)(&DAT_02169c10 + (uVar2 >> 0x18) * 4) ^
                         *(uint *)(&DAT_0216a010 + (uVar6 >> 0x10 & 0xff) * 4);
    local_68 = param_1[9] ^
               *(uint *)(&DAT_02168010 + (uVar5 & 0xff) * 4) ^
               *(uint *)(&DAT_02167c10 + (uVar6 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_02169c10 + (uVar3 >> 0x18) * 4) ^
               *(uint *)(&DAT_0216a010 + (uVar2 >> 0x10 & 0xff) * 4);
    local_44 = param_1[10] ^
               *(uint *)(&DAT_02168010 + (uVar6 & 0xff) * 4) ^
               *(uint *)(&DAT_02167c10 + (uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_02169c10 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_0216a010 + (uVar3 >> 0x10 & 0xff) * 4);
    uVar6 = param_1[0xb] ^
            *(uint *)(&DAT_02168010 + (uVar2 & 0xff) * 4) ^
            *(uint *)(&DAT_02167c10 + (uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_02169c10 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_0216a010 + (uVar5 >> 0x10 & 0xff) * 4);
    param_1 = puVar1;
  }
  uVar4 = *puVar1 ^ *(uint *)(&DAT_02168410 + (uVar3 & 0xff) * 4) & 0xff ^
                    *(uint *)(&DAT_02168410 + (uVar5 >> 8 & 0xff) * 4) & 0xff00 ^
                    *(uint *)(&DAT_02168410 + (uVar2 >> 0x18) * 4) & 0xff000000 ^
                    *(uint *)(&DAT_02168410 + (uVar6 >> 0x10 & 0xff) * 4) & 0xff0000;
  *param_4 = (char)(uVar4 >> 0x18);
  param_4[1] = (char)(uVar4 >> 0x10);
  param_4[2] = (char)(uVar4 >> 8);
  param_4[3] = (char)uVar4;
  uVar4 = param_1[9] ^
          *(uint *)(&DAT_02168410 + (uVar5 & 0xff) * 4) & 0xff ^
          *(uint *)(&DAT_02168410 + (uVar6 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_02168410 + (uVar3 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_02168410 + (uVar2 >> 0x10 & 0xff) * 4) & 0xff0000;
  param_4[4] = (char)(uVar4 >> 0x18);
  param_4[5] = (char)(uVar4 >> 0x10);
  param_4[6] = (char)(uVar4 >> 8);
  param_4[7] = (char)uVar4;
  uVar4 = param_1[10] ^
          *(uint *)(&DAT_02168410 + (uVar6 & 0xff) * 4) & 0xff ^
          *(uint *)(&DAT_02168410 + (uVar2 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_02168410 + (uVar5 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_02168410 + (uVar3 >> 0x10 & 0xff) * 4) & 0xff0000;
  param_4[8] = (char)(uVar4 >> 0x18);
  param_4[9] = (char)(uVar4 >> 0x10);
  param_4[10] = (char)(uVar4 >> 8);
  param_4[0xb] = (char)uVar4;
  uVar6 = param_1[0xb] ^
          *(uint *)(&DAT_02168410 + (uVar2 & 0xff) * 4) & 0xff ^
          *(uint *)(&DAT_02168410 + (uVar3 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_02168410 + (uVar6 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_02168410 + (uVar5 >> 0x10 & 0xff) * 4) & 0xff0000;
  param_4[0xc] = (char)(uVar6 >> 0x18);
  param_4[0xd] = (char)(uVar6 >> 0x10);
  param_4[0xe] = (char)(uVar6 >> 8);
  param_4[0xf] = (char)uVar6;
  return;
}

