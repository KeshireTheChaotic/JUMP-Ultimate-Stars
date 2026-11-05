
uint FUN_02067d8c(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint local_24;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x470 + (uint)*(byte *)(param_1 + 0xd13) * 0xc0;
  local_24 = 0;
  if (*(byte *)(param_1 + 0xd0c) >> 6 == 0) {
    iVar5 = 0;
    if (*(short *)(iVar1 + 10) == 0x20) {
      local_24 = FUN_02067aa8(iVar1);
      if ((int)local_24 < 1) {
        local_24 = 0;
      }
      else {
        iVar5 = 1;
      }
    }
    else if (*(short *)(iVar1 + 10) == 8) {
      local_24 = FUN_020685c4(iVar1);
      if (local_24 == 0) {
        local_24 = 0;
      }
      else {
        iVar5 = 1;
      }
    }
    local_20 = 0;
    if (*(char *)(param_1 + 0xd10) != '\0') {
      local_1c = param_1 + 0x304;
      pbVar3 = (byte *)(param_1 + 0x300);
      iVar4 = param_1;
      do {
        if ((*(ushort *)(iVar1 + 10) == (ushort)*(byte *)(iVar4 + 0x303)) &&
           (iVar2 = FUN_02004cec(iVar1 + 0xc,local_1c), iVar2 == 0)) {
          if (iVar5 == 0) {
            local_24 = (uint)*(byte *)(iVar4 + 0x301);
          }
          else {
            *pbVar3 = *pbVar3 & 0xf | 0x10;
            *(byte *)(param_1 + 0xd0c) = *(byte *)(param_1 + 0xd0c) & 0x3f | 0x40;
          }
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 0x24;
        local_1c = local_1c + 0x24;
        pbVar3 = pbVar3 + 0x24;
        local_20 = local_20 + 1;
      } while (local_20 < (int)(uint)*(byte *)(param_1 + 0xd10));
    }
  }
  else {
    iVar5 = 0;
    iVar1 = iVar5;
    if (*(char *)(param_1 + 0xd10) != '\0') {
      pbVar3 = (byte *)(param_1 + 0x300);
      iVar4 = param_1;
      do {
        if (*pbVar3 >> 4 == 1) {
          if (iVar1 == 0) {
            *pbVar3 = *pbVar3 & 0xf;
            local_24 = (uint)*(byte *)(iVar4 + 0x301);
          }
          iVar1 = iVar1 + 1;
        }
        pbVar3 = pbVar3 + 0x24;
        iVar4 = iVar4 + 0x24;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0xd10));
    }
    if (iVar1 == 1) {
      *(byte *)(param_1 + 0xd0c) = *(byte *)(param_1 + 0xd0c) & 0x3f;
    }
  }
  return local_24 & 0xff;
}

