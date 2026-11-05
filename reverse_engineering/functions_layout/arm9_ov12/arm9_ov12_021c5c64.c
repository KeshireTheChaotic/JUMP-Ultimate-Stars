
void FUN_021c5c64(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte local_2c [20];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  uVar3 = 0;
  do {
    *(char *)(param_3 + uVar3) = (char)uVar3;
    local_2c[uVar3] = *(byte *)(param_1 + uVar3 + 0xc80);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x14);
  uVar3 = 0;
  uVar4 = uVar3;
  do {
    while (uVar3 = uVar3 + 1 & 0xff, uVar3 < 0x14) {
      bVar1 = *(byte *)(param_3 + uVar4);
      if (local_2c[bVar1] < local_2c[*(byte *)(param_3 + uVar3)]) {
        *(byte *)(param_3 + uVar4) = *(byte *)(param_3 + uVar3);
        *(byte *)(param_3 + uVar3) = bVar1;
      }
    }
    uVar3 = uVar4 + 1 & 0xff;
    uVar4 = uVar3;
  } while (uVar3 < 0x14);
  uVar3 = 0;
  do {
    local_2c[uVar3] = local_2c[*(byte *)(param_3 + uVar3)];
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x14);
  uVar4 = 0;
  uVar3 = 0;
  do {
    cVar2 = '\0';
    for (uVar5 = uVar4 + 1; uVar5 = uVar5 & 0xff, uVar5 < 0x14; uVar5 = uVar5 + 1) {
      if (*(char *)(param_1 + (uint)*(byte *)(param_3 + uVar4) + 0xc80) ==
          *(char *)(param_1 + (uint)*(byte *)(param_3 + uVar5) + 0xc80)) {
        cVar2 = cVar2 + '\x01';
      }
    }
    *(char *)(param_2 + uVar4) = (char)uVar3;
    if (cVar2 == '\0') {
      uVar3 = uVar4 + 1 & 0xff;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 0x14);
  return;
}

