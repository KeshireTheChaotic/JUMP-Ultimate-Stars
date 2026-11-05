
int FUN_0205f108(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                int param_7,uint param_8)

{
  sbyte sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_3c;
  int local_38;
  int local_30;
  
  if ((int)param_2 < 8) {
    iVar7 = 0x1f - LZCOUNT(param_2);
  }
  else {
    iVar7 = 3;
  }
  if ((int)param_3 < 8) {
    iVar3 = 0x1f - LZCOUNT(param_3);
  }
  else {
    iVar3 = 3;
  }
  iVar3 = iVar3 * 8 + 0x2092184;
  sVar1 = *(sbyte *)(iVar3 + iVar7 * 2);
  uVar4 = (uint)*(byte *)(iVar3 + iVar7 * 2 + 1);
  uVar5 = param_2 & -1 << sVar1;
  uVar6 = param_3 & -1 << uVar4;
  if (param_6 == 0) {
    local_3c = 1;
  }
  else {
    local_3c = 2;
  }
  uVar2 = FUN_02060304();
  for (local_30 = 0; local_30 < (int)param_3 >> uVar4; local_30 = local_30 + 1) {
    for (iVar7 = 0; iVar7 < (int)param_2 >> sVar1; iVar7 = iVar7 + 1) {
      *param_1 = *param_1 & 0xfe00ff00 | param_5 + (local_30 << uVar4) * 8 & 0xffU |
                 (param_4 + (iVar7 << sVar1) * 8 & 0x1ffU) << 0x10;
      *param_1 = *param_1 & 0x3fff3fff | uVar2;
      *(ushort *)(param_1 + 1) = (ushort)param_1[1] & 0xfc00 | (ushort)param_7;
      param_7 = param_7 + (((local_3c << sVar1) << uVar4) >> (param_8 & 0xff));
      *param_1 = *param_1 & 0xffffdfff | param_6 << 0xd;
      param_1 = param_1 + 2;
    }
  }
  local_38 = ((int)param_2 >> sVar1) * ((int)param_3 >> uVar4);
  if (uVar5 < param_2) {
    iVar7 = FUN_0205f108(param_1,param_2 - uVar5,uVar6,param_4 + uVar5 * 8,param_5,param_6,param_7,
                         param_8);
    param_1 = param_1 + iVar7 * 2;
    param_7 = param_7 + (uVar6 * local_3c * (param_2 - uVar5) >> (param_8 & 0xff));
    local_38 = local_38 + iVar7;
  }
  if (uVar6 < param_3) {
    iVar7 = FUN_0205f108(param_1,uVar5,param_3 - uVar6,param_4,param_5 + uVar6 * 8,param_6,param_7,
                         param_8);
    param_1 = param_1 + iVar7 * 2;
    param_7 = param_7 + ((param_3 - uVar6) * local_3c * uVar5 >> (param_8 & 0xff));
    local_38 = local_38 + iVar7;
  }
  if ((uVar5 < param_2) && (uVar6 < param_3)) {
    iVar7 = FUN_0205f108(param_1,param_2 - uVar5,param_3 - uVar6,param_4 + uVar5 * 8,
                         param_5 + uVar6 * 8,param_6,param_7,param_8);
    local_38 = local_38 + iVar7;
  }
  return local_38;
}

