
void FUN_0218e918(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_68;
  int local_64;
  int local_30;
  int local_24;
  uint local_18;
  
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
  bVar1 = true;
  local_30 = 0;
  local_24 = 0;
  while (FUN_02052ea0(1000), DAT_021a852c == 0) {
    uVar6 = FUN_02054b44();
    uVar5 = (uint)uVar6 >> 0x10 | (int)((ulonglong)uVar6 >> 0x20) << 0x10;
    iVar2 = (*DAT_021a8530)();
    if (iVar2 == 0) {
      FUN_02191578(1);
      local_68 = 0;
      local_18 = 1;
      local_64 = 1;
    }
    else {
      local_18 = local_18 - 1;
      if (local_18 == 0) {
        if ((DAT_021a84f8 & 1) == 0) {
          switch(local_68) {
          case 0:
            if (bVar1) {
              DAT_021a84f4 = 2;
              bVar1 = false;
            }
            iVar2 = FUN_0218e3ec();
            if ((iVar2 == 0) || (iVar2 = FUN_0218e338(&local_18,0), iVar2 == 0)) {
              FUN_0218eba8();
              local_68 = 3;
            }
            else {
              local_68 = 1;
            }
            break;
          case 1:
            iVar2 = FUN_0218e338(&local_18,1);
            if ((iVar2 == 0) && (local_18 < 0x3c)) {
              local_68 = 2;
            }
            break;
          case 2:
            iVar2 = FUN_0218e338(&local_18,2);
            if (iVar2 == 0) {
              if (local_18 < 0x3c) {
                FUN_02191578(3);
                local_68 = 0;
                local_18 = 1;
                local_64 = 1;
              }
            }
            else {
              local_68 = 1;
            }
          }
        }
        else if (local_68 == 0) {
          FUN_0218eba8();
          local_68 = 1;
        }
      }
    }
    piVar3 = &DAT_021a85ac;
    iVar2 = local_30;
    do {
      if ((*piVar3 != 0) &&
         (0x3bd < (int)((uVar5 - *(ushort *)((int)piVar3 + 10)) * 0x10000) >> 0x10)) {
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 3;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar2 = DAT_020aab7c;
    if ((DAT_021a8514 != 0) && (local_64 = local_64 + -1, local_64 == 0)) {
      FUN_02190ccc();
      local_64 = 0x69;
      iVar2 = DAT_020aab7c;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      piVar3 = *(int **)(iVar2 + 0xa4);
      if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
        if (((char)piVar3[2] == '\x03') && (0x27 < (int)(uVar5 - piVar3[4]))) {
          *(undefined1 *)(piVar3 + 2) = 1;
          *(undefined2 *)(piVar3 + 6) = *(undefined2 *)((int)piVar3 + 0x1a);
          piVar3[7] = piVar3[8];
        }
        else if ((((char)piVar3[2] == '\x02') && (0x27 < (int)(uVar5 - piVar3[4]))) &&
                (piVar3[1] == 1)) {
          *(undefined1 *)(piVar3 + 2) = 0;
          piVar3[1] = 0;
          FUN_020531dc(*piVar3);
        }
      }
    }
    puVar4 = &DAT_021a8b54;
    iVar2 = local_24;
    do {
      if ((*(short *)(puVar4 + 1) != 0) && (0xef < (int)(uVar5 - puVar4[0xb]))) {
        (*DAT_021a8528)(puVar4[0xd]);
        *(undefined2 *)(puVar4 + 1) = 0;
      }
      puVar4 = puVar4 + 0xe;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    FUN_02193bc0(uVar5);
    if (DAT_021a8524 != (code *)0x0) {
      (*DAT_021a8524)();
    }
  }
  if (((DAT_021a84f8 & 1) == 0) && (local_68 != 3)) {
    FUN_0218e2e4();
  }
  FUN_0218f3fc();
  return;
}

