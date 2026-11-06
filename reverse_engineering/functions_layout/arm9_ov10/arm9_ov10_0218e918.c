
void FUN_0218e918(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_68;
  int local_64;
  int local_30;
  int local_24;
  int local_18;
  
  DAT_021a852c = 0;
  FUN_020517fc(&DAT_021a860c,0,100);
  DAT_021a8648 = 0x180;
  DAT_021a864c = &DAT_021a89d4;
  DAT_021a8654 = 0x180;
  DAT_021a8658 = &DAT_021a8854;
  FUN_0218f40c();
  local_68 = 0;
  local_64 = 1;
  local_18 = 1;
  DAT_021a84f4 = 1;
  local_30 = 0;
  local_24 = 0;
  do {
    FUN_02052ea0(1000);
    if (DAT_021a852c != 0) {
      if (((DAT_021a84f8 & 1) == 0) && (local_68 != 3)) {
        FUN_0218e2e4();
      }
      FUN_0218f3fc();
      return;
    }
    uVar5 = OS_GetTick();
    uVar4 = (uint)uVar5 >> 0x10 | (int)((ulonglong)uVar5 >> 0x20) << 0x10;
    iVar1 = (*DAT_021a8530)();
    if (iVar1 == 0) {
      FUN_02191578(1);
      local_68 = 0;
      local_18 = 1;
      local_64 = 1;
    }
    else {
      local_18 = local_18 + -1;
      if (local_18 == 0) {
        if ((DAT_021a84f8 & 1) == 0) {
          if (local_68 < 4) {
            (*(code *)((int)&switchD_0218e9e6::switchdataD_0218e9e8 +
                      (int)(short)(&switchD_0218e9e6::switchdataD_0218e9e8)[local_68]))();
            return;
          }
        }
        else if (local_68 == 0) {
          FUN_0218eba8();
          local_68 = 1;
        }
      }
    }
    piVar2 = &DAT_021a85ac;
    iVar1 = local_30;
    do {
      if ((*piVar2 != 0) &&
         (0x3bd < (int)((uVar4 - *(ushort *)((int)piVar2 + 10)) * 0x10000) >> 0x10)) {
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    iVar1 = DAT_020aab7c;
    if ((DAT_021a8514 != 0) && (local_64 = local_64 + -1, local_64 == 0)) {
      FUN_02190ccc();
      local_64 = 0x69;
      iVar1 = DAT_020aab7c;
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
      piVar2 = *(int **)(iVar1 + 0xa4);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
        if (((char)piVar2[2] == '\x03') && (0x27 < (int)(uVar4 - piVar2[4]))) {
          *(undefined1 *)(piVar2 + 2) = 1;
          *(undefined2 *)(piVar2 + 6) = *(undefined2 *)((int)piVar2 + 0x1a);
          piVar2[7] = piVar2[8];
        }
        else if ((((char)piVar2[2] == '\x02') && (0x27 < (int)(uVar4 - piVar2[4]))) &&
                (piVar2[1] == 1)) {
          *(undefined1 *)(piVar2 + 2) = 0;
          piVar2[1] = 0;
          FUN_020531dc(*piVar2);
        }
      }
    }
    puVar3 = &DAT_021a8b54;
    iVar1 = local_24;
    do {
      if ((*(short *)(puVar3 + 1) != 0) && (0xef < (int)(uVar4 - puVar3[0xb]))) {
        (*DAT_021a8528)(puVar3[0xd]);
        *(undefined2 *)(puVar3 + 1) = 0;
      }
      puVar3 = puVar3 + 0xe;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    FUN_02193bc0(uVar4);
    if (DAT_021a8524 != (code *)0x0) {
      (*DAT_021a8524)();
    }
  } while( true );
}

