
void FUN_0217c16c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_28 [24];
  
  bVar1 = *(byte *)(param_1 + 0x3e);
  if (bVar1 == 0) {
    cVar2 = *(char *)(param_1 + 0x43);
    uVar5 = 0;
    if (cVar2 == '\0') {
      uVar6 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),0);
      uVar4 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),1);
      uVar5 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),2);
      uVar5 = uVar6 | uVar4 | uVar5;
    }
    else if (cVar2 == '\x01') {
      uVar5 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),1);
      uVar6 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),2);
      uVar5 = uVar5 | uVar6;
    }
    else if (cVar2 == '\x02') {
      uVar5 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),2);
    }
    if ((uVar5 & 2) != 0) {
      uVar5 = uVar5 & 0xffffffd7;
    }
    uVar6 = 1;
    uVar4 = 0;
    do {
      if ((uVar5 & 0xfffff9ff & 1 << (uVar6 & 0xff)) != 0) {
        local_28[uVar4] = (char)uVar6;
        uVar4 = uVar4 + 1 & 0xff;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x18);
    if (uVar4 != 0) {
      uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar3,uVar4);
      FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),local_28[extraout_r1],0);
    }
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
  }
  else {
    *(byte *)(param_1 + 0x3e) = bVar1 + 1;
    if (2 < bVar1) {
      *(undefined1 *)(param_1 + 0x3a) = 0;
      *(undefined1 *)(param_1 + 0x3e) = 0;
      *(undefined1 *)(param_1 + 0x39) = 7;
    }
  }
  return;
}

