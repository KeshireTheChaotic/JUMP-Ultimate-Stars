
void FUN_02177c54(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_248;
  int local_244;
  undefined1 auStack_240 [24];
  int local_228 [133];
  
  if (*(char *)(DAT_021a75a4 + 0x1e) == '\0') {
    FUN_02181f14(*(undefined4 *)(DAT_021a75a4 + 4),&local_248);
    FUN_021779d8();
    local_244 = 0;
    if (0 < local_248) {
      do {
        FUN_02181e2c(*(undefined4 *)(DAT_021a75a4 + 4),local_244,local_228);
        FUN_021779d8();
        iVar4 = 0;
        if (0 < param_2) {
          do {
            iVar2 = FUN_02177f7c(iVar4);
            if (local_228[0] == iVar2) {
              iVar2 = FUN_02069c1c(param_1 + iVar4 * 0xc);
              if (iVar2 == 0) {
                iVar2 = param_1 + iVar4 * 0xc;
                FUN_02069670(iVar2,local_228[0]);
                FUN_02069bc0(iVar2);
                *(undefined1 *)(DAT_021a75a4 + 0x1d) = 1;
              }
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_2);
        }
        if (iVar4 == param_2) {
          FUN_02181d48(*(undefined4 *)(DAT_021a75a4 + 4),local_228[0]);
          FUN_021779d8();
          local_248 = local_248 + -1;
          local_244 = local_244 + -1;
        }
        local_244 = local_244 + 1;
      } while (local_244 < local_248);
    }
    *(undefined1 *)(DAT_021a75a4 + 0x1e) = 1;
  }
  bVar1 = *(byte *)(DAT_021a75a4 + 0x1c);
  do {
    if (param_2 <= (int)(uint)bVar1) {
      return;
    }
    iVar4 = FUN_02177f7c();
    if (iVar4 == 0) {
      uVar3 = FUN_02177558();
      iVar4 = FUN_02069718(uVar3,param_1 + (uint)*(byte *)(DAT_021a75a4 + 0x1c) * 0xc);
      if (iVar4 == -1) {
        uVar3 = FUN_02177558();
        FUN_02069660(uVar3,param_1 + (uint)*(byte *)(DAT_021a75a4 + 0x1c) * 0xc,auStack_240);
        FUN_02182224(*(undefined4 *)(DAT_021a75a4 + 4),0,0,0,0,auStack_240,0,0,0x2177879,
                     *(undefined1 *)(DAT_021a75a4 + 0x1c));
        *(undefined1 *)(DAT_021a75a4 + 0x1e) = 2;
        return;
      }
    }
    else {
      iVar2 = FUN_02177b88(param_1,*(undefined1 *)(DAT_021a75a4 + 0x1c),iVar4);
      if (iVar2 == 0) {
        FUN_02181ddc(*(undefined4 *)(DAT_021a75a4 + 4),iVar4,&local_244);
        FUN_021779d8();
        if (local_244 == -1) {
          FUN_02177aac(iVar4);
        }
      }
    }
    *(char *)(DAT_021a75a4 + 0x1c) = *(char *)(DAT_021a75a4 + 0x1c) + '\x01';
    bVar1 = *(byte *)(DAT_021a75a4 + 0x1c);
  } while( true );
}

