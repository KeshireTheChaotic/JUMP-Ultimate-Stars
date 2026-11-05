
void FUN_0218fb10(undefined4 param_1,int param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)FUN_02190100();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0218ff48(param_1,param_2,param_3,0);
    return;
  }
  bVar2 = *(byte *)(param_2 + 0xd);
  puVar3[0xc] = ((int)(uint)*(ushort *)(param_2 + 8) >> 8 | (*(ushort *)(param_2 + 8) & 0xff) << 8)
                << 0x10 | (int)(uint)*(ushort *)(param_2 + 10) >> 8 |
                          (*(ushort *)(param_2 + 10) & 0xff) << 8;
  if ((*(char *)(puVar3 + 2) == '\x04') &&
     (puVar3[9] !=
      (((int)(uint)*(ushort *)(param_2 + 4) >> 8 | (*(ushort *)(param_2 + 4) & 0xff) << 8) << 0x10 |
      (int)(uint)*(ushort *)(param_2 + 6) >> 8 | (*(ushort *)(param_2 + 6) & 0xff) << 8))) {
    FUN_02190024(puVar3,0);
    return;
  }
  *(ushort *)(puVar3 + 0xb) = *(ushort *)(param_2 + 0xe) >> 8 | *(ushort *)(param_2 + 0xe) << 8;
  switch(*(undefined1 *)(puVar3 + 2)) {
  case 0:
  case 2:
    FUN_0218ff48(param_1,param_2,param_3,0);
    break;
  default:
    if ((bVar2 & 1) != 0) {
      puVar3[9] = puVar3[9] + 1;
    }
    FUN_02190024(puVar3,0);
    break;
  case 3:
    *(undefined1 *)(puVar3 + 2) = 4;
    if (puVar3[1] == 1) {
      puVar3[1] = 0;
      FUN_020531dc(*puVar3);
    }
    if (param_3 == 0) break;
  case 4:
    puVar3[0xd] = puVar3[0xd] + 1;
    uVar4 = puVar3[0xf] - puVar3[0x11];
    bVar1 = uVar4 < param_3;
    if (bVar1) {
      param_3 = uVar4;
    }
    if (param_3 != 0) {
      uVar5 = OS_DisableInterrupts();
      iVar6 = FUN_0200d12c(*(byte *)(param_2 + 0xc) & 0xf0,4);
      FUN_02051890(param_2 + iVar6,puVar3[0x10] + puVar3[0x11],param_3);
      puVar3[0x11] = puVar3[0x11] + param_3;
      puVar3[9] = puVar3[9] + param_3;
      OS_RestoreInterrupts(uVar5);
      if (puVar3[1] == 2) {
        puVar3[1] = 0;
        FUN_020531dc(*puVar3);
      }
    }
    if ((bVar1) || ((bVar2 & 1) == 0)) {
      if (param_3 != 0) {
        FUN_02190024(puVar3,0);
      }
    }
    else {
      *(undefined1 *)(puVar3 + 2) = 6;
      puVar3[9] = puVar3[9] + 1;
      FUN_02190018(puVar3,0);
      if ((param_3 == 0) && (puVar3[1] == 2)) {
        puVar3[1] = 0;
        FUN_020531dc(*puVar3);
      }
    }
    break;
  case 6:
  case 9:
    *(undefined1 *)(puVar3 + 2) = 0;
    if (puVar3[1] == 2) {
      puVar3[1] = 0;
      FUN_020531dc(*puVar3);
    }
    break;
  case 7:
  case 8:
    if ((bVar2 & 1) == 0) {
      if (param_3 != 0) {
        puVar3[9] = puVar3[9] + param_3;
        FUN_02190024(puVar3,0);
      }
      *(undefined1 *)(puVar3 + 2) = 8;
    }
    else {
      puVar3[9] = puVar3[9] + param_3 + 1;
      FUN_02190024(puVar3,0);
      *(undefined1 *)(puVar3 + 2) = 0;
      if (puVar3[1] == 2) {
        puVar3[1] = 0;
        FUN_020531dc(*puVar3);
      }
    }
  }
  FUN_02053008();
  return;
}

