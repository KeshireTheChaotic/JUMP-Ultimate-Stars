
void FUN_0217f518(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 uStack_118;
  undefined1 local_117;
  undefined2 local_116;
  int local_114;
  char local_110 [4];
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108 [248];
  
  FUN_0217f6ac(param_1 + 2);
  iVar2 = FUN_02001ed8();
  param_2[7] = iVar2;
  local_117 = 2;
  if ((*(byte *)(param_2 + 5) & 0x20) == 0) {
    if (*param_1 == 1) {
      local_110[0] = -2;
      local_110[1] = 0xfd;
      iVar2 = 0;
      local_110[2] = 0;
      local_110[3] = (char)param_2[7];
      local_10c = *(undefined1 *)((int)param_2 + 0x1d);
      local_10b = *(undefined1 *)((int)param_2 + 0x1e);
      local_10a = *(undefined1 *)((int)param_2 + 0x1f);
      if ((*(byte *)(param_2 + 5) & 4) == 0) {
        local_109 = 0xff;
        local_108[0] = 0xff;
        local_108[1] = 0xff;
        iVar2 = 10;
      }
      else {
        local_109 = (undefined1)param_1[0x10];
        iVar5 = param_1[0x10];
        if (0 < iVar5) {
          do {
            local_108[iVar2] = *(undefined1 *)((int)param_1 + iVar2 + 0x2c);
            iVar2 = iVar2 + 1;
            iVar5 = param_1[0x10];
          } while (iVar2 < iVar5);
        }
        local_108[iVar5] = 0;
        local_108[param_1[0x10] + 1] = 0;
        iVar2 = param_1[0x10] + 10;
      }
    }
    else if ((*(byte *)(param_2 + 5) & 4) == 0) {
      pcVar4 = local_110;
      pcVar3 = s__status__021a4c78;
      iVar2 = 8;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = 8;
    }
    else {
      pcVar4 = local_110;
      pcVar3 = s__basic__info__021a4c68;
      iVar2 = 0xd;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = 0xd;
    }
    local_114 = *param_2;
    if ((local_114 == param_1[10]) && ((*(byte *)((int)param_2 + 0x15) & 2) != 0)) {
      local_114 = param_2[2];
      local_116 = (undefined2)param_2[3];
    }
    else {
      local_116 = (undefined2)param_2[1];
    }
    FUN_02001a50(param_1[8],local_110,iVar2,0,&uStack_118,8);
  }
  return;
}

