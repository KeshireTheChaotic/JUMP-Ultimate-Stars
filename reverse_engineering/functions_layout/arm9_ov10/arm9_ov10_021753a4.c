
undefined4 FUN_021753a4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [5];
  undefined1 auStack_2f [2];
  undefined1 local_2d;
  undefined1 auStack_2c [3];
  undefined1 local_29;
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 auStack_23 [2];
  undefined1 local_21;
  undefined1 auStack_20 [2];
  undefined1 local_1e;
  undefined1 auStack_1d [2];
  undefined1 local_1b;
  
  iVar1 = FUN_02004b04();
  iVar2 = FUN_02004b04(s_Fri__03_Mar_2006_01_28_13_GMT_021a3dec);
  if ((((((iVar1 == iVar2) && (*(char *)(param_1 + 7) == ' ')) && (*(char *)(param_1 + 0xb) == ' '))
       && ((*(char *)(param_1 + 0x10) == ' ' && (*(char *)(param_1 + 0x13) == ':')))) &&
      ((*(char *)(param_1 + 0x16) == ':' &&
       ((*(char *)(param_1 + 0x19) == ' ' && (iVar1 = FUN_020561dc(&local_50), iVar1 == 0)))))) &&
     ((iVar1 = FUN_0205611c(&local_40), iVar1 == 0 &&
      (lVar4 = FUN_0205646c(&local_50,&local_40), lVar4 != -1)))) {
    FUN_02004b18(auStack_34,param_1);
    local_2d = 0;
    local_29 = 0;
    local_24 = 0;
    local_21 = 0;
    local_1e = 0;
    local_1b = 0;
    DAT_020a0c10 = 0;
    local_50 = FUN_02005f14(auStack_28);
    if (DAT_020a0c10 != 0x22) {
      local_50 = local_50 + -2000;
      local_4c = 0xd;
      iVar1 = 0;
      puVar3 = &DAT_021a3dbc;
      do {
        iVar2 = FUN_02004c2c(*puVar3,auStack_2c);
        if (iVar2 == 0) {
          local_4c = iVar1 + 1;
          break;
        }
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0xc);
      if (local_4c < 0xd) {
        DAT_020a0c10 = 0;
        local_48 = FUN_02005f14(auStack_2f);
        if (DAT_020a0c10 != 0x22) {
          DAT_020a0c10 = 0;
          local_40 = FUN_02005f14(auStack_23);
          if (DAT_020a0c10 != 0x22) {
            DAT_020a0c10 = 0;
            local_3c = FUN_02005f14(auStack_20);
            if (DAT_020a0c10 != 0x22) {
              DAT_020a0c10 = 0;
              local_38 = FUN_02005f14(auStack_1d);
              if ((DAT_020a0c10 != 0x22) && (lVar5 = FUN_0205646c(&local_50,&local_40), lVar5 != -1)
                 ) {
                DAT_021a73dc = (int)(lVar4 - lVar5);
                DAT_021a73e0 = (int)((ulonglong)(lVar4 - lVar5) >> 0x20);
                DAT_021a73d8 = 1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

