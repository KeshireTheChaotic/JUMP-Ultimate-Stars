
int FUN_0218e100(char *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char cVar7;
  ushort *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_5c;
  uint local_58;
  ushort local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  char local_48;
  char local_47 [51];
  
  local_54 = (ushort)(param_3 >> 8) | (ushort)(param_3 << 8);
  if (param_2 == 0x20) {
    local_52 = 0x1001;
  }
  else {
    local_52 = 1;
  }
  local_50 = 0x100;
  local_4e = 0;
  local_4c = 0;
  local_4a = 0;
  pcVar9 = &local_48;
  pcVar5 = local_47;
  local_58 = 0;
  cVar7 = *param_1;
  if (cVar7 != '\0') {
    do {
      param_1 = param_1 + 1;
      if (cVar7 == '.') {
        *pcVar9 = (char)local_58;
        local_58 = 0;
        pcVar9 = pcVar5;
      }
      else {
        if (0x3b < (int)pcVar5 - (int)&local_54) {
          return -1;
        }
        *pcVar5 = cVar7;
        local_58 = local_58 + 1;
      }
      pcVar5 = pcVar5 + 1;
      cVar7 = *param_1;
    } while (cVar7 != '\0');
  }
  *pcVar9 = (char)local_58;
  *pcVar5 = '\0';
  pcVar5[1] = (char)(param_2 >> 8);
  pcVar5[2] = (char)param_2;
  pcVar5[3] = '\0';
  pcVar5[4] = '\x01';
  FUN_0218eca8(&local_54,pcVar5 + (5 - (int)&local_54));
  iVar10 = 0;
  uVar11 = FUN_02054b44();
  local_5c = -1;
  do {
    while( true ) {
      iVar4 = (*DAT_021a8530)();
      if (((iVar4 == 0) || (iVar10 != 0)) ||
         (uVar12 = FUN_02054b44(),
         0xe < (int)(((uint)uVar12 >> 0x10 | (int)((ulonglong)uVar12 >> 0x20) << 0x10) -
                    ((uint)uVar11 >> 0x10 | (int)((ulonglong)uVar11 >> 0x20) << 0x10)))) {
        return iVar10;
      }
      iVar4 = FUN_0218ec54();
      if (iVar4 != 0) break;
      FUN_02191554();
    }
    puVar1 = (ushort *)FUN_0218f044(&local_58);
    if ((0xc < local_58) && (param_3 == ((int)(uint)*puVar1 >> 8 | (*puVar1 & 0xff) << 8))) {
      if ((*(byte *)((int)puVar1 + 3) & 0xf) == 3) {
        iVar10 = local_5c;
      }
      else if ((*(byte *)((int)puVar1 + 3) & 0xf) == 0) {
        puVar8 = (ushort *)((int)puVar1 + local_58);
        puVar2 = puVar1 + 6;
        for (uVar6 = (uint)CONCAT11((char)puVar1[2],*(undefined1 *)((int)puVar1 + 5)); uVar6 != 0;
            uVar6 = uVar6 - 1) {
          iVar4 = FUN_0218e2c0();
          puVar2 = (ushort *)(iVar4 + 4);
        }
        while (puVar2 < puVar8) {
          puVar3 = (undefined1 *)FUN_0218e2c0();
          uVar6 = (uint)CONCAT11(puVar3[8],puVar3[9]);
          if (param_2 == CONCAT11(*puVar3,puVar3[1])) {
            if (param_2 == 0xc) {
              if (param_5 < uVar6) {
                iVar10 = 2;
              }
              else {
                FUN_02051890(puVar3 + 10,param_4);
                iVar10 = 1;
              }
            }
            else {
              iVar10 = CONCAT22(CONCAT11(puVar3[uVar6 + 6],puVar3[uVar6 + 7]),
                                CONCAT11(puVar3[uVar6 + 8],puVar3[uVar6 + 9]));
            }
            break;
          }
          puVar2 = (ushort *)(puVar3 + uVar6 + 10);
        }
      }
    }
    FUN_0218efb4(local_58);
  } while( true );
}

